#include<bits/stdc++.h>
using namespace std;
 
void solve()
{
    long long n;
    vector <long long> v,p;
    cin>>n;
    long long a[n+8];
    for (int i=0; i<n; i++)cin>>a[i];
    v.push_back(a[0]);
    for (int i=1; i<n; i++)
    {
        if ((a[i]*a[i-1])<0)
        {
            sort(v.begin(),v.end());
            p.push_back(v[v.size()-1]);
            v.clear();
            v.push_back(a[i]);
        }
        else v.push_back(a[i]);
    }
    long long sum=0;
    sort(v.begin(),v.end());
    p.push_back(v[v.size()-1]);
    ///for (int i=0;i<p.size();i++)cout<<p[i]<<" ";
    ///cout<<endl;
    for (int i=0; i<p.size(); i++)sum+=p[i];
    cout<<sum<<endl;
}
 
int main()
{
    int tc;
    cin>>tc;
    while (tc--)
    {
        solve();
    }
}