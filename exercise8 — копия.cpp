#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout << "Введите два числа:\n";
    cin >> a >> b;
    if(a!=b){
        a=a+b;
        b=a;
        cout << "a=" << a << " b= " << b;
    }
    else if(a==b){
        a=0;
        b=0;
        cout << "a=" << a << " b= " << b;
    }
    return(0);
}

