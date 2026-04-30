#include<bits/stdc++.h>
using namespace std;
 
int solve()
{
    int n;
    cin>>n;
    int a[n+8],ans=-1;
    map<int,int> m,in;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        m[a[i]]++;
        in[a[i]]=i;
    }
    ///for (auto it: in)cout<<it.first<<" "<<it.second<<endl;
    for (auto it:m)
    {
        ///cout<<it.first<<" "<<it.second<<endl;
        if(it.second==1)
        {
            ans=it.first;
            return in[ans];
        }
    }
    return ans;
}
 
int main()
{
    int tc;
    cin>>tc;
    while (tc--)
    {
        cout<<solve()<<endl;
    }
    return 0;
}