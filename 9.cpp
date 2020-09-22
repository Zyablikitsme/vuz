#include <iostream>
#include <cmath>

using namespace std;

int main(){
	setlocale(LC_ALL,"");
	int x, 1deg, 2deg;
	cout << "x = ";
	cin >> x;
	cout << "Система счисления числа x: ";
	cin >> 1deg;
	cout << "Перевести в систему: ";
	cin >> 2deg;
	int x_2 = 0;
	int i = 0;
	while(x){
		x_2 += (x%10)*pow(1deg, i);
		i++;
		x /= 10;
	}
	while(x_2 > 2deg){
		cout << x_2 % 2deg;
		x_2 /= 2deg;
	}
	return 0;
}
