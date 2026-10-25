#include<iostream>
#include<stack>

using namespace std;


class Stack{

    public : 
        int top ;
        int size;
        int * arr;

     Stack(int capacity){
        arr = new int[capacity];
        size = capacity; // overall size of the stack
         top = -1; // inital top position
     }

     // Push an element into stack
     void push(int value){
        // there can be edge case what if stack is full and ur trying to insert one more u should 
        // not be allowed to insert you should throw an error stack overflow
        if(top == size-1){
            cout << "Stack overflow cannot perfrom push operation";
        }
        else{
            top++;
            arr[top] = value;
        }
     }

     void pop(){

        // if there is no element only to pop stack is empty

        if(top == -1){
            cout << "Stack underflow no element to be poped";
        }
        else{
            arr[top] = 0;
            top--;
        }

     }


     bool isEmpty(){
        
        if(top == -1){
            return true; // stack is empty
        }
        else{
            return false;
        }
     }


     int getSize(){
        return top+1;
     }


     int getTop(){
        if(top ==-1){
            cout << "There is no element at top stack is empty";
            return 0;
        }
        else{
            return arr[top];
        }
     }


     void print(){
        cout << "Printing the stack " << endl;
        for(int i=0;i<size;i++){
            cout << arr[i] << " " ;
        }
        cout << endl;
     }
};

int main(){

    // creating a stack class ka instance s is an object now s has all methods
Stack s(5);
s.print();
s.push(10);
s.print();
s.push(20);
s.push(30);
s.push(40);
s.push(50);
s.print();
// s.push(60);
s.pop();
s.print();
cout << s.getTop() << endl;
cout << s.getSize() << endl;
cout << s.isEmpty() << endl;
s.pop();
s.pop();
s.pop();
s.pop();
s.print();
cout << s.isEmpty() << endl;
s.pop();

return 0;
}