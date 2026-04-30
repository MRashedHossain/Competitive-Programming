#include<bits/stdc++.h>
using namespace std;
 
bool solve()
{
    int n,d,flag=0;
    vector <int> v;
    cin>>n>>d;
    for (int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
        if(x>d)flag=1;
    }
    if (flag == 0)return true;
    else
    {
        for (int i=0; i<n-1; i++)
        {
            for (int j=i+1; j<n; j++)
            {
                if (v[i]+v[j]<=d)return true;
            }
        }
        return false;
    }
}
 
int main()
{
    int tc;
    cin>>tc;
    while (tc--)
    {
        cout<<(solve()?"YES":"NO")<<endl;
    }
}