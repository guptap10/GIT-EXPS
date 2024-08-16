# AIM
To do operation like concatenation, reverse string and palindrome on c++.

# SOFTWARE USED
VS Code

# PROBLEM STATEMENT
1.) Write a c++ program to take input from user. 

2.) Write a c++ program to concatenate the string on c++. 

3.)  Write a c++ program to reverse string. 

4.)  Write a c++ program to check a palindrome.

# THEORY
C++ strings are sequences of characters stored in a char array. Strings are used to store words and text. They are also used to store data, such as numbers and other types of information. Strings in C++ can be defined either using the std::string class or the C-style character arrays.

A palindrome is a word, sentence, verse, or even number that reads the same backward or forward.

# PROGRAM CODES

```javascript
//USER INPUT
#include <iostream>
using namespace std;
int main()
{
    char s[]= "Prakhar";
    cout<<s<<endl;
    return 0;
}


//CONCATENATION
#include<iostream>
using namespace std;
int main() 
{
    string name("Prakhar");
    string surname("Gupta");
    name.append(surname);
    cout<<name<<endl;
}


//REVERSE STRING
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
string a= "Prakhar";
reverse(a.begin(), a.end());
cout<<"reverse string is:"<<a<<endl;
return 0;
}

//PALINDROME
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main() 
{
    string s1, s2;
    cout << "Enter a word to check";
    cin>>s1;
    s2=s1;
    reverse(s1.begin(), s1.end());
    if (s2==s1) 
    {
        cout<<"Yes! It is a palindrome";
    }
    else cout<<"No! It is not a palindrome";
}

```
# OUTPUT
1.) USER INPUT
<img width="1201" alt="Screenshot 2024-08-16 at 11 42 49 PM" src="https://github.com/user-attachments/assets/c42331dc-c5ba-4531-8444-3d70e4197eb3">

2.) CONCATENATION
<img width="1201" alt="Screenshot 2024-08-16 at 11 43 11 PM" src="https://github.com/user-attachments/assets/fbc3ed9b-7ecb-40c1-90d8-260e3175a791">

3.) REVERSE STRING
<img width="1201" alt="Screenshot 2024-08-16 at 11 43 32 PM" src="https://github.com/user-attachments/assets/bdb64aff-f262-4b93-9fac-b3762a674fad">

4.) PALINDROME
<img width="1201" alt="Screenshot 2024-08-16 at 11 44 28 PM" src="https://github.com/user-attachments/assets/5a256397-1ce2-4367-a6b3-fc3cac34d07f">

# CONCLUSION
We learnt to do concatenation of strings, making and checking palindromes, reversing the string in c++.

