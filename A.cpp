#include <bits/stdc++.h>
using namespace std;

const int MN = 111;
int a[MN];
typedef long long ll;
inline ll __lcm(ll a, ll b) {
    return (a * b) / __gcd(a, b);
}

int main() {
    ll n, a, b;
    scanf("%lld", &n);
    while(n--) {
        scanf("%lld %lld", &a, &b);
        if(__lcm(a, b) != a * b) {
            puts("Sim");
        } else {
            puts("Nao");
        }
    }
    return 0;
}
