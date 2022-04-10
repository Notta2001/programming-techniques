#include<bits/stdc++.h>
using namespace std;

#define N 10000000

int a[N];
int n;
int s[N];

int subSeqMax() {
    s[0] = a[0];
    int ans = s[0];
    for (int i = 1; i < n; ++i) {
        if (s[i-1] > 0) {
            s[i] = s[i-1] + a[i];
        } else {
            s[i] = a[i];
        }

        if (ans < s[i]) {
            ans = s[i];
        }
    }
    return ans;
}

int main() {
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    cout << subSeqMax() << endl;
    return 0;
}


