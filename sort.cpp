#include <algorithm>
#include <iostream>
#include <cassert>

using namespace std;

int main(int argc, char** argv) {
  int a[1000];
  for (int i = 0; i < 1000; i++)
    a[i] = 1000 - i - 1;

  sort(&a[0], &a[1000]);
  for (int i = 0; i < 1000; i++)
    assert(a[i] == i);
  
  cout << "ok" << endl;
}
  
    
