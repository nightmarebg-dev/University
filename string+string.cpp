#include <iostream>

using namespace std;

int main() {

	char S[41];

	cin.getline(S, 40);

	int i;
	int j = 0;

	char N[21];
	char M[21];

	for (i = 0; i < strlen(S); i++) {

		if (isdigit(S[i])) {

			N[j] = S[i];
			j++;

		}

		if (S[i] == '+') {
			j = 0;
			break;
		}

	}

	for (i++ ; i < strlen(S); i++) {

		if (isdigit(S[i])) {

			M[j] = S[i];
			j++;

		}else{break;}

	}

	cout << atoi(N) << '+' << atoi(M) << '=' << atoi(N) + atoi(M) << endl;

	return 0;
}