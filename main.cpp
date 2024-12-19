#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = int64_t;
using vl = vector<ll>;

vl A;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  ll a;
  while (cin >> a) {
    A.push_back(a);
  }

  auto cp = A;
  sort(cp.begin(), cp.end());

  for (auto i = 0; i < A.size(); ++i) {
    if (A[i] != cp[i]) {
      cout << "Bad";
      return 0;
    }
  }

  cout << "Good";

  return 0;
}