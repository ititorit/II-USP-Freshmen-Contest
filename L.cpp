#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>
vector<pii> a;
set<int> s;
map<int, int> mp;

bool cmp(const pii& a, const pii& b) {
    return a.first > b.first;
}

int main() {
    int n;
    scanf("%d", &n);
    int mx = -1;
    int x;
    for (int i = 1; i <= n; ++ i) {
        scanf("%d", &x);
        ++ mp[x];
        mx = max(mx, x);
        s.insert(x);
        a.push_back({x, i});
    }
    if(n == 1) {
        printf("%d", 1);
        return 0;
    }
    if(s.size() == 1 or mp[mx] > 1) {
        puts("-1");
        return 0;
    }
    sort(a.begin(), a.end(), cmp);
    printf("%d\n", a[0].second);
    return 0;
}
