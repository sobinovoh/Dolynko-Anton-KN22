#include <iostream>
#include <math.h>
#include <tgmath.h>
#include <windows.h>
#include <string>

using namespace std;

float s_calculation(int x, int y, int z)
{
    return (pow(abs(z * z * 1 / 2 * y), 1 / 2) + (3.14 * x + exp(y)) / y);
}

string decToHexa(int n)
{
    // char array to store hexadecimal number
    char hexaDeciNum[100];
    string str = "";
    // counter for hexadecimal number array
    int i = 0;
    while (n != 0) {
        // temporary variable to store remainder
        int temp = 0;

        // storing remainder in temp variable.
        temp = n % 16;

        // check if temp < 10
        if (temp < 10) {
            hexaDeciNum[i] = temp + 48;
            i++;
        }
        else {
            hexaDeciNum[i] = temp + 55;
            i++;
        }

        n = n / 16;
    }
    for (int j = i - 1; j >= 0; j--)
        str += hexaDeciNum[j];

    return str;
}

string boolToString(bool b){
    return b ? "true" : "false";
}

string copyright(){
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    return "Dolynko Anton �";
}

string returnExpression(int a, int  b){
    return "a + 5 >= b ? " + boolToString(a + 1 > abs(b - 2));
}

string decimal(int x, int y, int z){
    return "x = " + to_string(x) +
           ", y = " + to_string(y) +
           ", z = " + to_string(z);
}

string hexADecimal(int x, int y, int z){
    return "x = " + decToHexa(x) +
           ", y = " + decToHexa(y) +
           ", z = " + decToHexa(z);
}

string s_calculation_to_string(int x, int y, int z){
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    return "(pow(abs(z * z * 1 / 2 * y), 1 / 2) + (3.14 * x + exp(y)) / y)" +
     to_string(y) + " + " + to_string(z) + "/" + to_string(x) + " = " + to_string(s_calculation(x, y, z));
}
