#include<bits/stdc++.h>
using namespace std;

int step(char c) {
    if (c == ' ') 
        return 1;
    else if ('a' <= c && c <= 'o') 
        return (c - 'a') % 3 + 1;
    else if ('p' <= c && c <= 'v')
        return (c - 'p') % 4 + 1;
    else 
        return (c - 'w') % 4 + 1;
}

int sms(string s) {
    int res = 0;
    for (int i = 0; i < s.size(); i++) {
        res += step(s[i]);
    }
    return res;
}

int main () {
    int n;
    cin >> n;
    cin.ignore();
    for (int i = 1; i <= n; i++) {
        string str;
        getline(cin, str);
        cout << "Case #" << i << ": " << sms(str) << endl;
    }
    return 0;
}