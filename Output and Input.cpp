#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    int NameLenght;

    printf("Name lenght: ");
    scanf_s("%d", &NameLenght);

    char* Name = new char[NameLenght];
    int Age;

    scanf_s("%s", Name, NameLenght + 1);
    scanf_s("%d", &Age);

    printf("Name:%s \n", Name);
    printf("Age:%d", Age);

}
