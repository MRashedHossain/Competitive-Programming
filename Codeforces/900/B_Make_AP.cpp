#include<bits/stdc++.h>
using namespace std;
#define ll long long int
 
bool solve()
{
    ll a,b,c;
    cin>>a>>b>>c;
    ll new_a=b-(c-b);
    if (new_a>=a && new_a!=0 && new_a%a==0)return true;
    ll new_b = a+((c-a)/2);
    if (new_b>=b && (c-a)%2==0 && new_b%b==0 && new_b!=0)return true;
    ll new_c = a+(2*(b-a));
    if (new_c>=c && new_c%c==0 && new_c!=0)return true;
    return false;
}
 
int main()
{
    int tc;
    cin>>tc;
    while (tc--)
    {
        cout<<(solve()?"YES":"NO")<<endl;
    }
    return 0;
}