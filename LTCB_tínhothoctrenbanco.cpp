#include <cmath>
#include <iostream>
using namespace std;
int main() {
	int soo, soThoc=0;
	cout << "Nhap so o:";
	cin >> soo;
	for (int i = 0; i< soo; i++)
	{
		cout << "o so" << i
			<< "co so thoc la" << pow(2, i) << endl;
		soThoc += pow(2, i);
	}
	cout << "Tong so thoc chua trong" << soo << "la" << soThoc << "hat\n";
	return 0;

}
	