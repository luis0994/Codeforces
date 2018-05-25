#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, A, B, C, T;
  cin >> n >> A >> B >> C >> T;
  vector<int> t(n);
  int mint = 1e5;
  for (int i = 0; i < n; i++) {
    cin >> t[i];
    mint = min(mint, t[i]);
  }
  if (mint > T) {
    cout << 0 << "\n";
    return 0;
  }
  vector<int> c(n, A);
  int ans1 = n * A;
  int ans2 = 0;
  for (int i = 0; i < n; i++) {
    int k = T - t[i];
    ans2 += A - k * B;
    ans2 += C * k;
  }
  cout << max(ans1, ans2) << "\n";
  return 0;
}
