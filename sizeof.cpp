#include <iostream>

using namespace std;

void print_size(int x,char y, double z, bool a){
  cout << sizeof(x) << sizeof(y) << sizeof(z) << sizeof(a) << "\n";
}

int main(){
  print_size(13, 'a', 1.23, true);
  return 0;
}
