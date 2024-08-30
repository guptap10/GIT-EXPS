//PRAKHAR GUPTA
//23070123101
#include<iostream>
using namespace std;
int main()
{
    string str1;
    char a;
    int count =0 ;
    cout<<"Enter a string: "<<endl;
    cin>>str1;

    cout<<"Enter a letter to search: "<<endl;
    cin>>a;

    a = tolower(a);
    for(char c : str1)
    {
if (tolower(c)== a)
{
    count++;
}
    }
    cout<<"The letter "<<a<<" appears "<<count<<" times in the string.  "<<endl;

    return 0;



}