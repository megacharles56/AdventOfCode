#include<bits/stdc++.h>
#define io_ ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;
//Part 2 is just and extension for Part 1 case
int main(){
    vector<string> forest;
    string aux;
    int n, m, ans=0;
    while(getline(cin, aux)){
        forest.push_back(aux);
    }
    n=forest.size();
    m=forest[0].size();

    /*for(int i=0,j=0; i<n; i++, j+=3){
        if(forest[i][j%m]=='#') ans++;
    } 193
    for(int i=0,j=0; i<n; i++, j++){
        if(forest[i][j%m]=='#') ans++;
    } 57
    for(int i=0,j=0; i<n; i++, j+=5){
        if(forest[i][j%m]=='#') ans++;
    } 64
    for(int i=0,j=0; i<n; i++, j+=7){
        if(forest[i][j%m]=='#') ans++;
    } 55
    for(int i=0,j=0; i<n; i+=2, j++){
        if(forest[i][j%m]=='#') ans++;
    } 35*/
    cout << ans;
}
