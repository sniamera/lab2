#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int x, y, z;
    cout << "Введите три числа\n";
    cin >> x;
    cin >> y;
    cin >> z;
    if(x<0){
       x = pow(x,2);
       cout << x << endl; 
    }
    else { 
        x = pow(x,3);
        cout << x << endl;
    }
    if(y<0){
       y = pow(y,2); 
       cout << y << endl;
    }
    else { 
        y = pow(y,3);
         cout << y << endl;
    }
    if(z<0){
       z = pow(z,2); 
       cout << z << endl;
    }
    else { 
        z = pow(z,3);
        cout << z << endl;
    }
    return(0);
}
