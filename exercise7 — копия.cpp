#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Введите 3 числа:\n ";
    cin>>a>>b>>c;
    if (a<b && b<c)
        cout<<c<<" "<<b<<" "<<a;
    else if (a<c && c<b)
        cout<<b<<" "<<c<<" "<<a;
    else if (b<a && a<c)
        cout<<c<<" "<<a<<" "<<b;
    else if (b<c && c<a)
        cout<<a<<" "<<c<<" "<<b;
    else if (c<b && b<a)
        cout<<a<<" "<<b<<" "<<c;
    else
        cout<<b<<" "<<a<<" "<<c;
    cout<<endl;     
    return 0;
}