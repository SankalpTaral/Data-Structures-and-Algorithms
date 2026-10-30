
// Insert an Element into sorted Stack.



#include<iostream>
#include<stack>
using namespace std;


void insertElementInCorrectOrderOfSortedStack(stack<int>&s , int element){


// Step 1 create a new Stack
    stack<int>s2;

// Step2 keep pushing until ur current s1. top <= value and in s1 keep poping

while(!s.empty()&& s.top() > element){
    // egde case make sure add s.empty meaning stack is not empty else undefined behaviour so
    // tc -> 2,4,6,8 value = 1 so always come out if stack has become empty 
    s2.push(s.top());
    s.pop();
}

// now ur top will be pointing to value < el 
// right next u can insert the value at top

s.push(element);

// now 2,5,

// push back all elements from stack2 to s1 


while(!s2.empty()){
    s.push(s2.top());
    s2.pop();
}

/*

Tc analysis
O(N) -> for pushing an element into s2 and poping it from stack1 loop will run n times worst case
O(1)-> inserting an element into its position
O(N) -> inserting back an element from s2 to s1 
total -> O(N)

space -> O(N) -> for creating stack2
*/


}

int main(){
   
    stack<int>s;

    s.push(2);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    int element = 0;

    insertElementInCorrectOrderOfSortedStack(s,element);
    
    // print the stack to confirm

    while(!s.empty()){
        cout << s.top() << endl;
        s.pop();
    }


    
}

// an edge case will occur what if they give an element 2,4,6,8 el = 0 