# Aim
To learn about arithmetic, logical, miscelleaneous and assignment operators on c++.
# Software Used
VS Code

# Problem Statement
1.) Write a code for boolean operators in c++.
2.) Write a code for checking equality of values in c++.
3.) Write a code for checking inequality of values in c++.

# Theory
The boolalpha function is a manipulator that sets the boolalpha flag, which tells the stream to read or write a bool value as text, according to the stream's locale.

The equal-to operator ( == ) returns true if both operands have the same value; otherwise, it returns false . The not-equal-to operator ( != ) returns true if the operands don't have the same value; otherwise, it returns false .
# Program codes
```javascript
//Bool
#include<iostream>
 using namespace std;
 int main()
{
    bool a = true;
    bool b = true;
    cout<<boolalpha;
    cout<<"a&&b: "<<(a&&b)<<endl;
    return 0;
}

//Equality Operator
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
    cout<<"a==b: "<<(a==b)<<endl;
    return 0;
}

//Inequality Operator
#include<iostream>
 using namespace std;
 int main()
{
    int a,b;
    cout<<"enter first number: ";
    cin>>a;
    cout<<"enter second number: ";
    cin>>b;
    cout<<"a!=b: "<<(a!=b)<<endl;
    return 0;
}


 #include<iostream>
 using namespace std;
 int main()
{ int a,b;
    
    a = 1;
    b = 1;
    cout<<"a&b: "<<(a&b)<<endl;
    cout<<"a|b: "<<(a|b)<<endl;
    cout<<"a^b: "<<(a^b)<<endl;
    cout<<"a: "<<(~a)<<endl;
    cout<<"a<<b: "<<(a<<b)<<endl;
    cout<<"a>>b: "<<(a>>b)<<endl;
    
    return 0;
}
```
# Output
1.) ![image](https://github.com/user-attachments/assets/7e12fec6-8f2c-4bca-ba3f-935bc16ff19b)
2.) <img width="1052" alt="Screenshot 2024-08-11 at 12 59 26 AM" src="https://github.com/user-attachments/assets/f1ca59dd-57c0-4014-b84f-3c037988407a">
3.) <img width="1052" alt="Screenshot 2024-08-11 at 1 01 13 AM" src="https://github.com/user-attachments/assets/dba90c16-9b3c-41ef-95b9-5df02a0dddfc">
4.) <img width="1052" alt="Screenshot 2024-08-11 at 1 00 25 AM" src="https://github.com/user-attachments/assets/c3539670-4184-4d84-a01b-4d5495a1b096">




