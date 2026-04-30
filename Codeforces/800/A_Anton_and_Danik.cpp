#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int x,a=0,d=0;
    string s;
    cin>>x>>s;
    for (int i=0;i<x;i++)
    {
        if (s[i]=='A')a++;
        else d++;
    }
    if (a>d)cout<<"Anton";
    else if(d>a)cout<<"Danik";
    else cout<< "Friendship";
}