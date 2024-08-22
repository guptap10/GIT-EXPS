# Aim
To learn about bitwise operators in c++.

# Software Used
VS Code
# Problem Statement
1.) Write a c++ program to do bitwise operation.

2.) Write a c++ program to take a number as input from user along with bit position numbers to be set and reset in the inputted number and perform bitwise logical operations on those numbers.

# Theory
Bitwise Operators are the operators that are used to perform operations on the bit level on the integers. While performing this operation integers are considered as sequences of binary digits. 

# Program Codes

```javascript
//PRAKHAR GUPTA
//23070123101

//Bitwise operation
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

//Bit Position
#include <iostream>
#include <bitset>
using namespace std;

int main() {
    int num, set, reset;
    
    cout << "Enter a number: ";
    cin >> num;
    cout << "Enter the bit position to set (0 to 7): ";
    cin >> set;
    cout << "Enter the bit position to reset (0 to 7): ";
    cin >> reset;
    cout<<num<<" in binary is "<<bitset<8>(num)<<endl;
   
    int num_set = num | (1 << set);
    cout << "Result after setting bit number " <<set<< " is " << bitset<8>(num_set) << endl;
    
    int num_reset = num_set & ~(1 << reset);
    cout << "Result after resetting bit number " <<reset<< " is " << bitset<8>(num_reset) << endl;
    return 0;
}

```

# Output
1.) Bitwise operation
<img width="1052" alt="image" src="https://github.com/user-attachments/assets/a0c938de-068d-492f-bfb8-0feb4cc41112">

2.) Bit position
<img width="1193" alt="image" src="https://github.com/user-attachments/assets/e141c112-28fc-4f85-92f5-b48dae46932e">

# Conclusion
We learnt to use different bitwise operators in c++.

We learnt to check position of a bit in a number and setting and resetting it.
