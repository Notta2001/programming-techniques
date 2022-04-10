#include <bits/stdc++.h>
using namespace std;

string aliceAdd(string a, string b) {
    int i = a.size() - 1, j = b.size() - 1;
    string res = "";
    int surPlus = 0;
    while (i >= 0 || j >= 0) {
        int firstNum = i >= 0 ? a[i] - '0' : 0;
        int secondNum = j >= 0 ? b[i] - '0' : 0;
        int sum = firstNum + secondNum + surPlus; 
        res = char(sum%10 + '0') + res; 
        surPlus = floor(sum/10);
        i--;
        j--;
    }
    if (surPlus == 1) {
        res = '1' + res;
    } 

    return res;
}

int main () {
    string a, b;
    cin >> a >> b;
    cout << aliceAdd(a, b) << endl;
    return 0;
}