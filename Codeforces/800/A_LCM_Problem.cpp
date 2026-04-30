#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while (tc--)
    {
        int m,n;
        cin>>m>>n;
        if (n>=2*m)cout<<m<<" "<<2*m<<endl;
        else cout<<"-1 -1"<<endl;
    }
}