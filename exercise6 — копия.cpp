#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Введите 3 числа: ";
    cin>>a>>b>>c;
    if (a<b && b<c)
        cout<<a<<" "<<b<<" "<<c;
    else if (a<c && c<b)
        cout<<a<<" "<<c<<" "<<b;
    else if (b<a && a<c)
        cout<<b<<" "<<a<<" "<<c;
    else if (b<c && c<a)
        cout<<b<<" "<<c<<" "<<a;
    else if (c<b && b<a)
        cout<<c<<" "<<b<<" "<<a;
    else
        cout<<c<<" "<<a<<" "<<b;
    cout<<endl;     
    return 0;
}