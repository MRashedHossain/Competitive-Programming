#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        string s;
        int n,d,x,p;
        cin>>n>>d>>s;
        p=n;
        if (d==0)cout<<s<<d;
        else
        {
            for (int i=0; i<n; i++)
            {
                x=s[i]-'0';
                if (d>x)
                {
                    p=i;
                    break;
                }
            }
            for (int i=0; i<p; i++)cout<<s[i];
            cout<<d;
            for (int i=p; i<n; i++)cout<<s[i];
        }
        cout<<endl;
    }
}