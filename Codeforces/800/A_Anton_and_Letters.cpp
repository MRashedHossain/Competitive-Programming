#include<bits/stdc++.h>
using namespace std;
int main()
{
    char c;
    set <char> ss;
    while (cin>>c && c!='}')
    {
        if (c!=',')ss.insert(c);
    }
    cout<<ss.size()-1<<endl;
}
///{b, a, b, a}