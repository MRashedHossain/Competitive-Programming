#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        set <int> s;
        int n;
        cin>>n;
        int a[n];
        for (int i=0; i<n; i++)
        {
            cin>>a[i];
            s.insert(a[i]);
        }
        cout<<s.size()<<endl;
    }
}