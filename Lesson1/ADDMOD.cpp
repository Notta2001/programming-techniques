#include <bits/stdc++.h>
using namespace std;

# define MOD 1000000007

unsigned long long a, b;

int addMod () {
    a = a % MOD;
    b = b % MOD;
    return (a + b) % MOD;
}

int main () {
    cin >> a >> b;
    cout << addMod() << endl;
    return 0;
}