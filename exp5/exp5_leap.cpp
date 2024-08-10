//PRAKHAR GUPTA
//PRN: 23070123101
#include<iostream>
using namespace std;
int main()
{
    int y;
    char c;
    cout<<"Enter year to check: ";
    cin>>y;
    if ( y%4==0 && y%100!=0 || y%400==0 )
    { cout<<y<<" is a leap year";}2003
    else
    { cout<<y<<" is not a leap year";}
    return 0;
}