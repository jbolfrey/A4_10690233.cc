#include <iostream>
using namespace std;

int gcd( int j, int k){

	if (k == 0)
return j;

	else
return (gcd (k, j%k));
}


int main(){

int j,k;

	cout << "Enter your first number:" << endl;
		
		cin >> j;
	
	cout << "Enter your second number:" << endl;
	
		cin >> k;


cout << "Greatest Common Divisor is " << gcd(j,k) << endl;

}
