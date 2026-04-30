#include<bits/stdc++.h>
using namespace std;
bool solve()
{
 
    string s,sol[4] = {"0","1","14","144"};
    cin>>s;
    int flag=s.size();
    while (flag>0)
    {
        int ans = 0;
        for (int i=1; i<4; i++)
        {
            string sub = s.substr(flag-i,i);
            if(sub == sol[i])
            {
                ans=1;
                flag-=i;
                break;
            }
            if (flag-i == 0)break;
        }
        if (ans==0)return false;
    }
    return true;
 
}
int main()
{
    cout<<(solve()?"YES":"NO")<<endl;
}