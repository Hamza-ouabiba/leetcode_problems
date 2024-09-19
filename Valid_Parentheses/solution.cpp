class Solution {
public:
    bool isCoresp(char c_stack,char c_str) {
        if(c_stack == '(' && c_str == ')') {
            return true;
        }
        if(c_stack == '[' && c_str == ']') {
            return true;
        }
        if(c_stack == '{' && c_str == '}') {
            return true;
        }
        return false;
    }
    bool isValid(string s) {
         stack<char> stack;
         stack.push(s[0]);
        for(int i=1;i<s.size();i++) {
            if(stack.size() > 0 && isCoresp(stack.top(),s[i])) {
                stack.pop();
            } else stack.push(s[i]);
        }

        return stack.empty();
    }
};