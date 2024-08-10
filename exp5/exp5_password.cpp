#include<iostream>
using namespace std;
int main()
{
   string password;
   cout << "Enter the password: ";
   cin >> password;
   if (password == "secret")
   {
    cout << "Access Granted ";
   }
   else
   { 
    cout<< "Access Denied";
   }
   return 0;
}