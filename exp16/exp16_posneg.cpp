//PRAKHAR GUPTA
//23070123101
# include<iostream>
using namespace std;
 int main()
 {  float a;
    cout<< "Enter a positive  numbers: "<<endl;
    cin>>a;

try {
    if ( a<0)
    {
        throw a;
    }
else {
 cout<< "The number  is: "<<a<<endl;
 }
}
catch (const float n)
{
    cout<<"You entered " <<a<<" which is a negative number"<<n;
}
 }