#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int MN = 1e5 + 5;
const int inf = 1e9 + 7;
int it[MN << 2], a[MN];

void build(int l, int r, int pos) {
    if(l == r) {
        it[pos] = a[l];
        return ;
    }
    int mid = (l + r) >> 1;
    build(l, mid, pos << 1);
    build(mid + 1, r, pos << 1 | 1);
    it[pos] = min(it[pos << 1], it[pos << 1 | 1]);
    return ;
}

int query(int l, int r, int u, int v, int pos) {
    if(v < l or u > r) return inf;
    if(u <= l and r <= v) return it[pos];
    int mid = (l+r) >> 1;
    int t1 = query(l,mid,u,v,pos<<1);
    int t2 = query(mid+1,r,u,v,pos<<1|1);
    return min(t1,t2);
}

int main() {
    string s;
    cin >> s;
    int n = s.size();
    a[0] = 0;
    for (int i = 0; i < n; ++ i) {
        if(s[i] == 'A') {
            a[i + 1] = a[i] + 1;
        } else {
            a[i + 1] = a[i] - 1;
        }
    }
    build(1, n, 1);
    if(a[n] - a[0] == 0 and query(1, n, 1, n, 1) == a[0]) {
        puts("Sim");
    } else {
        puts("Nao");
    }
    return 0;
}
