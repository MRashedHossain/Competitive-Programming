#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while (tc--)
    {
        int n,p,i,s1=0,s2,sum;
        vector <int> v;
        cin>>n;
        while (true)
        {
            if (n==0)break;
            p=n%10;
            v.push_back(p);
            n=n/10;
        }
        for (i=1; i<=9; i++)
        {
            if (i==v[v.size()-1])break;
        }
        for (int j=1; j<=v.size(); j++)s1=s1+j;
        s2=(i-1)*10;
        sum=s1+s2;
        cout<<sum<<endl;
    }
}