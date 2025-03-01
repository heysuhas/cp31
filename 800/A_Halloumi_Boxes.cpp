#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> vec(n);
        for(int i = 0; i < n; i++){
            cin >> vec[i];
        }
        vector<int> vec_copy = vec;
        sort(vec_copy.begin(), vec_copy.end());

        if(vec == vec_copy || k > 1){
            cout << "YES" << endl; 
        } else {
            cout << "NO" << endl;
        }
    }
}