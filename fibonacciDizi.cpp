#include <iostream>
using namespace std;

int sayi1 = 0, sayi2 = 1, sayi3, cum = 0;


int main() {
	setlocale(LC_ALL, "Turkish");

	cout << "Fibonacci Dizisinin Eleman Sayısını Giriniz: ";
	cin >> sayi3;
	cout << "******************************************\n";

	for (int i = 0; i <= sayi3; i++) {
		if (i <= 1) {
			cout << "\t\t" << i << endl;
		}
		else {
			cum = sayi2 + sayi1;
			sayi1 = sayi2;
			sayi2 = cum;
			cout << "\t\t" << cum << endl;
		}
	}
	cout << "******************************************\n";
	system("pause>0");
}
