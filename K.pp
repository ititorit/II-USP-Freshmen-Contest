#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; cin >> s;
    int cnt = 0, j;
    s += '@';
    for (int i = 0; i < s.size(); ++ i) {
        if(s[i] == '@') break;
        for (j = i; s[j] == s[i]; ++ j) {
            ++ cnt;
        }
        cout << s[i] << cnt;
        cnt = 0;
        i = j - 1;
    }
    return 0;
}
