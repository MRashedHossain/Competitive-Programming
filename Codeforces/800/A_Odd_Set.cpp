#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while (tc--)
    {
        int n,x,odd=0;
        cin>>n;
        n*=2;
        for (int i=0;i<n;i++){cin>>x;if(x%2==1)odd++;}
        x=n/2;
        cout<<(odd==x?"Yes":"No")<<endl;
    }
}