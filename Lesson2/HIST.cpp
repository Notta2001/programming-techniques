#include<bits/stdc++.h>
using namespace std;

long long n;
vector<long long> arr;
vector<long long> nR;
vector<long long> nL;

long long HIST() {
    stack<long long> st;

    nR.resize(n+2);
    for(long long i = 1; i <= n+1; i++){
        while (!st.empty() && arr[i] < arr[st.top()]){
            nR[st.top()] = i;
            st.pop();
        }
        st.push(i);
    }

    nL.resize(n+2);
    for (long long i = n; i >= 0; i--){
        while (!st.empty() && arr[i] < arr[st.top()]){
            nL[st.top()] = i;
            st.pop();
        }
        st.push(i);
    }

    long long result = 0;
    for (long long i = 1; i <= n; i++){
        long long dt = ( nR[i] -  nL[i] - 1)*arr[i];
        result = (dt > result) ? dt : result;
    }
    return result;
}

int main () {
    while (true) {
        cin >> n;
        if(n == 0) return 0;
        arr.push_back(-1);
        for (int i = 0; i < n; ++i) {
            long long ele;
            cin >> ele;
            arr.push_back(ele);
        }
        arr.push_back(-1);
        cout << HIST() << endl;
        arr.erase(arr.begin(), arr.end());
        nR.erase(nR.begin(), nR.end());
        nL.erase(nL.begin(), nL.end());
    }
    return 0;
}