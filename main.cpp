#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;

int main()
{
  std::vector<int> v = {10, 11, 12, 13, 14, 15};

  for (const int &i : v) // access by const reference
    std::cout << i << ' ';
  std::cout << '\n';

  for (auto i : v) // access by value, the type of i is int
    std::cout << i << ' ';
  std::cout << '\n';

  for (auto &&i : v) // access by forwarding reference, the type of i is int&
    std::cout << i << ' ';
  std::cout << '\n';

  const auto &cv = v;

  for (auto &&i : cv) // access by f-d reference, the type of i is const int&
    std::cout << i << ' ';
  std::cout << '\n';

  for (int n : {10, 11, 12, 13, 14, 15}) // the initializer may be a braced-init-list
    std::cout << n << ' ';
  std::cout << '\n';

  int a[] = {10, 11, 12, 13, 14, 15};
  for (int n : a) // the initializer may be an array
    std::cout << n << ' ';
  std::cout << '\n';

  for (typedef decltype(v)::value_type elem_t; elem_t i : v)
    // typedef declaration as init-statement (C++20)
    std::cout << i << ' ';
  std::cout << '\n';

  return 0;

}