# AIM
To learn about exception handling in c++.

# Problem Statement

1.) Write a c++ program to get a customized error for entering a negative number.

2.) Write a c++ program to get a customized error for entering a year less than 2000.

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

//YEAR LESS THAN 2000
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

```
# Output

1.) NEGATIVE NUMBER ERROR
<img width="467" alt="image" src="https://github.com/user-attachments/assets/80966f51-1472-413e-b034-a799c718a5e8">

<img width="364" alt="image" src="https://github.com/user-attachments/assets/12da7bfb-a78c-43f2-a623-64b06103bf5a">

2.) YEAR EXCEPTION
<img width="473" alt="image" src="https://github.com/user-attachments/assets/5ae53744-f4b0-460d-8e78-1c0fe4dced24">

<img width="473" alt="image" src="https://github.com/user-attachments/assets/0b0ff2b9-e266-4a5b-bd6e-af2158e6a061">





# Conclusion
