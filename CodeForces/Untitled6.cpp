#include <iostream>
#include <vector>

using namespace std;

const int MAX_N = 100000;
const int MAX_Q = 100000;

int ballon_dor(int a, int x) {
  int a_binary = (1 << 20) - 1 - a;
  int x_binary = (1 << 20) - 1 - x;
  int result = a_binary ^ x_binary;

  return (1 << 20) - 1 - result;
}

int main() {
  int n, q;
  cin >> n >> q;

  vector<int> a(n);
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }

  vector<int> profit(n, 0);
  for (int i = 0; i < n; ++i) {
    profit[i] = a[i];
  }

  for (int i = 0; i < q; ++i) {
    int x;
    cin >> x;

    for (int j = 0; j < n; ++j) {
      profit[j] = ballon_dor(profit[j], x);
    }x
    int max_profit = 0;
    for (int j = 0; j < n; ++j) {
      max_profit = max(max_profit, profit[j]);
    }

    cout << max_profit << endl;
  }

  return 0;
}
