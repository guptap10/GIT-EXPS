# AIM
To learn about exception handling in c++.

# Problem Statement

1.) Write a c++ program to use try, catch and throw to give a customized error.

# Theory

In C++, exceptions are runtime anomalies or abnormal conditions that a program encounters during its execution. The process of handling these exceptions is called exception handling. Using the exception handling mechanism, the control from one part of the program where the exception occurred can be transferred to another part of the code.

So basically using exception handling in C++, we can handle the exceptions so that our program keeps running.

# Problem Codes

```javascript
//PRAKHAR GUPTA
//23070123101

//NEGATIVE NUMBER ERROR
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

```
# Output

# Conclusion
