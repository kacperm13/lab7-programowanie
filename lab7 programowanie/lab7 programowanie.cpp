#include <iostream>
#include <string>
using namespace std;
/*
void choinka(int wysokosc, int i);
*/
int sumaR(int liczba);
int sumaI(int liczba);
int main()
/* {												//zad 1
   int n;
   cout << "Podaj wysokosc choinki: ";
   cin >> n;
   choinka(n, 1);
}

void choinka(int wysokosc, int rzad) {
	if (rzad > wysokosc) {
		return;
	}
		for (int i = 0; i < wysokosc-rzad; i++) {
			cout << " ";
		}
		for (int i = 0; i < 2 * rzad - 1; i++) {
			cout << "*";
		}
		cout << endl;
		choinka(wysokosc, rzad + 1);
}
*/
{
	int n;
	cout << "Podaj liczbe naturalna: ";
	cin >> n;
	cout << sumaR(n) << endl;
	cout << sumaI(n) << endl;

}
int sumaR(int liczba) {
	if (liczba < 10) {
		return liczba;
	}
	return (liczba % 10) + sumaR(liczba / 10);
}
int sumaI(int liczba) {
	int suma=0;
	while(liczba!=0){
		suma += liczba % 10;
		liczba /= 10;	
	}
	return suma;
}
