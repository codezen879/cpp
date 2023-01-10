#include <bits/stdc++.h>
long long int ll = 1e9 + 7;
using namespace std;
int main() {
  long long int t;
  cin >> t;
  while (t--) {
    long long int n;
    cin >> n;
    long long int *arr = new long long int[n+1];
    arr[0] = 1;
    for (long long int i = 1; i <= n; i++) {
     if (i == 1)
      arr[i] = arr[i-1];
    else if (i == 2)
      arr[i] = arr[i - 1]+arr[i-2];
    else
      arr[i] = (arr[i - 1] + arr[i - 2] + arr[i - 3])%ll;
  }
    cout << arr[n] << "\n";
  }
  
  return 0;
}
