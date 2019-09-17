#include <iostream>
using namespace std;
int main(){
    int x, y, z;
    cout << "Введите три числа\n";
    cin >> x;
    cin >> y;
    cin >> z;
    if(x>y && x>z){
        cout << x << " - наибольшее число\n";
    }
    if(x<y && x<z){
        cout << x << " - наименьшее число\n";
    }
    if(y>x && y>z){
        cout << y << " - наибольшее число\n";
    }
    if(y<x && y<z){
        cout << y << " - наименьшее число\n";
    }
    if(z>y && z>x){
        cout << z << " - наибольшее число\n";
    }
    if(z<y && z<x){
        cout << z << " - наименьшее число\n";
        return(0);
    }
}
