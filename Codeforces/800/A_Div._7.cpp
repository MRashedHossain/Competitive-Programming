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
        int x=n%7;
        if (x<=n%10)n-=x;
        else n+=(7-x);
        cout<<n<<endl;
    }
}