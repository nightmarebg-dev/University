#include <iostream>
#include <string>

using namespace std;

class Tourist {
protected:
	string name;
	string EGN;
	string phone_number;
	int monthly_income;
	string country_to_visit;

	int year, month, day;
	char gender;

public:

	Tourist() {
		name = "empty";
		EGN = "--------";
		phone_number = "----------";
		monthly_income = 0;
		country_to_visit = "empty";
	}

	Tourist(string name, string EGN, string phone_number, int monthly_income, string country_to_visit) :
		name(name), EGN(EGN), phone_number(phone_number), monthly_income(monthly_income), country_to_visit(country_to_visit) {}

	void EGNtoInfo() {
		char y[3] = { EGN[0], EGN[1] };
		char m[3] = { EGN[2], EGN[3] };
		char d[3] = { EGN[4], EGN[5] };

		if (m[0] == '4' || m[0] == '5') {

			year = 2000 + atoi(y);
			month = atoi(m) - 40;

		}
		else {

			year = 1900 + atoi(y);
			month = atoi(m);

		}

		day = atoi(d);

		if ((EGN[8] - '0') % 2 == 0) {
			gender = 'm';
		}
		else gender = 'f';
	}



	void SetData() {
		
		cout << "Name: "; getline(cin, name);
		cout << "EGN: "; getline(cin, EGN);
		cout << "Phone number: "; getline(cin, phone_number);
		cout << "Monthly income: "; cin >> monthly_income;
		cin.ignore();
		cout << "Country: "; cin >> country_to_visit;

		EGNtoInfo();

	}

	void DisplayData() {

		cout << "Name: " << name << endl;
		cout << "EGN: " << EGN << endl;
		cout << "Phone number: " << phone_number << endl;
		cout << "Monthly income: " << monthly_income << endl;
		cout << "Country: " << country_to_visit << endl;
		cout << "Date of birth: " << day << '/' << month << '/' << year << endl;
		cout << "Gender: "; if (gender == 'm') cout << "male" << endl; else cout << "female" << endl;

	}

	char GetGender() {
		return gender;
	}

	int GetIncome() {
		return monthly_income;
	}

	string GetName() {
		return name;
	}

	string GetDateOfBirth() {
		string y = to_string(year);
		string m = to_string(month);
		string d = to_string(day);

		string date = d + '/' + m + '/' + y;

		return date;
	}

	bool Check(string Country) {

		if (phone_number[0] == '0' && phone_number[1] == '8' && phone_number[2] == '8' && country_to_visit == Country) return true;
		else return false;

	}
	
};

void Menu() {

	cout << "0. close the program" << endl;
	cout << "1. add tourist" << endl;
	cout << "2. display all tourist data" << endl;
	cout << "3. display names and dates of birth of women with montly income less or equal to 1000" << endl;
	cout << "4. creates list of tourists with numbers starting with 088, if they are candidates for certain country" << endl;
	cout << "5. display list of tourists with numbers starting with 088, if they are candidates for certain country" << endl;

}

int main()
{
	tourist agency[500];
	tourist list[500];

	int c = 0;
	int v = 0;

	int choice;

	string country = "empty";
	
	do {
		Menu();
		cin >> choice;

		switch (choice) {

		case 1:
			if (c == 500) {
				cout << "No more space!";
			}
			else {
				cin.ignore();
				agency[c].SetData();
				c++;
			}
			break;


		case 2:
			for (int i = 0; i < c; i++) {
				agency[i].DisplayData();
			}
			break;

		case 3:
			for (int i = 0; i < c; i++) {
				if (agency[i].GetGender() == 'f' && agency[i].GetIncome() <= 1000) {
					cout << agency[i].GetName() << endl;
					cout << agency[i].GetDateOfBirth() << endl;
				}
			}
			break;

		case 4:
			
			
			cin.ignore();

			cout << "Country for visit: ";
			getline(cin, country);

			v = 0;
			

			for (int i = 0; i < c; i++) {
				if (agency[i].Check(country)) {
					list[v] = agency[i];
					v++;
				}
			}
			break;

		case 5:

			for (int i = 0; i < v; i++) {

				list[i].DisplayData();

			}
			break;

		case 0:

			cout << "Goodbye!!!" << endl;
			break;
		}
	} while (choice != 0);

}
