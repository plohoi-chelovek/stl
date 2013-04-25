#include <algorithm>
#include <vector>
#include <iostream>
#include <cassert>
#include <cstring>

using namespace std;

template <typename Container>
Container make(const char s[]);

int main(int argc, char** argv) {
  vector<char> str1 = make< vector<char> >("Hello world");
  reverse(str1.begin(), str1.end());
  assert(make< vector<char> >("dlrow olleH") == str1);
}

template <typename Container>
Container make(const char s[]) {
  return Container(&s[0], &s[strlen(s)]);
}



