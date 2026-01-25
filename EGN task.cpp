#include <iostream>

using namespace std;

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

int main()
{
    char EGN[12];

    cin.getline(EGN, 11);

    char Year[8]; 
    string gender;
    string region;

    if (EGN[2] == '4') {

        EGN[2] = '0';
        Year[0] = '2'; Year[1] = '0'; Year[2] = EGN[0]; Year[3] = EGN[1]; Year[4] = '\0';

    }
    else {

        Year[0] = '1'; Year[1] = '9'; Year[2] = EGN[0]; Year[3] = EGN[1]; Year[4] = '\0';

    }
        
    char character[3] = {EGN[8], '\0'};

    int numb = atoi(character);

    if (numb % 2 == 0) {

        gender = "Male";

    }else {gender = "Female"; }

    char regionalnumbers[4] = {EGN[6], EGN[7], EGN[8], '\0'};
    int numb2 = atoi(regionalnumbers);

    region = FindRegion(numb2);

   cout << "This person is born on " << EGN[4] << EGN[5] << '/' << EGN[2] << EGN[3] << '/' << Year << endl;
   cout << "This person is from region: " << region << endl;
   cout << "This person is a " << gender << endl;

}