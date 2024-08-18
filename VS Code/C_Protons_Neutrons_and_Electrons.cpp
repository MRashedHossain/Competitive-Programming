#include<bits/stdc++.h>
using namespace std;
int main() {
    int a,b,c,p = 0,n = 0,z = 0;
    cin>>a>>b>>c;
    ///checking 1st number
    if(a>0)p++;
    else if(a<0)n++;
    else z++;
    ///checking 2nd number
    if(b>0)p++;
    else if(b<0)n++;
    else z++;
    ///checking 3rd number
    if(c>0)p++;
    else if(c<0)n++;
    else z++;
    ///Printing Results
    if(p)cout<<"Positive numbers: "<<p<<endl;
    if(n)cout<<"Negative numbers: "<<n<<endl;
    if(z)cout<<"Zeros: "<<z<<endl;
    return 0;
}
