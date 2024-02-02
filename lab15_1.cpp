#include <iostream>
using namespace std;

int main(){

	int a = 5 ;

	string b = "A";
	string &c = b ;
	int *x = &a;
	string *y = &b;
	int **z = &x;

	cout << a << " ";
	cout << b << " ";
	cout << c<< " ";
	cout << x << " ";
	cout << y << " ";
	cout << z << " " << endl;

	cout << &a << " ";
	cout << &b << " ";
	cout << &c << " ";
	cout << x << " ";
	cout << y << " ";
	cout << z << " " << endl;

	c = "F";
	cout << a << " ";
	cout << b << " ";
	cout << c<< " ";
	cout << x << " ";
	cout << y << " ";
	cout << z << " " << endl;

	*y = "W";
	cout << a << " ";
	cout << b << " ";
	cout << c<< " ";
	cout << x << " ";
	cout << y << " ";
	cout << z << " " << endl;

	*x = 6;
	cout << a << " ";
	cout << b << " ";
	cout << c<< " ";
	cout << x << " ";
	cout << y << " ";
	cout << z << " " << endl;


	**z = 7;
	
	cout << a << " ";
	cout << b << " ";
	cout << c<< " ";
	cout << x << " ";
	cout << y << " ";
	cout << z << " " << endl;

	
	


	return 0;
}
