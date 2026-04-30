#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while (tc--)
    {
        long long  n,x,mx1=0,mx2=0,mx;
        cin>>n;
        vector <long long>v;
        for (int i=0; i<n; i++)
        {
            cin>>x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        x=v.size();
        /**
        for (int i=0;i<pos.size();i++)cout<<pos[i]<<" ";
        cout<<endl;
        for (int i=0;i<neg.size();i++)cout<<neg[i]<<" ";
        */
        mx1=v[x-1]*v[x-2];
        mx2=v[0]*v[1];
        mx=max(mx1,mx2);
        cout<<mx<<endl;
    }
}
/**
4
5 0 2 1
 
if (neg.size()>=2)mx1=(neg[0]*neg[1]);
if (pos.size()>=2)mx2=(pos[0]*pos[1]);
mx=max(mx1,mx2);
cout<<mx<<endl;
 
8
1 2 3 4 -1 -2 -3 -4
*/