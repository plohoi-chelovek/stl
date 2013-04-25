#include <algorithm>
#include <vector>
#include <list>
#include <deque>
#include <iostream>
#include <cassert>
#include <cstring>

using namespace std;

template <typename Container>
Container make(const char s[]);

int main(int argc, char** argv) {
  char s[] = "ae";
  int len = strlen(s);

  list<char> list1 = make< list<char> >("bcd");

  deque<char> deque1;

  merge(&s[0], &s[strlen(s)], list1.begin(), list1.end(),
	deque1.begin());
  assert(deque1 == make< deque<char> >("abcde"));
}

template <typename Container>
Container make(const char s[]) {
  return Container(&s[0], &s[strlen(s)]);
}



