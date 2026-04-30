#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for (int i=0; i<n; i++)
    {
        int a,b;
        cin>>a>>b;
        if (a>b)
        {
            int x=a-b;
            if (x%2==0)cout<<"1"<<endl;
            else cout<<"2"<<endl;
        }
        else if (a==b)cout<<"0"<<endl;
        else if (b>a)
        {
            int x=b-a;
            if (x%2==0)cout<<"2"<<endl;
            else cout<<"1"<<endl;
        }
    }
 
}