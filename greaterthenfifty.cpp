#include <iostream>
#include <algorithm>
#include <vector>
#include <cassert>

using namespace std;

class GreaterThanFifty {
public:
  bool operator()(int x) const { return x > 50; }
};

int main(int argc, char** argv) {
  vector<int> a;
  for (int i = 0; i < 100; i++)
    a.push_back(i * i);

  vector<int>::iterator where = find_if(a.begin(), a.end(), GreaterThanFifty());
  assert(*where == 64);
}

    
