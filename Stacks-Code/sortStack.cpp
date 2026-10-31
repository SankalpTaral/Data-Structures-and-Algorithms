// in ascending Order

#include <iostream>
#include <stack>
using namespace std;


/*
* Iterative Approach 2 Approaches 
* Take out elements into an array then sort the array and put back into stack
* Second Approach :  Using an Extra Stack! Reshuffling technique
 */
void usingExtraStackApp(stack<int> &s)
{

//Create a  Stack s2
  stack<int>s2;

  while(!s.empty()){

    int temp = s.top();

    s.pop();

    if(!s2.empty()){
        // if stack is not empty u need to check
        // verify that inserting element is bigger than s2element 
        // else reshuffle it until u find correct 

        while(!s2.empty() && s2.top() > temp){
            int temp2 = s2.top();
            s2.pop();
            s.push(temp2);
        }
        s2.push(temp);
    }
    // stack is empty direct push
    else{
        s2.push(temp);
    }
  }


  // just to verify it the elements are in correct order or no  for printing purpose
    while(!s2.empty()){
    cout << s2.top() << endl; 
    s2.pop();
    }


    /*
    Tc O(N)-> outer while loop * O(N) inner while loop = O(N^2)
    SC : O(N)-> creating a new stack

    */
}

int main()
{
    stack<int> s;
    s.push(7);
   
    
    usingExtraStackApp(s);

  
}