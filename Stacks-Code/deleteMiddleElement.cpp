
#include<iostream>
#include<stack>
using namespace std;


// Simple Approach Using an extra stack
  void deleteMid(stack<int>& s) {
        // code here
        stack<int>s2;
        
        int calc = s.size() / 2;
        
        
        // 10,20,30,40,50 calc-> 2 pop 2 times
        
        
        
        while(calc--){
            s2.push(s.top());
            s.pop();
        }
        
        // here ur current top will be pointing to middle element
        
       // here we need to delete that element
       s.pop(); // pop that middle element also u can also do in loop itself calc+1
       
       // retrive all elements from s2 to s1
       
       while(!s2.empty()){
           s.push(s2.top());
           s2.pop();
       }
       
        
    }


// Recursive Approach

void deleteMid(stack<int>&s, int count , int middle){

    if(count == middle){
        // then ur top is at middle node 
        // delete it 
        cout << "Deleting the middle element->  " << s.top() << endl; 
        s.pop();
        return;
    }

    int topElement = s.top();

    s.pop();

    count++;

    deleteMid(s,count,middle);

    s.push(topElement); // to preserve og stack
}


int main(){
    
    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    int count = 0;
    int middle = s.size()/2;

    deleteMid(s,count,middle);

    // delete a middle stack
    // i.p -> 50,40,30,20,10
    // o.p 50,40,20,10 middle 30 is deleted
    
}