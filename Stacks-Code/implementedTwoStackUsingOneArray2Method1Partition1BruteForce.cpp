#include<iostream>
using namespace std;

// you have one dynamic Array you need to implemented 2 stacks


// int array = [0,0,0,0,0,0,0] stack 1 = [0,0,0,0] stack 2 =[0,0,0] but there is catch this approach makes memory wastage

//Lets do this approach

class Stack{

    public : 
        int * arr ;
        int top1 ;
        int top2 ;
        int size ;

        Stack(int capacity){
            arr = new int[capacity];
            top1 = -1;
            top2 = capacity;
            size = capacity;
        }

        // push into stack 1
        void push1(int value){

            // i need to check wheter im have space to avaialable or no

            if(top1 >=floor(size/2)){
                cout << "Stack1 overflow cannot perform push operations";
            }
            else{
                // meaning stack top 1 < floor(size/2);
                top1++;
                arr[top1]=value;
            }
           

        }

        //  push into stack 2 
        void push2(int value){

            cout << "top2 " << top2 << endl;
            // check if u have space before inserting
            if(top2-1 <= floor(size/2)){
                cout << "Stack overflow cannot perform push operations" << endl;
            }
            else{
            // top2 > floor(size/2)
                top2--;
                arr[top2] = value;
            }

        }

        // pop from stack 1
        void pop1(){
            if(top1 == -1){
                cout << "Stack1 is empty cannot perform delete operations " << endl;
            }
            else{
                arr[top1] = 0;
                top1--;
            }
        }
        // pop from stack 2 

        void pop2(){
            if(top2== size){
            cout << "Stack2 is empty cannot perform delete operations " << endl;
            }
            else{
                arr[top2] = 0;
                top2++;
            }
        }

        // get size of stack 1 

        int getSize1(){
            return top1+1;
        }

        int getSize2(){
            return size - top2; 
        }

        int getTop1(){
            if(top1 == -1){
                cout << "Stack1 is empty cannot get top element to get you need to push least one element" ;
            }
            return arr[top1];
        }
        int getTop2(){
              if(top2 == size){
                cout << "Stack2 is empty cannot get top element to get you need to push least one element" ;
            }
            return arr[top2];
        }

        bool isStack1Empty(){
            if(top1 ==-1){
                return true;
            }
            return false;
        }

         bool isStack2Empty(){
            if(top2 == size){
                return true;
            }
            return false;
        }

        void print(){
            cout <<"Printing Stack1" << endl;
            for(int i=0; i<= floor(size/2) ;i++){
                cout << arr[i] << " ";
            }
            cout <<endl;
            cout <<"Printing Stack2" << endl;
             for(int i=size-1; i>floor(size/2);i--){
                cout << arr[i] << " ";
            }
            cout << endl;
        }
};

int main(){
Stack s(7);

s.print();
// s.pop1();
// s.pop2();
s.push1(10);
s.push1(20);
s.push1(30);
s.push1(40);
s.push2(100);
s.push2(110);
s.push2(120);
s.push2(130);
s.push1(50);


s.print();
// s.pop2();
// s.push2(120);
// s.push2(130);
// s.print();
// cout << s.getSize1()<<endl;
// cout << s.getSize2()<<endl;
// cout << s.isStack1Empty()<<endl;
// cout << s.isStack2Empty()<<endl;
// s.pop2();
// s.pop2();
// s.pop2();
// s.print();
// cout << s.isStack2Empty()<<endl;



/*
this solution is brute force trade-off Lets Understand

suppose stack 1 is of fixed 4 stack 2 is size 3 

stack 1 only need 2 elements but remaining 2 spaces are empty na 
stack 2 needs 5 elements but it can fit only 3 even though 2 blocks
is avaialable in stack 1  ti cannot use them bc they are s1 occuped 
 i want a approach where memory is not wasted
 so that anyone can use how many elements they want unless the array is full

*/

}

