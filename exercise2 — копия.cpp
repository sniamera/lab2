#include <iostream>
using namespace std;
int main(){
    int x, y, z;
    cout << "Введите три числа\n";
    cin >> x;
    cin >> y;
    cin >> z;
    if(x<y && x<z){
       cout << x << " - наименьшее число" << endl; 
    }
    if(y<x && y<z){
       cout << y << " - наименьшее число" << endl;
    }
    if(z<x && z<y){
       cout << z << " - наименьшее число" << endl;
    }
    return(0);
}