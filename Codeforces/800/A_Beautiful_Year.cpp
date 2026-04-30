    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        int x,ans,p,i;
        cin>>x;
        for (i=x+1; i<=9999; i++)
        {
            set<int> s;
            p=i;
            for (int j=0; j<4; j++)
            {
                ans=p%10;
                s.insert(ans);
                p=p/10;
            }
            if (s.size()==4)break;
        }
        cout<<i<<endl;
 
    }