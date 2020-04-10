/*
Design a stack that supports push, pop, top, and retrieving the minimum element in constant time.

push(x) – Push element x onto stack.
pop() – Removes the element on top of the stack.
top() – Get the top element.
getMin() – Retrieve the minimum element in the stack.
Note that all the operations have to be constant time operations.

Questions to ask the interviewer :

Q: What should getMin() do on empty stack? 
A: In this case, return -1.

Q: What should pop do on empty stack? 
A: In this case, nothing. 

Q: What should top() do on empty stack?
A: In this case, return -1

https://www.interviewbit.com/problems/min-stack/
*/

vector<int> v;
int min1;

MinStack::MinStack() {
    myStack.clear(); 
    flag = false;
    minEle = INT_MAX;
}

void MinStack::push(int x) {
    v.push_back(x);
        if(x<min1){
            min1=x;
        }
}

void MinStack::pop() {
  if(v.back()==min1){
            v.pop_back();
            min1=*min_element(v.begin(),v.end());
        }
        else
        {
            v.pop_back();
        }
        
}

int MinStack::top() {
   return v.back();
}   

int MinStack::getMin() {
    return min1
}
