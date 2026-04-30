#include<bits/stdc++.h>
using namespace std;
#define ll long long int
 
ll solve()
{
    int n,a[200200],b[200200],ans,x,mx1=0;
    map<int,int> m;
    vector<int> v;
    set<int> s;
    cin>>n;
    for (int i=0; i<n; i++)
    {
        cin>>x;
        v.push_back(x);
        m[x]++;
        s.insert(x);
        if (m[x]>mx1)mx1=m[x];
    }
    ///int mx1 = *max_element(a,a+n);
    int mx2 = s.size();
    if (mx1>mx2)return mx2;
    mx2--;
    ans=min(mx1,mx2);
    ///cout<<mx1<<endl;
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