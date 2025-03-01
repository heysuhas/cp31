#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, goal;
        cin >> n >> goal;
        vector<int> vec;
        vec.push_back(0);
        // 0
        for(int i = 0; i < n; i++){
            int point;
            cin>>point;
            vec.push_back(point);
        }
        vec.push_back(goal);
        // 0 1 2 5
        // 0 1 2 5
        n = vec.size(); // n is 5
        int max_dist = INT_MIN;
        for(int i = 1; i < n; i++){
            if (i == n - 1) // last point
                max_dist = max(max_dist, 2 * (vec[i] - vec[i - 1]));
            else
                max_dist = max(max_dist, vec[i] - vec[i - 1]);
        }
        cout << max_dist << endl;
    }
}