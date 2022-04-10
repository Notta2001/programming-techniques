#include<bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

unsigned long long sqr(unsigned long long x) {
    return x*x % MOD;
}

// (ab) mod m = ((a mod m)(b mod m) mod m)
unsigned long long expMod (unsigned long long a, unsigned long long b) {
    if (b == 0)
        return 1 % MOD;
    else if (b % 2 == 0) 
        return sqr(expMod(a, b/2)) % MOD;   
    else 
        return a * (sqr(expMod(a, b/2)) % MOD) % MOD;
}

int main () {
    unsigned long long a, b;
    cin >> a >> b;  
    a %= MOD;
    b %= MOD-1;
    cout << expMod(a, b) << endl;   
    return 0;
}