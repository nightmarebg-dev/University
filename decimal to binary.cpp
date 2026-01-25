#include <iostream>
#include <string>

using namespace std;

int DtoB(int decimal) {

	int array[100];
	
	int binary = 0;

	int i = 0;

	while (decimal > 0) {
		
		array[i] = decimal % 2;

		decimal /= 2;

		i++;

	}

	i--;

	for (int j = i; j >= 0; j--) {

		binary += array[j];

		binary *= 10;

	}

	binary /= 10;

	return binary;

}

int main() {

	int n;

	cin >> n;

	cout << DtoB(n) << endl;

	return 0;

}