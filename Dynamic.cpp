#include <iostream>

using namespace std;

int main()
{
	
	int size = 5;

	int* array = new int[size];
	int* secondary;

	int input;

	int i = 0;

	do {

		cout << "Menu" << endl;
		cout << "0: close the program" << endl;
		cout << "1: add element" << endl;
		cout << "2: display all elements" << endl;

		cin >> input;

		if(input == 1){

			int element;

			cin >> element;

			if (i >= size) {

				size += 5;

				secondary = new int[size];

				for (int j = 0; j < i; j++) {

					secondary[j] = array[j];

				}
				
				delete[] array;

				array = new int[size];

				for (int j = 0; j < i; j++) {

					array[j] = secondary[j];

				}

				delete[] secondary;

			}

			array[i] = element;
			
			i++;

		}
		else if (input == 2) {

			for (int j = 0; j < i; j++) {

				cout << array[j] << ' ';

			}

			cout << endl;

		}
		else if (input != 0) {
			cout << "Invalid input!" << endl;
		}

	} while (input != 0);

	cout << "Goodbye";
	delete[] array;

	return 0;
}