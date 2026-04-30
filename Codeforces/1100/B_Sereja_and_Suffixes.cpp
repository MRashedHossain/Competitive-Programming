#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n+9],b[n+9];
    set<int> s;
    for (int i=1; i<=n; i++)cin>>a[i];
    for (int i=n,j=1; i>=1; i--,j++)
    {
        s.insert(a[i]);
        b[j]=s.size();
    }
    while (m--)
    {
        int x;
        cin>>x;
        cout<<b[n-x+1]<<endl;
    }
}