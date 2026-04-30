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
        if (n%2==1) cout<< "3 1 2 ";
        else cout<< "2 1 ";
        for (int i=3+(n%2); i<=n; i+=2)cout<<i+1<<" "<<i<<" ";
        cout<<endl;
    }
}