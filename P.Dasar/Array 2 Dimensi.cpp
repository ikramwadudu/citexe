#include <iostream>
using namespace std;
int main() {
int x,y;
int tabel[3][2] = {
                  {1, 2},
                  {2, 4},
                  {3, 6}
                  };
	{
	  for (x=0; x<3; x++)
	    for (y=0; y<2; y++)
	    {
	      cout << tabel[x][y] << " ";
	    }
	    cout << "\n";
	}
}
