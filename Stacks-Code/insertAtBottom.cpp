
#include <iostream>
#include <stack>
using namespace std;


void optimalInsertAtBottom(stack<int>&s , int value){

    if(s.empty()==true){
        s.push(value);
        return;
    }
    
    int topElement = s.top(); // 50

    s.pop(); // 40,20,30,10

    optimalInsertAtBottom(s,value);

    s.push(topElement); // backtrack

}

int main()
{
    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    int value =  5;
optimalInsertAtBottom(s,5);

while(!s.empty()){
    cout << s.top() << endl;
    s.pop();
}

     
}