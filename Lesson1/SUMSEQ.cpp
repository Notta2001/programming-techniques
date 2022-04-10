#include <bits/stdc++.h>
using namespace std;

# define N 1000000
# define MOD 1000000007

unsigned long long a[N];
int n;

unsigned long long sumSeq() {
    unsigned long long res = 0;
    for (int i = 0; i < n; ++i) {
        res += a[i];
        res %= MOD;
    }
    return res;
}

int main () {
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        a[i] %= MOD;
    }
        
    cout << sumSeq() << endl;
    return 0;
}