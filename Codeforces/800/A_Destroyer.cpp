#include<bits/stdc++.h>
using namespace std;
#define ll long long int
 
bool solve()
{
    int n;
    cin>>n;
    int a[110],mx=0;
    for (int i=0;i<101;i++)a[i]=0;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        a[x]++;
        if(x>mx)mx=x;
    }
    ///if (n==1 && mx>0)return false;
    ///for (int i=0;i<=mx;i++)cout<<i<<" "<<a[i]<<endl;
    if (a[0]<a[1])return false;
    for (int i=1;i<=mx;i++)
    {
        if(a[i]>a[i-1] || a[i]==0)return false;
    }
    return true;
}
 
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        cout<<(solve()?"YES":"NO")<<endl;
    }
    return 0;
}
 
 