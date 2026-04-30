#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,lx,ly;
    set<int> s;
    cin>>n;
    cin>>lx;
    int a[lx];
    for (int i=0;i<lx;i++)
    {
        cin>>a[i];
        s.insert(a[i]);
    }
    cin>>ly;
    int b[ly];
    for (int i=0;i<ly;i++)
    {
        cin>>b[i];
        s.insert(b[i]);
    }
    if (s.size()>=n)cout<< "I become the guy."<<endl;
    else cout<<"Oh, my keyboard!"<<endl;
}
 