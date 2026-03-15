#include <iostream>

using namespace std;

int NOD(int a, int b) {

    if (b != 0){
        int r = a % b;

        a = r;
        b = a;

        NOD(a, b);
    }

    return a;
}

int main()
{
    int a, b;

    cin >> a >> b;

    cout << NOD(a, b);
   
}