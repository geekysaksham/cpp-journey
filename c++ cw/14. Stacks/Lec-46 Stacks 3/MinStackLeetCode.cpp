//Method 2 Time and Space O(1)
class MinStack {
    stack<long long> st;
    long long min;
public:
    MinStack() {
        min = INT_MAX;
    }
    
    void push(int value) {
        if(st.size()==0){
            st.push(value);
            min = value;
        }
        else if(value < min){
            st.push(value + (value - min));
            min = value;
        }
        else st.push(value);
    }
    
    void pop() {
        if(st.top()<min){
            min = 2*min - st.top();
        }
        st.pop();
    }
    
    int top() {
        if(st.top()<min) return min;
        else return st.top();
    }
    
    int getMin() {
        return min;
    }
};


//Method 1 Space O(n)
// class MinStack {
//     stack<int> st;
//     stack<int> minSt;
// public:
//     MinStack() {
        
//     }
    
//     void push(int value) {
//         st.push(value);
//         if(minSt.size() == 0) minSt.push(value);
//         else if(value < minSt.top()) minSt.push(value);
//         else minSt.push(minSt.top());
//     }
    
//     void pop() {
//         st.pop();
//         minSt.pop();
//     }
    
//     int top() {
//         return st.top();
//     }
    
//     int getMin() {
//         return minSt.top();
//     }
// };