#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int>& a, pair<int, int>& b) {
    double ratioA = (double)a.first / a.second;
    double ratioB = (double)b.first / b.second;
    return ratioA > ratioB;
}

int main() {
    int N, W;
    cin >> N >> W;

    vector<pair<int, int>> items(N);

    for (int i = 0; i < N; i++) {
        cin >> items[i].first >> items[i].second;
    }

    sort(items.begin(), items.end(), cmp);

    double totalValue = 0.0;
    int currentWeight = 0;

    for (int i = 0; i < N; i++) {
        if (currentWeight + items[i].second <= W) {
            totalValue += items[i].first;
            currentWeight += items[i].second;
        } else {
            double fraction = (double)(W - currentWeight) / items[i].second;
            totalValue += fraction * items[i].first;
            break;
        }
    }
    cout<<fixed<<totalValue<<setprecision(6)<<endl;
    // cout << fixed << setprecision(6) << totalValue << endl;

    return 0;
}
