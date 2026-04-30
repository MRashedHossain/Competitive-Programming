#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while (tc--)
    {
        long long int n,a,even=0,odd=0;
        cin>>n;
        while (n--)
        {
            cin>>a;
            if (a%2==0)odd++;
            else even++;
        }
        if (even<odd)cout<<even<<endl;
        else cout<<odd<<endl;
    }
}