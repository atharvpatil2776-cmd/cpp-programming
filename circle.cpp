#include <iostream>
using namespace std;
int main()
{
float r;
const float pi = 3.14;

cout << "Enter radius: ";
cin >> r;
cout << "Area =" << pi * r * r << endl;
cout << "Circumference = " << 2 * pi * r;

return 0;
}
