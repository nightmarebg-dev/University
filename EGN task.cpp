#include <iostream>

using namespace std;

class Person {
    string EGN;

    int year;
    int month;
    int day;

    string Region;
    string Gender;

public:

    void GetEGN() {
        cout << "EGN: "; cin >> EGN;

        char cDay[3] = {EGN[4], EGN[5]};
        char cMonth[3] = {EGN[2], EGN[3]};
        char cYear[3] = {EGN[0], EGN[1]};

        char RegionNumber[4] = {EGN[6], EGN[7], EGN[8]};

        char g[2] = { EGN[8] };

        if (atoi(g) % 2 == 0) {
            Gender = "Male";
        }else{
            Gender = "Female";
        }

        day = atoi(cDay);

        if (atoi(cMonth) >= 40) {
            year = 2000 + atoi(cYear);
            month = atoi(cMonth) - 40;
        }
        else {
            year = 1900 + atoi(cYear);
        }

        Region = FindRegion(atoi(RegionNumber));

    }

    string FindRegion(int numb) {

        string region;

        if (numb <= 43) {

            region = "Blagoevgrad";

        }
        else if (numb <= 93) {

            region = "Burgas";

        }
        else if (numb <= 139) {

            region = "Varna";

        }
        else if (numb <= 169) {

            region = "Veliko Turnovo";

        }
        else if (numb <= 183) {

            region = "Vidin";

        }
        else if (numb <= 217) {

            region = "Vraca";

        }
        else if (numb <= 233) {

            region = "Gabrovo";

        }
        else if (numb <= 281) {

            region = "Kurdgali";

        }
        else if (numb <= 301) {

            region = "Kustendil";

        }
        else if (numb <= 319) {

            region = "Lovech";

        }
        else if (numb <= 341) {

            region = "Montana";

        }
        else if (numb <= 377) {

            region = "Pazardgik";

        }
        else if (numb <= 395) {

            region = "Prenik";

        }
        else if (numb <= 435) {

            region = "Pleven";

        }
        else if (numb <= 501) {

            region = "Plovdiv";

        }
        else if (numb <= 527) {

            region = "Razgrad";

        }
        else if (numb <= 555) {

            region = "Ruse";

        }
        else if (numb <= 575) {

            region = "Silistra";

        }
        else if (numb <= 601) {

            region = "Sliven";

        }
        else if (numb <= 623) {

            region = "Smolqn";

        }
        else if (numb <= 751) {

            region = "Sofia";

        }
        else if (numb <= 789) {

            region = "Stara Zagora";

        }
        else if (numb <= 821) {

            region = "Dobrich";

        }
        else if (numb <= 843) {

            region = "Turgovishte";

        }
        else if (numb <= 871) {

            region = "Haskovo";

        }
        else if (numb <= 903) {

            region = "Shumen";

        }
        else if (numb <= 925) {

            region = "Qmbol";

        }
        else if (numb <= 999) {

            region = "Unkownk";

        }

        return region;

    }

    void DisplayInfo() {
        cout << "EGN: " << EGN << endl;
        cout << "Region: " << Region << endl;
        cout << "Birthday: " << day << '/' << month << '/' << year << endl;
        cout << "Gender: " << Gender << endl;
    }

};

int main()
{
    return 0;
}
