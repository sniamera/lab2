#include"iostream"
 
using namespace std;
int main()
{
    int a,b;
    cout <<"a = ";
    cin >> a;
    cout <<"b = ";
    cin >> b;
 
    if(a==b){
        a = 0;
        b = 0;
}
     if (a!=b||b!=a){
         if (a > b){
             b = a;
         }
         else if (b > a){
             a = b;
         }
     }
cout << "a = " << a << " b = " << b << endl;
    return 0;
}