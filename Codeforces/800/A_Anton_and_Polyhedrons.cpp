#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int x,ans=0;
    cin>>x;
    string s[x];
    for (int i=0; i<x; i++)
    {
        cin>>s[i];
    }
    for (int j=0; j<x; j++)
    {
        if(s[j]=="Tetrahedron")ans=ans+4;
        else if(s[j]=="Cube")ans=ans+6;
        else if(s[j]=="Octahedron")ans=ans+8;
        else if(s[j]=="Dodecahedron")ans=ans+12;
        else ans=ans+20;
    }
    cout<<ans;
}
 