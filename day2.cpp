#include<bits/stdc++.h>
#define io_ ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

int main(){
    int ans=0, low, high, counter;
    string x, subx;
    char c;
    while(getline(cin, x)){
        subx="";
        counter=0;
        int i;
        for(i=0;x[i]!='-';i++){
            subx.push_back(x[i]);
        }
        low=stoi(subx);
        subx="";
        for(i++;x[i]!=' ';i++){
            subx.push_back(x[i]);
        }
        high=stoi(subx);
        c=x[++i];
        subx=x.substr(i+3);
        if((subx[low-1]==c&&subx[high-1]!=c)||(subx[high-1]==c&&subx[low-1]!=c)) ans++;
        cout << " " << ans << "\n";
    }
}