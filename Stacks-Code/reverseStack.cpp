
/*
Input:
50 <- top Element
40
30
20
10

reverse it and give me the output
Output
10 <- top Element 
20
30
40
50


Approach 1 :  Create another stack s2   push elements from s1  and pop from orginal stack
    and in s2 u will get reversed stack



    Approach 2 :  Recursion + Back Tracking 



*/

#include<iostream>
#include<vector>
using namespace std;



void insertAtBottom(stack<int>&s , int value){
    
    // Base case
    if(s.empty()){
        s.push(value);
        return;
    }

    int topElement = s.top();

    s.pop();

     insertAtBottom(s,value);

     s.push(topElement);







}


void recursionBacktrackingPattern(stack<int>&s){


    // Base case
    if(s.empty()){
        return;
    }

   int topElement  = s.top(); // catch the element

   s.pop() ;                        //  pop that element

   recursionBacktrackingPattern(s); // recursive call 


   insertAtBottom(s,topElement);


}

int main(){
  
    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    recursionBacktrackingPattern(s);

    
    // print the stack

    while(!s.empty()){
        cout << s.top() << endl;
        s.pop();
    }


    
}