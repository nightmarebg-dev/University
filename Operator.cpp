#include <iostream>
#include <string>

using namespace std;

class Date {
	short day, month, year;
public:
	void SetDate() {
		cout << "Day: "; cin >> day;
		cout << "Month: "; cin >> month;
		cout << "Year: "; cin >> year;
	}

	void DisplayDate() {
		cout << day << '/' << month << '/' << year << endl;
	}

	short GetDay() { return day; }
	short GetMonth() { return month; }
	short GetYear() { return year; }

	Date(short day, short month, short year) : day(day), month(month), year(year) {}
	Date() { day = 0; month = 0; year = 0; }

	bool operator==(Date date2) {

		if (day == date2.day) {
			if (month == date2.month) {
				if (year == date2.year) {
					return true;
				}
			}
		}

		return false;
	}

	bool operator!=(Date date2) {

		if (day != date2.day) {
			if (month != date2.month) {
				if (year != date2.year) {
					return true;
				}
			}
		}

		return false;
	}

	bool operator <(Date date2) {

		if (year < date2.year) {
			return true;
		}
		else if(month < date2.month) {
			return true;
		}
		else if (day < date2.day) {
			return true;
		}

		return false;

	}

	bool operator >(Date date2) {

		if (year > date2.year) {
			return true;
		}
		else if (month > date2.month) {
			return true;
		}
		else if (day > date2.day) {
			return true;
		}

		return false;

	}

	bool operator<=(Date date2) {

		if (day != date2.day) {
			if (month != date2.month) {
				if (year != date2.year) {
					return true;
				}
			}
		}

		return false;
	}

};

class Document {

	int documentNumber;
	string owner;
	Date issueDate;
	Date exparationDate;

public:

	Document() {

		Date defaultDate;

		documentNumber = 0;
		owner = "None";
		issueDate = defaultDate;
		exparationDate = defaultDate;

	}

	Document(int documentNumber, string owner, Date issueDate, Date exparationDate):
		documentNumber(documentNumber), owner(owner), issueDate(issueDate), exparationDate(exparationDate) {}

	void SetData() {

		Date Setter;

		cout << "Document number: "; cin >> documentNumber;
		cin.ignore();
		cout << "Owner: "; getline(cin, owner);
		cout << "Issue Date: " << endl;
		Setter.SetDate();
		issueDate = Setter;
		cout << "exparationDate: " << endl;
		Setter.SetDate();
		exparationDate = Setter;

	}

	void DisplayData() {

		cout << "Document number: " << documentNumber << endl;
		cout << "Owner: " << owner << endl;
		cout << "Issue Date: "; issueDate.DisplayDate();
		cout << "exparationDate: "; exparationDate.DisplayDate();

	}

};

class StudentCard : public Document {

	int FN;
	string Major;

public:

	void DisplayData() {
		Document::DisplayData();
		cout << "FN: " << FN << endl;
		cout << "Major: " << Major << endl;

	}

	void SetData() {

		Document::SetData();
		cout << "FN: "; cin >> FN;
		cin.ignore();
		cout << "Major: "; getline(cin, Major);

	}

	StudentCard(int documentNumber, string owner, Date issueDate, Date exparationDate, int FN, string Major)
		: Document(documentNumber, owner, issueDate, exparationDate),  FN(FN), Major(Major) {}
	StudentCard() : Document() { FN = 0; Major = "None"; }
};

class LibraryCard : public Document {

	int readerNumber;
	int amountOfBorrowedBooks;
public:
	LibraryCard(int documentNumber, string owner, Date issueDate, Date exparationDate, int readerNumber, int amountOfBorrowedBooks) :
		Document(documentNumber, owner, issueDate, exparationDate), readerNumber(readerNumber), amountOfBorrowedBooks(amountOfBorrowedBooks) {}

	LibraryCard() : Document() { readerNumber = 0; amountOfBorrowedBooks = 0; }

};

int main()
{

}
