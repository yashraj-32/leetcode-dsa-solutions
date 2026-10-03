class MinStack {
public:
vector<int> v;
vector <int> min ;
    MinStack() {
        
        
    }
    
    void push(int value) {
        v.push_back(value);
        if(min.size() == 0){
            min.push_back(v[v.size()-1]);
            return;
        }

            if(v[v.size()-1] <= min[min.size()-1]){
                min.push_back(v[v.size()-1]);
            }
        
    }
    
    void pop() {
        if (v[v.size()-1] == min[min.size()-1])
            {
                min.pop_back();
            }

        v.pop_back();
        
        
    }
    
    int top() {
        return v[v.size()-1];
        
    }
    
    int getMin() {
        return min[min.size()-1];
        
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */