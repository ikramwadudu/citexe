#include <iostream>
using namespace std;
int main(){
	char phi = 3.14;
	int r,t;
	cout<<"Masukkan jari jarinya : ";
	cin>>r;
	cout<<"Masukkan tingginya : ";
	cin>>t;
	cout<<"Hasillnya adalah : ";
	int l = r+t;
	int y = 2*phi*r*l;
	cout<<y;
}
