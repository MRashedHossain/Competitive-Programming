#include<bits/stdc++.h>
using namespace std;
 
string s[10];
 
bool is_rook(int i, int j)
{
    if (s[i-1][j-1]=='#' && s[i-1][j+1]=='#' && s[i+1][j-1]=='#' && s[i+1][j+1]=='#' && s[i][j]=='#')
        return true;
    return false;
}
 
int main()
{
    int tc;
    cin >> tc;
 
    while(tc--){
        for (int i=0 ; i<8 ; i++)cin >> s[i];
        for (int i=1 ; i<7 ; i++){
            int x = -2, y = -2;
            for (int j=1 ; j<7 ; j++){
                if (is_rook(i,j)){
                    x = i, y = j;
                    break;
                }
            }
            if (x!=-2){
                cout << x+1 << " " << y+1 << endl;
                break;
            }
        }
    }
}