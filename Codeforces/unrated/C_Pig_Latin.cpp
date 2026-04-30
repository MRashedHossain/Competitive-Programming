#include<bits/stdc++.h>
using namespace std;
 
void solve(int tc) {
    string s;getline(cin,s);
    int n = s.size();
    string curr = "";
    vector<string> v;
    for(auto i:s){
        if(i == ' '){
            v.push_back(curr);
            curr.clear();
        }else curr += i;
    }
    v.push_back(curr);
    int cnt = 0;
    for(string i:v){
        string now = "";
        for(int j=1;j<i.size();j++)now += i[j];
        now += i.front();
        for(char &c:now) c = tolower(c);
        if(cnt == 0){
            cnt++;
            now.front() = towupper(now.front());
        }
        now += "ay";
        cout<<now<<" ";
    }
    cout<<endl;
    return;
}
int main() {
    int TC = 1;
    cin>>TC;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    for(int i=1; i<=TC; i++)solve(i);
    return 0;
}