#include<iostream>
using namespace std ;
int main ()
{
    int a=10 , b=20 , swap ;

    cout << " Before swapping number : " <<"a = " <<a <<" & " <<"b=" <<b <<endl ;

    swap=a;
    a=b;
    b=swap ;

    cout << " After swapping number : " <<"a = " <<a <<" & " <<"b=" <<b <<endl ;


    return 0;
}