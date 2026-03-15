#include <iostream>

using namespace std;

int main()
{
    string array[5] = { "apple", "pear", "melon", "apple", "orange" };

    for (int i = 0; i < 5; i++) {

        string CurrentString = array[i];
        int CurrentIndex = i;

        for (int j = 0; j < 5; j++) {

            if (CurrentString == array[j] && CurrentIndex != j) {

                cout << "[" << i << "][" << j << "]" << endl;
                cout << "There is more than one " << CurrentString << endl;

            }

        }

    }

}