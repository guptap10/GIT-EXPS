//PRAKHAR GUPTA
//23070123101
# include<iostream>
using namespace std;
 int main()
 { int year;
    cout << "Enter year greater than 2000: "<<endl;
    cin>>year;

    try{
if ( year<2000)
{
    throw "You entered a year less than 2000";

}
else{
    cout<< "Entered year is: "<<year<<endl;
}
    }

    catch ( const char*msg)

    { 
        cout << msg;
        
    }
 }