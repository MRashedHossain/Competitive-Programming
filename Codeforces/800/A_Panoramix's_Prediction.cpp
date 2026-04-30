#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,ans,q,p;
    cin>>m>>n;
    while (true)
    {
        m=m+1;
        ans=0;
        for(int i=2; i<m; i++)
        {
            p=m%i;
            if (p==0)ans++;
        }
        if (ans==0)break;
    }
    if (m==n)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
 