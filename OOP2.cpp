#include <iostream>
#include <string>
#include <typeinfo>

using namespace std;

class plant {
private:
    string name;
    double price;
    int amount;
public:

    plant() {
        name = "flower";
        price = 0;
        amount = 0;
    }

    plant(string name, double price, int amount) : name(name), price(price), amount(amount) {}

    virtual void SetData() {
        cout << "name: "; getline(cin, name);
        cout << "price: "; cin >> price;
        cout << "amount: "; cin >> amount;
    }

    virtual void displayData() {

        cout << "Name: " << name << endl;
        cout << "Price: " << price << endl;
        cout << "Amount: " << amount << endl;

    }

    virtual void printIfRedFlower() {}

    double GetPrice() {
        return price;
    }

};

class flower : public plant {
private:
    string color;

public:

    flower() {
        plant();
        color = "red";
    }

    flower(string name, double price, int amount, string color) : plant(name, price, amount), color(color) {}

    void SetData() {
        plant::SetData();
        cin.ignore();
        cout << "Color: "; getline(cin, color);
    }

    void displayData() {

        plant::displayData();
        cout << "Color: " << color << endl;

    }

    string GetColor() {
        return color;
    }

    void printIfRedFlower() {
        if (color == "red")
        flower::displayData();
    }

};

class tree : public plant {
private:
    double height;
    string type;
    //coniferous or deciduous

public:

    tree() {
        plant();
        height = 0;
        type = "coniferous";
    }

    tree(string name, double price, int amount, double height, string type) : plant(name, price, amount), height(height), type(type) {}

    void SetData() {
        plant::SetData();
        cout << "Height: "; cin >> height;
        cin.ignore();
        cout << "Type: "; getline(cin, type);
    }

    void displayData() {
        plant::displayData();
        cout << "Height: " << height << endl;
        cout << "Type: " << type << endl;
    }

};

void Menu() {

    cout << "1. Add new plant" << endl;
    cout << "2. Display all plants" << endl;
    cout << "3. Displays plant with heighest price" << endl;
    cout << "4. Displays all red flowers" << endl;
    cout << "0. Close the program" << endl;

}

void flowerOrTree(){

    cout << "1. flower" << endl;
    cout << "2. tree" << endl;

}

int main()
{

    plant* garden[200];
    int plants = 0;

    flower* colorPtr;

    short choice;
    int highestPriceIndex = 0;

    do {

        Menu();
        cin >> choice;

        switch (choice) {

        case 1:
            flowerOrTree();
            cin >> choice;
            cin.ignore();

            if (choice == 1) {
                garden[plants] = new flower;
            }
            else if (choice == 2) {
                garden[plants] = new tree;
            }

            garden[plants]->SetData();

            plants++;

            break;

        case 2:
            for (int i = 0; i < plants; i++) {

                garden[i]->displayData();

            }
            break;
        case 3:
            for (int i = 0; i < plants; i++) {

                if (garden[i]->GetPrice() > garden[highestPriceIndex]->GetPrice()) {

                    highestPriceIndex = i;

                }

            }

            garden[highestPriceIndex]->displayData();
            break;

        case 4:
            for (int i = 0; i < plants; i++) {

                garden[i]->printIfRedFlower();

            }
            break;
        }
    } while (choice != 0);
    
    for (int i = 0; i < plants; i++) {

        delete garden[i];

    }

}
