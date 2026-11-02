#include <iostream>
#include <stack>
using namespace std;


// Checked Sorted Stack if sorted in ascending order then true else false
// make sure after operation u preserve orginal stack!
void checkSortedStack(stack<int> &s)
{

    // Step1 Create another stack
    stack<int> s2;

    // Step2 okay try inserting the element into stack
    //  before hand only ill push

    if (s.empty())
    {
        cout << "Return the stack is empty itself" << endl;
        return;
    }

    s2.push(s.top());
    s.pop();

    while (!s.empty())
    {

        if (s.top() > s2.top())
        {
            cout << "False Stack is not in sorted order " << endl;

            // make sure u preserve the orginal stack
            while (!s2.empty())
            {
                s.push(s2.top());
                s2.pop();
            }
            return;
        }
        // else means ur allowed to insert
        s2.push(s.top());
        s.pop();
    }
    cout << " True Stack is  in sorted order " << endl;

    // Preserve the orginal stack put back all elements after getting answer

    while (!s2.empty())
    {
        s.push(s2.top());
        s2.pop();
    }

    // Just Tc of An Algorithm

    /*
    Tc : O(N) -> just going towards till s is empty 
    Sc : O(N) -> using an extra stack!
    */
}




int main()
{

    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(400);
    s.push(50);

    checkSortedStack(s);

    // just to verify the print the stack is og order 
    while (!s.empty())
    {
        cout << s.top() << endl;
        s.pop();
    }
}