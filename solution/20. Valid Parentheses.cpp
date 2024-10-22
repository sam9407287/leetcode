class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;  // 用于存放左括号的栈
        for (char c : s) {
            if (c == '(' || c == '[' || c == '{') {
                // 遇到左括号时，将其压入栈中
                stk.push(c);
            } else {
                // 遇到右括号时，先检查栈是否为空
                if (stk.empty()) return false;
                
                char top = stk.top();
                stk.pop();  // 弹出栈顶元素进行匹配检查
                
                // 检查栈顶元素是否与当前的右括号匹配
                if ((c == ')' && top != '(') ||
                    (c == ']' && top != '[') ||
                    (c == '}' && top != '{')) {
                    return false;
                }
            }
        }
        // 最后检查栈是否为空，若为空则括号完全匹配
        return stk.empty();
    }
};
