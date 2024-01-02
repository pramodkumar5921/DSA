#include <bits/stdc++.h>
using namespace std;
struct suffix
{
int index;
int rank[2];
};
int cmp(struct suffix a, struct suffix b)
{
return (a.rank[0] == b.rank[0])?
(a.rank[1] < b.rank[1] ?1: 0):
(a.rank[0] < b.rank[0] ?1: 0);
}
vector<int> buildSuffixArray(string txt, int n)
{
struct suffix suffixes[n];
for (int i = 0; i < n; i++)
{
suffixes[i].index = i;
suffixes[i].rank[0] = (int)txt[i];
suffixes[i].rank[1] = ((i+1) < n)?
