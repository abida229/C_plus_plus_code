#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x , y, result;
    cout<<"Enter value of x ";                // x is a dividend
    cin>>x;
    cout<<"Enter value of y ";                 // y is a divisor
    cin>>y;
    result = remainder(x, y);
    cout << "Remainder of " << x << "/" << y << " = " << result << endl;    // dividend over divisor
    return 0;
}
