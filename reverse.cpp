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

  vector<char> str2 = make < vector<char> >("Family gay");
  vector<char>::iterator where = find<vector<char>::iterator, char>(str2.begin(), str2.end(),
				      'g');
  assert(*where == 'g');
}

template <typename Container>
Container make(const char s[]) {
  return Container(&s[0], &s[strlen(s)]);
}



