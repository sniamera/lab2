#include <iostream>
using namespace std;
int main(){

    double a, b, c;
    cout<<"Введите 3 числа:\n ";
    cin>>a>>b>>c;
    if (a < b && b < c){
        a*=2;
        b*=2;
        c*=2;
    }
    else{
        a=-a;
        b=-b;
        c=-c;
    }
    cout << a << ' ' << b << ' ' << c << endl;
    return 0;
}