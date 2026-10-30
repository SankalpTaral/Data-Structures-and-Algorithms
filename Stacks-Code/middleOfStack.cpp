// Refer good notes Middle of stack notes


// Implementation here middle element depends on question if 2 middle elements check first they want or second they will be given



#include<iostream>
#include<stack>

using namespace std;
// function make sure to pass the input by reference
void bruteForceApproachingUsingTwoStacks(stack<int>&s){

    stack<int>s2; // dynamic u cannot defined manual size over here

    /*
    * Approach is simple
    * take size /2 = calc -> calc times  push elements to stack2 and then after pushing pop it
    * here now ur top will pointing to the middle node
    * so store that into result and then ur data should not be lost so
    * push back elements from stack2 into stack 1  and pop it down one by one 
    * ur data is preserved
    */


    int calc = s.size()/2;

    while(calc--){
        s2.push(s.top());
        s.pop();
    }
    // removing process
    // storing the result 
    int result = s.top();

    // putting back og data into stack1 
    while(!s2.empty()){
        s.push(s2.top());
        s2.pop();
    }

    cout << result << endl;

    cout << "Verify stack data is correct or no by size " << s.size() << endl;


  /*
  * Tc analysis :  0(n/2) loop to push elements into stack 2 + O(n/2) again retrive elements into stack1
  total: O(N)
  space : o(n/2)(im taking extra ) s2 + O(n) given input

  so what u need to do his optimise that extra space ur taking O(n/2)
  so optimal solution requires this complexity : O(n) only extra nothing 
  */

}


void recursionApproach(stack<int>&s, int &count , int middle){

    int ans ;
    // BASE CASE
    if(count==middle){
        ans = s.top();
        cout << "Middle Element in the stack is " << ans << endl;
        return;
    }
    int topElement = s.top();


    s.pop();

    count++;

    recursionApproach(s,count,middle);

    s.push(topElement);


        /*
     Tc : O(n) 
     Sc: O(n) + O(n) input _ recursive call
     */



}


int main(){
stack<int>s;
s.push(10);
s.push(20);
s.push(30);
s.push(40);
s.push(50);
s.push(60);
s.push(70);
s.push(80);


// [10,20,30,40,50] print the middle node

int count = 0;

int middle = s.size()/2;

recursionApproach(s,count,middle);


  
}