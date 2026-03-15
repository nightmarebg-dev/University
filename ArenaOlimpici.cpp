#include <iostream>
using namespace std;

int SumOfDigits(int a) {

    int Sum = 0;

    while (a != 0) {

        Sum += a % 10;

        a / 10;

    }

    return Sum;

}

int main()
{
    int N, K, Y, A, B;

    cin >> N >> K >> Y >> A >> B;

    int CurrentPrice = 0;
    int KilomitersLeft = N;
    int KilomitersPast = 0;

    
    
}
