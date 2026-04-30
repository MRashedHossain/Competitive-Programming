#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,c1=0,c2=0,sum=0;
        cin>>n;
        int a[n];
        for (int i=0; i<n; i++)
        {
            cin>>a[i];
            sum+=a[i];
            if (a[i]==1)c1++;
            else c2++;
        }
        if (sum%2!=0 || (c1%2!=0 && c2%2!=0))cout << "NO"<<endl;
        else
        {
 
            if (c1==0 && (sum/2)%2!=0)cout << "NO"<<endl;
            else cout<< "YES"<<endl;
        }
    }
}