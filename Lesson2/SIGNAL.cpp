#include<bits/stdc++.h>
using namespace std;
#define N 200000

int n, b, a[N];
int mL[N], mR[N];

void Signal(){
    mL[1] = a[1];
    for (int i = 2; i <= n; i++){
        mL[i] = max(mL[i-1], a[i]);
    }

    mR[n] = a[n];
    for (int i = n-1; i >= 1; i--){
        mR[i] = max(mR[i+1], a[i]);
    }

    int result = -1;
    for (int i = 1; i <= n; i++){
        if ((mL[i] - a[i] >= b) && (mR[i] - a[i] >= b)){
            result = max(mL[i] - a[i] + mR[i] - a[i], result);
        }
    }
    cout << result << endl;
}

int main() {
    cin >> n >> b;
    for (int i = 1; i <= n; i++){
        cin >> a[i];
    }
    Signal();
    return 0;
} 
 