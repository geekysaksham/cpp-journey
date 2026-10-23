class Solution {
  public:
    int priority(string op){
        if(op == "+" || op == "-") return 1;
        if(op == "*" || op == "/") return 2;
        else return 3;
    }
    int Operation(int x, int y, string op){
       if(op == "+") return x + y;
       else if(op == "-") return x - y;
       else if(op == "*") return x * y;
       else if(op == "/") return floor((double)x / y);
       else return pow(x,y);
    }
    int evaluateInfix(vector<string>& arr) {
        stack<int> numbers;
        stack<string> operators;
        for(string str : arr){
            if(str == "^") operators.push(str);
            else if(str == "+" || str == "-" || str == "/" || str == "*"){
                while(operators.size()>0 && priority(operators.top()) >= priority(str)){
                    int b = numbers.top();
                    numbers.pop();
                    int a = numbers.top();
                    numbers.pop();
                    numbers.push(Operation(a,b,operators.top()));
                    operators.pop();
                }
                operators.push(str);
            }
            else numbers.push(stoi(str));
        }
        while(operators.size()>0){
            int b = numbers.top();
            numbers.pop();
            int a = numbers.top();
            numbers.pop();
            numbers.push(Operation(a,b,operators.top()));
            operators.pop();
        }
        return numbers.top();
    }
};