#include <iostream>
#include <cmath>
using namespace std;


double sumSqrt(double N);
double s = 1+(1/squrt(2))+(1/squrt(3))+(1/squrt(4))+(1/squrt(N));
return s;
   

int main()
{
    double a = sumSqrt(20);
    double b = sumSqrt(10);
    double c = sumSqrt(5);
    double d = sumSqrt(2);
    double e = sumSqrt(1);
    double f = sumSqrt(0);
    double g = sumSqrt(-1);
    
    cout << a << "\n" << b << "\n" << c << "\n" << d << "\n" << e << "\n" << f << "\n" << g << "\n";

}
