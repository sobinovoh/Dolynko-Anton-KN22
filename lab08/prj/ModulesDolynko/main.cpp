#include <iostream>
#include <cmath>


using namespace std;

float s_calculation(int x, int y, int z)
{
    float S = (pow(abs(z * z * 1 / 2 * y), 1 / 2) + (3.14 * x + exp(y)) / y);
    return S;
}


int main()
{
    int x, y, z;
    cin >> x;
    cin >> y;
    cin >> z;
    cout << s_calculation(x, y, z);

    return 0;
}
