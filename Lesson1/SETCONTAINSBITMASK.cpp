#include<bits/stdc++.h>
using namespace std;

# define N 31

int a[N], b[N];
int n, m;

bool checkAppear(int x, int left, int right) {
    while (left <= right) {
        int mid = (left + right) / 2;
        if (a[mid] == x)
            return true;
        else if (a[mid] > x) 
            right = mid - 1;
        else 
            left = mid + 1;
    }
    return false; 
}

bool checkAllApear() {
    if (m > n) 
        return false;
    for (int i = 0; i < m; ++i) {
        if (checkAppear(b[i], 0, n - 1) == false) return false;
    }
    return true;
}
    
int main () {
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    cin >> m;
    for (int i = 0; i < m; ++i) {
        cin >> b[i];
    }
    sort(a, a + n);
    sort(b, b + m);
    cout << checkAllApear() << endl;
    return 0;
}

