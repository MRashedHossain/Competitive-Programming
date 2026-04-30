#include<bits/stdc++.h>
using namespace std;
int n;
vector<int> v;
 
void clean()
{
    n=0;
    v.clear();
}
 
void solve()
{
    cin>>n;
    if(n>45)
    {
        v.push_back(-1);
        return;
    }
    else
    {
        for(int i=9; i>=1; i--)
        {
 
            if(i>=n)
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
        return;
    }
}
 
int main()
{
    int tc;
    cin>>tc;
    while (tc--)
    {
        clean();
        solve();
        for(int i=0; i<v.size(); i++)cout<<v[i];
        cout<<endl;
    }
    return 0;
}