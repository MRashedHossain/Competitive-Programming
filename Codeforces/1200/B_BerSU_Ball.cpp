#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,ans=0,x,b[110],g[110];
    cin>>n;
    for (int i=0; i<n; i++)cin>>b[i];
    cin>>m;
    for (int i=0; i<m; i++)cin>>g[i];
    sort(b,b+n);
    sort(g,g+m);
 
    /**
     cout<<endl;
     for (int i=0; i<n; i++)cout<<b[i]<<" ";
     cout<<endl;
     for (int i=0; i<m; i++)cout<<g[i]<<" ";
    */
 
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)
        {
            if (abs(b[i]-g[j]) == 1 || abs(b[i]-g[j]) == 0)
            {
                ans++;
                b[i]=999;
                g[j]=999;
            }
        }
    }
    cout<<ans<<endl;
}