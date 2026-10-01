class Solution {
public:
bool isValid(string x) {
    stack<char>s;
    for(int i=0;i<x.size();i++){
        if(!s.empty() and s.top()=='(' and x[i]==')')s.pop();
        else if(!s.empty() and s.top()=='[' and x[i]==']')s.pop();
        else if(!s.empty() and s.top()=='{' and x[i]=='}')s.pop();
        else s.push(x[i]);
    }
    return s.size()==0;
  }
};