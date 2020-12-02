#include<bits/stdc++.h>
#define io_ ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

int main(){
    io_
    int x;
    int ans=0;
    vector<int> v(200);
    for(int i = 0; i < 200; i++){
        cin >> v[i];
    }
    for(int i = 0; i < 198; i++){
        cout << i << " = " << v[i] << "\n";
        unordered_set<int> n;
        int curr_sum = 2020 - v[i];
        for (int j = i + 1; j < 200; j++){
            if (n.find(curr_sum - v[j]) != n.end()){ 
                ans = v[i]*v[j]*(curr_sum-v[j]);
            }
            n.insert(v[j]);
        }
    }
    cout << ans;
}