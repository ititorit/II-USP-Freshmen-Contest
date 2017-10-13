#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>

const int MN = 1e5+5;
int a[MN];
int b[MN];

int main() {
    int n, tot;
    scanf("%d %d", &n, &tot);
    for (int i = 1; i <= n; ++ i) {
        scanf("%d", a + i);
    }
    int s = 0, yan = 0, nathan  = 0;
    for (int i = 1; i <= n and s <= tot; ++ i) {
        s += a[i];
        ++ yan;
    }
    s = 0;
    for (int i = n; i >= 1 and s <= tot; -- i) {
        s += a[i];
        ++ nathan;
    }
    if(yan > nathan) puts("Yan");
    else if(yan < nathan) puts("Nathan");
    else puts("Empate");
    return 0;
}
