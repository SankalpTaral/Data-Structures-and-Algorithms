
/*
 Problem : Two Stacks in Array GFG
 Optimised Method where memory we can use efficently instead of partiton method.
 Refer Problem statement and test cases : 
 https://www.geeksforgeeks.org/problems/implement-two-stacks-in-an-array/1


*/

class twoStacks {
    int arr[100];
    int size = 100;
    int top1, top2;

  public:
    twoStacks() {
        // Initialize the top pointers of both stacks
        top1 = -1;
        top2 = size;
        
    }

    void push1(int x) {
        // Insert the given element at the top of the first stack
        
        top1+=1;
        if(top1 >= top2){
            top1--;
            return;
        }
        else{
            arr[top1] = x;
        }
        
        
    }

    void push2(int x) {
        // Insert the given element at the top of the second stack
        top2--;
        if(top2 <=top1){
            
            top2++;
            return;
        }
        arr[top2] = x;
    }

    int pop1() {
        // Remove and return the top element of the first stack
        // Return -1 if the stack is empty
        
        if(top1 ==-1){
            return -1;
        }
        
        int value = arr[top1];
        
        arr[top1] = 0;
        
        top1-=1;
        
        return value;
        
    }

    int pop2() {
        // Remove and return the top element of the second stack
        // Return -1 if the stack is empty
        
        if(top2 == size){
            return -1;
        }
        else{
            
            int value = arr[top2];
            
            arr[top2] = 0;
            
            top2+=1;
            
            return value;
        }
        
    }
};



