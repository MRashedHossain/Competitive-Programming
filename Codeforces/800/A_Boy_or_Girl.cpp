#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin >> s;
	int ans = 0;
	int l = s.size();
	for (int i = 0; i < l; i++)
	{
		for (int j = i + 1; j < l; j++)
		{
			if (s[i] == s[j])
			{
				ans++;
				break;
			}
			else
				continue;
		}
	}
	ans = l - ans;
 
	if (ans % 2 == 0)
		cout << "CHAT WITH HER!";
	else
		cout << "IGNORE HIM!";
}