#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int a,ans=0;
    cin>>a;
    int x[a+8];
    for (int i=0;i<a;i++)
    {
        cin>>x[i];
        if (x[i]>0)ans++;
    }
    if (ans>0)cout<<"HARD";
    else cout<<"EASY";
}