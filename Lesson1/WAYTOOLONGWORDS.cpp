#include<bits/stdc++.h>
using namespace std;

string process(string s) {
    int n = s.size();
    if(n <= 10)
        return s;
    else {
        return s[0] + to_string(n - 2) + s[n - 1];
    }
} 

int main () {
    int n;
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; ++i) {
        string str;
        cin >> str;
        cout << process(str) << endl;
    }
    return 0;
}