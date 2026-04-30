#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    vector <int> v;
    while (tc--)
    {
        int a,b,c,t1,t2;
        cin>>a>>b>>c;
        t1=abs(a-1);
        t2=abs(b-c)+abs(c-1);
        if (t1<t2)v.push_back(1);
        else if (t2<t1)v.push_back(2);
        else v.push_back(3);
    }
    for (int i=0;i<v.size();i++)cout<<v[i]<<endl;
}