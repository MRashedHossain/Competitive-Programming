#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while (tc--){
        int x,a[3],ans=0;
        cin>>x>>a[0]>>a[1]>>a[2];
        for (int i=0;i<3;i++){if (a[i]>x)ans++;}
        cout <<ans<<endl;
    }
}