#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    string s;
    cin>>s;
    int i,j,k,upr=0,lwr=0;
    k=s.size();
    for (i=0;i<k;i++){
        if (s[i]<=90)upr++;
        else lwr++;
    }
    if(lwr>=upr){
        for (j=0;j<k;j++){
            if (s[j]<=90)s[j]=s[j]+32;
        }
    }
    else{
        for(j=0;j<k;j++){
            if (s[j]>=97)s[j]=s[j]-32;
        }
    }
    cout<<s;
 
  return 0;
}
 