#include <iostream>;
#include <string>
using namespace std;

int main() {

	int rows;
	int cols;

	string A[100][100];
	int B[100][100];

	cin >> rows >> cols;
	
	for (int i = 0; i < rows; i++) {

		for (int j = 0; j < cols; j++) {

			cin >> A[i][j];

		}

	}

	for (int i = 0; i < rows; i++) {

		for (int j = 0; j < cols; j++) {
		
			B[i][j] = strlen(A[i][j]);

		}

	}

	for (int i = 0; i < rows; i++) {

		for (int j = 0; j < cols; j++) {

			cout << B[i][j];

		}

	}

}