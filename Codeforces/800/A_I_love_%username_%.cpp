#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ans=0,mx,mn,a,b;
    cin>>n>>a;
    mx=a;
    mn=a;
    for (int i=0;i<n-1;i++){
        cin>>b;
        if (b>mx){ans++;mx=b;}
        if (b<mn){ans++;mn=b;}
    }
    cout<<ans;
}