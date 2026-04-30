#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while (tc--)
    {
        int n,ans=0,x=1,k=0;
        cin>>n;
        while (k<n)
        {
            if (x%3!=0 && x%10!=3){ans=x;k++;}
            x++;
        }
        cout<<ans<<endl;
    }
}