#include <iostream>

using namespace std;

int main()
{
    double euro = 0;
    double lev = 0;

    int choice;

    cout << "Welcome to our currency converter!" << endl;
    cout << "How would you like to convert?" << endl;

    cout << "1. BGN to euro" << endl;
    cout << "2. euro to BGN" << endl;  
    cin >> choice;

    if (choice == 1) {

        cout << "BGN: "; cin >> lev;
        euro = 0.5123 * lev;
        cout << lev << " BGN = " << euro << " euro" << endl;

    }
    else {

        cout << "Euro: "; cin >> euro;
        lev = 1.952 * euro;
        cout << euro << " euro = " << lev << " BGN" << endl;

    }

}