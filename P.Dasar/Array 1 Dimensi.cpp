#include <iostream>
using namespace std;
int main(){
int umur[4] = {11, 13, 16, 21};
int n, hasil=0;
  for ( n=0 ; n<4 ; ++n )  {
    hasil+= umur[n];
  }
  cout << hasil;
  return 0;
}

