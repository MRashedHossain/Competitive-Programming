#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int h,m;
        cin>>h>>m;
        m=60-m;
        h=23-h;
        h=h*60;
        cout<<m+h<<endl;
    }
}