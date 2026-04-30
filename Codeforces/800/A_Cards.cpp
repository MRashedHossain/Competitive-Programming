#include<bits/stdc++.h>
using namespace std;
vector<int> v;
string s;
int n,count_n=0,ans=0;
 
void solve()
{
    cin>>n>>s;
    for(int i=0; i<n; i++)if(s[i]=='n')count_n++;
    ans=n-(count_n*3);
    ans/=4;
    ///cout<<count_n<<" "<<ans<<endl;
    for (int i=0; i<count_n; i++)v.push_back(1);
    for (int i=0; i<ans; i++)v.push_back(0);
    sort(v.begin(),v.end(),greater<int>());
    return;
}
 
int main()
{
    solve();
    for(int i=0; i<v.size(); i++)cout<<v[i]<<" ";
    cout<<endl;
}