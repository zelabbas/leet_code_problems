#include<iostream>
#include<string>
#include<stack>
using namespace std;






// using stack
class Solution {
    public:
        bool isValid(string s) {
            
           stack<char> stack;
           
           for(char c: s) {
                if (c == '(' || c == '{' || c == '[')
                    stack.push(c);
                else {
                    if (stack.empty())
                        return false; // No opening bracket for the closing one
                        char top = stack.top();
                        stack.pop();
                        if ((c == ')' && top != '(') || 
                            (c == '}' && top != '{') || 
                            (c == ']' && top != '[')) {
                            return false; // Mismatched brackets
                        }
                    }
                }

                return stack.empty(); // If stack is empty, all brackets are matched
           }
};


// test

int main() {
    Solution solution;
    string input = "[(])"; // Example input
    bool result = solution.isValid(input);
    
    if (result) {
        cout << "The string is a valid parentheses sequence." << endl;
    } else {
        cout << "The string is NOT a valid parentheses sequence." << endl;
    }
    
    return 0;
}