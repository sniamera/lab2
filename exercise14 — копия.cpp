#include <iostream>
#include <cmath>
using namespace std;
int main()
{
int a, b, c;
cout << "Введите A B C\n";
cin >> a >> b >> c;
if (fabs(b - a) <= fabs(c - a)) 
cout << "Ближе B, R = " << fabs(b-a) << endl;
else cout << "Ближе C, R = " << fabs(c-a) << endl;
return 0;
}
