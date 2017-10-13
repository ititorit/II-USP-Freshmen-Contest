#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>
#define fi first
#define se second
#define ppii pair<pii, int>

const int MN = 1e5+5;

inline ll sqr(int x) {
    return 1LL * x * x;
}

inline ll dis(ppii a, ppii b) {
    return sqr(a.fi.fi - b.fi.fi) + sqr(a.fi.se - b.fi.se);
}

inline bool good(ppii a, ppii b) {
    return dis(a, b) == sqr(a.se + b.se);
}

vector<ppii> a;

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++ i) {
        int x, y, r;
        scanf("%d %d %d", &x, &y, &r);
        a.push_back({{x, y}, r});
    }
    for (int i = 0; i < n - 1; ++ i) {
        for (int j = i + 1; j < n; ++ j) {
            if(good(a[i], a[j])) {
                printf("%d %d\n", i + 1, j + 1);
            }
        }
    }
    return 0;
}
