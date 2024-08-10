
#   AIM

To learn about VS code and getting input from user and displaying it.

# Software Used
VS Code

# Problem Statement
 1.) Simple 'Hello world' program.

 2.) Getting input from user and displaying it.
 
 3.) Basic calculator.

 # Theory
To print a message or output we use _'cout'_ .

The namespace is used to decrease or limit the scope of any variable or function.
 
 _'endl'_ is used to move the cursor to the new line.


## Program Codes


```javascript
//Print hello world
#include<iostream>
using namespace std;
int main()
{
    cout<< "Hello World!";
    return 0;
}


 
// Input from user
#include<iostream>
using namespace std;
int main()
{
    string a;
    cout << "Enter your name ";
    getline(cin,a);
    cout<<"Hello  " <<a;
    return 0;
}

//Calculator 
#include<iostream>
using namespace std;
int main()
{ float a,b,c,d,e,f;
    cout<<"enter first number ";
    cin >> a;
    cout<< "enter second number ";
    cin >> b;
    c = a+b ;
    cout << "Sum is: " <<c<<endl;
    d = a-b;
    cout<< "Difference is: "<<d<<endl;
    e = a*b;
    cout<<"Product is:" << e <<endl;
    f = a/b;
    cout<<"Quotient is: "<<f<<endl;
    return 0;
}
```


## Output

Print hello world
![image](https://github.com/user-attachments/assets/85b9a311-8dc4-4a9b-8559-b86f7fcc94ad)

Input from user
![image](https://github.com/user-attachments/assets/b66663b9-09a2-4a71-92a3-6a6c0b57d6cb)

Calculator
![image](https://github.com/user-attachments/assets/afae3899-c280-4fe1-ab37-ef7f3612701c)


# Conclusion
We learnt how to take input from user and print it, we learnt to use basic operators like +, - , * and /.




