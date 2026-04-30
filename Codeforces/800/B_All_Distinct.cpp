#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while (tc--)
    {
        int n,a;
        multiset<int> ms;
        set<int> s;
        cin>>n;
        for (int i=0; i<n; i++)
        {
            cin>>a;
            s.insert(a);
            ms.insert(a);
        }
        if (s.size()%2==ms.size()%2)cout<<s.size()<<endl;
        else cout<<s.size()-1<<endl;
    }
}