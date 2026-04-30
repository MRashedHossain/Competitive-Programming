#include<bits/stdc++.h>
using namespace std;
 
string solve()
{
    int n,flag = 0;
    string s,mx,sub;
    cin>>n>>s;
    map<string,int> m;
    for (int i=0; i<n-1; i++)
    {
        sub = s.substr(i,2);
        m[sub]++;
        if (m[sub]>flag)
        {
            flag=m[sub] ;
            mx=sub;
        }
    }
    return mx;
}
 
///7
///ABACABA
///5
///ZZZAA
 
 
int main()
{
 
    cout<<solve()<<endl;
}