#include <iostream>

int main()
{
	long M, N;

	std::cin >> M >> N;

	long counter = 0;

	for (long i = M; i <= N; i++) {

		for (long j = 2; j <= i; j++) {

			if (j * j+j == i) {
				counter += 1;
			}

		}

	}

	std::cout << counter;

	return 0;
}