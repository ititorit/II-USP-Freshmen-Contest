#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>
#define fi first
#define se second
#define ppii pair<pii, int>

const int MN = 1e5+5;
int a[MN];

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++ i) {
        scanf("%d", a + i);
    }
    int cnt = 0;
    while(n != 1) {
        ++ cnt;
        n >>= 1;
    }
    printf("%d", cnt + 1);
    return 0;
}
