#include <iostream>

using namespace std;

int main() {

	int rows = 3, cols = 4, c = 0;

	int* arr = new int[rows * cols];

	for (int i = 0; i < rows; i++) {

		for (int j = 0; j < cols; j++) {

			*(arr + i * cols + j) = ++c;

		}

	}

	for (int i = 0; i < rows; i++) {

		for (int j = 0; j < cols; j++) {

			cout << *(arr + i * cols + j) << ' ';

		}

		cout << endl;

	}

	delete[] arr;

	return 0;
	
}