#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,x,ds=0,tt,d;
    string s;
    cin>>n>>x;
    tt=x;
    for (int i=0; i<n; i++)
    {
        cin>>s>>d;
        if (s[0] == '+')tt+=d;
        else if (s[0] == '-')
        {
            if (tt-d>=0)tt-=d;
            else ds++;
        }
    }
    cout<<tt<<" "<<ds<<endl;
}