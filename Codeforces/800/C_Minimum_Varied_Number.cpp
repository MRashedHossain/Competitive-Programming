#include<bits/stdc++.h>
using namespace std;
 
void solve()
{
    int n;
    cin>>n;
    vector<int> v;
    for(int i=9; i>=1; i--)
    {
        if(n<=i)
        {
            v.push_back(n);
            break;
        }
        else
        {
            v.push_back(i);
            n-=i;
        }
    }
    sort(v.begin(),v.end());
    for (int i=0; i<v.size(); i++)cout<<v[i];
    cout<<endl;
    return;
}
 
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        solve();
    }
    return 0;
}