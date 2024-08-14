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

string s;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  getline(cin, s);
  getline(cin, s);

  auto mx = 0;
  auto c = vl(26);
  for (const auto& x : s) {
    if ('a' <= x && x <= 'z') {
      c[x - 'a'] += 1;
      if (mx < c[x - 'a']) {
        mx = c[x - 'a'];
      }
    }
  }

  cout << mx;

  return 0;
}