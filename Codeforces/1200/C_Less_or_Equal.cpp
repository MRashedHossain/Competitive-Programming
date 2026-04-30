#include<bits/stdc++.h>
using namespace std;
int n,k,res=-1;
vector<int> v;
 
void solve()
{
    for (int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort (v.begin(),v.end());
    if (k==0)
    {
        if( v[0]>1)
        {
            cout<<v[0]-1<<endl;
            return;
        }
        else
        {
            cout<<"-1"<<endl;
            return;
        }
 
    }
    if (v[k-1] == v[k])res=-1;
    else res = v[k-1];
    cout<<res<<endl;
    return;
}
 
int main()
{
    cin>>n>>k;
    solve();
    return 0;
}