class Solution {
public:
    
string removeKdigits(string s, int k) {
    int n = s.length();
    stack<char> stack;

    stack.push(s[0]);

    for (int i = 1; i < n; i++) {
        char ch = s[i];

        if (stack.empty() || stack.top() <= ch) {
            stack.push(ch);
        } else {
            while (k > 0 && !stack.empty() && stack.top() > ch) {
                stack.pop();
                k--;
            }
            stack.push(ch);
        }
    }

    while (k-- > 0 && !stack.empty()) {
        stack.pop();
    }

    if (stack.empty()) {
        return "0";
    }

    string result;
    while (!stack.empty()) {
        result += stack.top();
        stack.pop();
    }

    reverse(result.begin(), result.end());

    if (result.length() == 1 && result == "0") {
        return "0";
    }

    while (result.length() > 1 && result[0] == '0') {
        result.erase(result.begin());
    }

    return result;
}
};
