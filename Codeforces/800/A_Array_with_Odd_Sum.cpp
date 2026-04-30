#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while (tc--)
    {
        int n,sum=0,x,a[2020],counteven=0,countodd=0;
        cin>>n;
        for (int i=0; i<n; i++)
        {
            cin>>a[i];
            sum+=a[i];
            if (a[i]%2==0)counteven++;
            else countodd++;
        }
        if (sum%2)cout<<"YES"<<endl;
        else if (counteven>0 && countodd>0)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}