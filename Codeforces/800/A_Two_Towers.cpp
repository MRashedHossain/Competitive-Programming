#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
    int tc;
    cin >> tc;
    while(tc--){
        int n,m;
        cin >> n >> m;
        string a,b;
        cin >> a >> b;
        
        int cnt = 0;
        for (int i=1 ; i<n ; i++){
            if (a[i]==a[i-1])cnt++;
        }
        for (int i=1 ; i<m ; i++){
            if (b[i]==b[i-1])cnt++;
        }
        
        if (cnt==0 || (cnt==1 && a[n-1]!=b[m-1]))cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}