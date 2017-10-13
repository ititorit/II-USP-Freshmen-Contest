#include <bits/stdc++.h>
using namespace std;


typedef long long ll;
const int MN = 1e5 + 5;
ll a[MN];

int main() {
    int n, q;
    scanf("%d %d", &n, &q);
    a[0] = 0;
    for (int i = 1; i <= n; ++ i) {
        scanf("%lld", a + i);
        a[i] += a[i - 1];
    }
    while(q--) {
        int l, r;
        scanf("%d %d", &l, &r);
        if( (a[r] - a[l - 1]) % 2 == 0) {
            puts("Sim");
        } else {
            puts("Nao");
        }
    }
    return 0;
}
