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
        int a[n];
        set<int> s;
        for (int j=0;j<n;j++)
        {
            cin>>a[j];
            s.insert(a[j]);
        }
        if (s.size()==n)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}