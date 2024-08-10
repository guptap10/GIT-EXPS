# Aim
To learn about bitwise operators in c++.

# Software Used
VS Code
# Problem Statement
Write a c++ program to do bitwise operation.

# Theory
Bitwise Operators are the operators that are used to perform operations on the bit level on the integers. While performing this operation integers are considered as sequences of binary digits. 

# Program Codes

```javascript
#include<iostream>
#include<bitset>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
    cout<<"a|b: "<<bitset<4>(a|b)<<endl;
    cout<<"a&b: "<<bitset<4>(a&b)<<endl;
    cout<<"a<<b: "<<bitset<4>(a<<b)<<endl;
    cout<<"ab: "<<bitset<4>(a>>b)<<endl;
    cout<<"~b: "<<bitset<4>(~b)<<endl;
    cout<<"a^b: "<<bitset<4>(a^b)<<endl;
    return 0;
}
```

# Output
<img width="1052" alt="image" src="https://github.com/user-attachments/assets/a0c938de-068d-492f-bfb8-0feb4cc41112">

# Conclusion
We learnt to use different bitwise operators in c++.
