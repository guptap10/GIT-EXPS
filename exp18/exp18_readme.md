# AIM
To study and implement stack implementation using array.

# Problem Statement
1.) Write a c++ program to do stack implementation.

# Theory

Stacks are a type of container adaptors with LIFO(Last In First Out) type of working, where a new element is added at one end (top) and an element is removed from that end only.  Stack uses an encapsulated object of either vector or deque (by default) or list (sequential container class) as its underlying container, providing a specific set of member functions to access its elements. 

# Problem Code

```javascript
//PRAKHAR GUPTA
//23070123101
#include <iostream>
using namespace std;
#define size 5
#define ERROR -9999
class Stack{
    int top, ar[size];
    public:
    Stack()
    {
        top=-1;
        ar[0]=0;
    }
    void push(int);
    int pop();
    int peak();
    void disp();
};
void Stack::push(int num)
{
    if (top==size-1)
    {
        cout<<"STACK OVERFLOW: Stack is full"<<endl;
        return;
    }
    else
    {
        ar[++top]=num;
    }
}
int Stack::pop()
{
    int val;
    if(top==-1)
    {
        cout<<"STACK UNDERFLOW: STACK IS EMPTY"<<endl;
        return ERROR;
    }
    else{
         val=ar[top--];
         return val;
    }
}
int Stack::peak()
{
    if(top==-1)
    {
        cout<<"STACK UNDERFLOW: stack is empty"<<endl;
        return ERROR;
    }
    else
    {
        return ar[top];
    }
}
void Stack::disp()
{
    if(top==-1)
    {
       cout<<"STACK UNDERFLOW: stack is empty"<<endl;
        return ;
    }
    else
    {
        int i=0;
        while(i!=(top+1))
        {
            cout<<ar[i]<<"  ";
            i++;
        }
    }
}
int main()
{
    Stack s1;
    s1.push(7);
    s1.push(10);
    s1.push(4);
    int val=s1.pop();
    cout<<val;
    int top=s1.peak();
    cout<<top;
    s1.disp();
    return 0;
}
```

# Output
1.) STACK

<img width="1084" alt="image" src="https://github.com/user-attachments/assets/867486c7-5d69-4684-8a21-d4997eba4474">

# Conclusion

We learnt to do stack in c++.

