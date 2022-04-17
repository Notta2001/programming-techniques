#include<bits/stdc++.h>

using namespace std;

int n, q;
vector<int> arr;
int dgg;

void REROAD(){
    cin >> q;
    for (int i = 0; i < q; i++){
        int p, c;
        cin >> p >> c;

        p = p - 1;

        int prevT = 1; 
        if (arr[p] != arr[p-1] && p-1 >= 0) prevT++;
        if (arr[p+1] != arr[p] && p+1 < n) prevT++;

        int afterT = 1;
        arr[p] = c; 
        if (arr[p] != arr[p-1] && p-1 >= 0) afterT++;
        if (arr[p+1] != arr[p] && p+1 < n) afterT++;

        int T = afterT - prevT ;
        dgg += T;
        cout << dgg << endl;
    }

}

int main(int argc, const char** argv) {
    cin >> n;
    for (int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }
    dgg = 1;
    for (int i = 1; i < n; i++){
        if (arr[i] != arr[i-1]) dgg++;
    } 
    REROAD();
    return 0;
} 
