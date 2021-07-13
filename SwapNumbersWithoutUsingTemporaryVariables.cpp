

#include<iostream>
using namespace std ;
int main ()
{
    int a=20 , b=10 ;
    cout << "Before swapping number " <<"a =" <<a <<" & " <<"b =" <<b <<endl ;

    a=a+b;
    b=a-b;
    a=b-a;

    cout <<"after swapping number " <<"a =" <<a <<"  &  " <<"b =" <<b <<endl ; 




    return 0 ;
    
}