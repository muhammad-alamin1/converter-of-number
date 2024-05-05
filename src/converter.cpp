#include <iostream>
#include <cmath>
#include "../include/converter.h"

using namespace std;

// defenation of binary to decimal
long int Converter::binary_to_decimal_converter(long long int binary_number)
{
    long int decimal_num = 0;
    unsigned int power = 0, digit;

    while(this->binary_number != 0){
        digit = binary_number % 10;
        decimal_num += digit * pow(2, power);
        binary_number /= 10;
        ++power;
    }

    return decimal_num;
}
