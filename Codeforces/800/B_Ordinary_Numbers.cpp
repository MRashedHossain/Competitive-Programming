#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,p,a,b,z;
    int A[10]= {1,11,111,1111,11111,111111,1111111,11111111,111111111,1111111111};
    vector<int>v;
    cin>>n;
    while(n--)
    {
         cin>>x;
        p=x;
        while (true)
        {
            if (p==0)break;
            v.push_back(p%10);
            p=p/10;
        }
        z=v.size();
        a=(z-1)*9;
        b=(x/A[z-1]);
        cout<<a+b<<endl;
        v.clear();
    }
}