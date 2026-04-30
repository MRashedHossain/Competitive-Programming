#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a[1010],ans=0;
    cin>>n>>m;
    for (int i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    for (int i=0;i<m;i++){if (a[i]<0)ans+=a[i];}
    cout<<abs(ans)<<endl;
}