# Aim
To learn the execution and use of if statements & switch in c++.

# Software Used
VS Code

# Problem Statement
1.) Write a c++ program to check if the year is a leap year.
2.) Write a c++ program to validate the password.
3.) Write a c++ program to print days of week.
4.) Write a c++ program to make a simple calculator.
5.) Write a c++ program to evaluate grades.

# Theory
Use if to specify a block of code to be executed, if a specified condition is true.

Use else to specify a block of code to be executed, if the same condition is false.

Use else if to specify a new condition to test, if the first condition is false.

Use switch to specify many alternative blocks of code to be executed.

The switch statement in C++ is a flow control statement that is used to execute the different blocks of statements based on the value of the given expression. We can create different cases for different values of the switch expression. We can specify any number of cases in the switch statement but the case value can only be of type int or char.

# Program Codes

```javascript
//Leap Year
#include<iostream>
using namespace std;
int main()
{
    int y;
    char c;
    cout<<"Enter year to check: ";
    cin>>y;
    if ( y%4==0 && y%100!=0 || y%400==0 )
    { cout<<y<<" is a leap year";}
    else
    { cout<<y<<" is not a leap year";}
    return 0;
}

//Password Validation
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

//Days of Week
#include<iostream>
using namespace std;
int main()
{
    int a,b,c, choice ;
    cout << "DAY"<<endl;
    cout << "1: Monday"<<endl;
    cout << "2: Tuesday"<<endl;
    cout << "3: Wednesday"<<endl;
    cout << "4: Thursday"<<endl;
    cout << "5: Friday"<<endl;
    cout << "6: Saturday"<<endl;
    cout << "7: Sunday"<<endl;
    cout<<"Enter number of day: ";
    cin>>choice;
switch(choice)
{
{ case 1 :
cout<< "Day is Monday";
}
break ;
{ case 2 :
cout<< "Day is Tuesday";
}
break ;
{ case 3 :
cout<< "Day is Wednesday";
}
break ;{ case 4 :
cout<< "Day is Thursday";
}
break ;
{ case 5 :
cout<< "Day is Friday";
}
break ;
{
 case 6 :
cout<< "Day is Saturday";
}
break ;
{ case 7 :
cout<< "Day is Sunday";
}
}
}

//Calculator
#include<iostream>
using namespace std;
int main()
{
    float a,b,c ;

    int choice;
    cout << "Calculator"<<endl;
    cout << "1: Addition"<<endl;
    cout << "2: Subtraction"<<endl;
    cout << "3: Multiplication"<<endl;
    cout << "4: Division"<<endl;
    cout<<"Enter operation choice: ";
    cin>>choice;
switch(choice)
{
    case 1 :
    { float c;
    cout<<"Enter numbers: ";
    cin>>a>>b;
    c=a+b;
    cout<<"sum is = "<<c;
    } 
    break;
    case 2 :
    {
        float c;
    cout<<"Enter numbers: ";
    cin>>a>>b;
    c=a-b;
    cout<<"difference is = "<<c;
    }

    break;
case 3 :
{ float c;
    cout<<"Enter numbers: ";
    cin>>a>>b;
    c=a*b;
    cout<<"product is = "<<c;
}
break;
case 4 :

{ float c;
   cout<<"Enter numbers: ";
    cin>>a>>b;
    c=a/b;
    cout<<"quotient is = "<<c;
    }
    break ;
}
return 0;
}

//Grade Evaluation
#include <iostream>
using namespace std;
int main()
{
  int s;
  cout<< "Enter your score";
  cin>>s;
  if(s>=90)
  {
    cout<<"Your grade is A"<<endl;
    cout<< "You are passed"<<endl;
  }
  else if(90>s>=80)
  {
    cout<<"Your grade is B"<<endl;
    cout<< "You are passed"<<endl;
  }
  else if(80>s>=70)
  {
    cout<<"Your grade is C"<<endl;
    cout<< "You are passed"<<endl;
  }
  else if(70>s>=60)
  {
    cout<<"Your grade is D"<<endl;
    cout<< "You are passed"<<endl;
  }
  else if(60>s>=50)
  {
    cout<<"Your grade is E"<<endl;
    cout<< "You are passed"<<endl;
  }
  else
  { cout<< "Failed";
  }
  return 0;
}

```
# Output
1.) Leap Year
<img width="1052" alt="Screenshot 2024-08-11 at 3 05 41 AM" src="https://github.com/user-attachments/assets/3a8d17cc-cf8d-4180-96c1-7de9f52e179f">


2.) Password
![image](https://github.com/user-attachments/assets/de1509dc-c6d4-41c3-bfac-72bcb783b382)

3.) Days of week
<img width="1215" alt="Screenshot 2024-08-11 at 3 06 40 AM" src="https://github.com/user-attachments/assets/9845c618-3a7c-47a3-95b1-6b226833e3d7">

4.) Calculator
![image](https://github.com/user-attachments/assets/9af61182-0188-4245-b441-ba7cd36167df)

5.) Grades 


# Conclusion
We learnt to use if statements and switch in c++.

