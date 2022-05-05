// https://leetcode.com/problems/implement-stack-using-queues/
// Using only one queue

class MyStack {
    public:
    
    queue<int>st; 
    
    MyStack() {
        
    }
    
    void push(int x) {
        
           st.push(x);
        
           for(int i=0; i<st.size()-1; i++)
           {
               st.push(pop());
               
           }
    }
    
    int pop() {
        
        int t= top();
        st.pop();
        return t;
    }
    
    int top() {
        return st.front();
    }
    
    bool empty() {
        return st.empty();
    }
};
