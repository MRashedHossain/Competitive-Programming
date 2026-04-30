#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while (tc--)
    {
        int n;
        cin>>n;
        long long a[n],mx,mx1;
        vector <int> v;
        for (int i=0; i<n; i++)
        {
            cin>>a[i];
            v.push_back(a[i]);
        }
        sort (v.begin(),v.end());
        mx=v[v.size()-1];
        mx1=v[v.size()-2];
        for (int i=0; i<n; i++)
        {
            if (a[i]==mx)cout<<a[i]-mx1<<" ";
            else cout<<a[i]-mx<<" ";
        }
        cout<<endl;
    }
}