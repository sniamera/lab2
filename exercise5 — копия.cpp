#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int x, y;
    cout << "Введите x\n";
    cin >> x;
    cout << "Введите y\n";
    cin >> y;
    if(x>y){
        swap(x,y);
        cout << "X=" << x << "\nY=" << y;
    }
    return(0);
}
    
    

