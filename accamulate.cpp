#include <algorithm>
#include <vector>
#include <list>
#include <deque>
#include <iostream>
#include <cassert>
#include <cstring>
#include <numeric>

using namespace std;

template <typename Container, typename T>
Container make(const T t[], int count);

void bar() {}

void foo(&bar a);

int main(int argc, char** argv) {
  int numbers_array[] = { 1, 2, 3, 4, 5 };
  vector<int> numbers_vector = make< vector<int>, int >(numbers_array, 5);
  accumulate(numbers_vector.begin(), numbers_vector.end(), 0);
  assert(accumulate(numbers_vector.begin(), numbers_vector.end(), 0) == 15);
}

template <typename Container, typename T>
Container make(const T t[], int count) {
  return Container(&t[0], &t[count]);
}

