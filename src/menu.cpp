#include <iostream>
#include <cstdio>
#include "../include/converter.h"

using namespace std;

void main_menu(void)
{
    Converter converter;

    unsigned int choice;
    long int result;
    long long int binary_num;

    printf("\n\n\t\t\t--------------------------------- \n");
    printf("\t\t\t   >>> CONVERTER OF NUMBER <<< \n");
    printf("\t\t\t--------------------------------- \n\n");

    printf("----------------------------------- \n");
    printf("[1] Binary To Decimal.\n");
    printf("[2] Decimal To Binary.\n");
    printf("[3] Sitting.\n");
    printf("[4] Exit.\n");
    printf("----------------------------------- \n\n");

    printf("Enter Your Choice & Hit enter. ");
    scanf("%u", &choice);

    switch(choice)
    {
        case 1:
            cout << "Enter a binary number: ";
            cin >> binary_num;

            result = converter.binary_to_decimal_converter(binary_num);
            cout << "Decimal equivalent: " << result << endl;
    }
}
