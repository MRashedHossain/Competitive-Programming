#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int tc;cin>>tc;
    while(tc--){
        int n,s;cin>>n>>s;
        int l = (n+1)/2;
        l--;
        int r = n-l;
        cout<<(s/r)<<endl;
    }
}