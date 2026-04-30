#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,flag=0,ans=0,x;
    cin>>n;
    for (int i=0;i<n;i++){
        cin>>x;
        flag+=x;
        if (flag<0){ans+=flag;flag=0;}
    }
    cout<<abs(ans);
}