# AIM
To use linked list in c++.

# Problem Statement 
1.) To create a node in c++.

# Theory 
n C++, a linked list is a linear data structure that allows the users to store data in non-contiguous memory locations. A linked list is defined as a collection of nodes where each node consists of two members which represents its value and a next pointer which stores the address for the next node. In this article, we will learn about the linked list, its implementation, and its practical applications.

# Problem Code 

```javascript
//PRAKHAR GUPTA
//23070123101

//NODES
#include<iostream>
using namespace std;
class Link{
    public:
    int data ;
    Link* next;
    Link(int num){
        data = num;
        next = NULL;
    }
};
int main(){
    Link* l1 = new Link(6);
    cout << l1->data<<"   "<<l1->next;

}

//ADDING NODES
```

# Output

1.) NODES

<img width="1057" alt="image" src="https://github.com/user-attachments/assets/1f2fcd21-b563-4b03-83c6-a75bd040c5af">

2.) ADDING NODES

