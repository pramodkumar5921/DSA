#include <bits/stdc++.h>
using namespace std;

#define int long long

int N = 1002;
vector<vector<int>> arr(N, vector<int>(N, 0));
vector<vector<int>> tree(4 * N, vector<int>(4 * N, 0));

void buildy(int nodex, int startx, int endx, int nodey, int starty, int endy) {
    if (starty == endy) {
        if (startx == endx) {
            tree[nodex][nodey] = arr[startx][starty];
        } else {
            tree[nodex][nodey] = tree[nodex * 2][nodey] + tree[nodex * 2 + 1][nodey];
        }
        return;
    } else {
        int mid = (starty + endy) / 2;
        buildy(nodex, startx, endx, nodey * 2, starty, mid);
        buildy(nodex, startx, endx, nodey * 2 + 1, mid + 1, endy);
        tree[nodex][nodey] = tree[nodex][nodey * 2] + tree[nodex][nodey * 2 + 1];
    }
    return;
}

void buildx(int nodex, int startx, int endx) {
    if (startx == endx) {
        buildy(nodex, startx, endx, 1, 1, arr[0].size() - 1);
        return;
    } else {
        int mid = (startx + endx) / 2;
        buildx(nodex * 2, startx, mid);
        buildx(nodex * 2 + 1, mid + 1, endx);
        buildy(nodex, startx, endx, 1, 1, arr[0].size() - 1);
    }
    return;
}

int queryy(int nodex, int nodey, int starty, int endy, int y1, int y2) {
    if (endy < y1 || y2 < starty) {
        return 0;
    }
    if (starty == endy) {
        return tree[nodex][nodey];
    } else if (y1 <= starty && endy <= y2) {
        return tree[nodex][nodey];
    } else {
        int mid = (starty + endy) / 2;
        int la = queryy(nodex, nodey * 2, starty, mid, y1, y2);
        int ra = queryy(nodex, nodey * 2 + 1, mid + 1, endy, y1, y2);

        return la + ra;
    }
}

int queryx(int nodex, int startx, int endx, int x1, int x2, int y1, int y2) {
    if (endx < x1 || x2 < startx) {
        return 0;
    } else if (x1 <= startx && endx <= x2) {
        return queryy(nodex, 1, 1, arr[0].size() - 1, y1, y2);
    } else {
        int mid = (startx + endx) / 2;
        int la = queryx(nodex * 2, startx, mid, x1, x2, y1, y2);
        int ra = queryx(nodex * 2 + 1, mid + 1, endx, x1, x2, y1, y2);

        return la + ra;
    }
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, q;
    cin >> n >> q;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            char ch;
            cin >> ch;
            if (ch == '*') {
                arr[i][j] = 1;
            } else {
                arr[i][j] = 0;
            }
        }
    }
    buildx(1, 1, N - 1);
    while (q--) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        cout << queryx(1, 1, arr.size()-1 , x1, x2, y1, y2) << endl;
    }
    return 0;
}
