#include <iostream>

using namespace std;

int some_function(double d, int i){
  return d*i; // for this to work the double/floating number has to be * with the int and then turnicated into int for return
}

int main(){
  cout << some_function(102.2, 29); // returns 2963 and ignores .8 at the last so the round off is to the previous integer
}
