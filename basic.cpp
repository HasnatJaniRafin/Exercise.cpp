#include<iostream>
using namespace std ;
int main ()
{
    cout <<endl;
    int y ;
    cout << " Welcome our leap year programming  ! " <<endl  ;

    cout << " Enter your year : "  ;
    cin >>y ;

    if ((y%4==0 && y%100!=0)     ||      ( y%400==0) ){
        cout << " Leap Year " ;
    }

    else {
        cout << "Sorry ! Not Leap year" ;
    }











    return 0 ;

}