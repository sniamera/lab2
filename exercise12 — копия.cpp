#include <iostream>
using namespace std;
int main(){
    int x,y;
    cout << "Введите X:\n";
    cin >> x;
    cout << "Введите Y:\n";
    cin >> y;
    if(x==0 && y==0)
    cout << 1 ;
    else if(y==0)
    cout << 2 ;
    else if(x==0)
    cout << 3 ;
    else if(x!=0 && y!=0)
    cout << 0 ;
    return(0);

}