#include<bits/stdc++.h>
using namespace std;

int Processing(string s){
    stack <int> myStack;
    for(int i = s.length()-1; i >= 0; i--){
        if('0' <= s[i] && s[i] <= '9') {
            myStack.push(s[i]-'0');
        }
        else {
            int a = myStack.top(); myStack.pop();
            int b = myStack.top(); myStack.pop();
            if(s[i] == '+') {
                myStack.push(a + b);
            } else if(s[i] == '-'){
                myStack.push(a - b);
            } else if(s[i] == '*'){
                myStack.push(a * b);
            } else {
                myStack.push(a / b);
            }
        }
    }
    return myStack.top();
} 
main(){
    int t; cin >> t;
    cin.ignore();
    while(t--){
        string s; cin >> s;
        cout << Processing(s) << endl;
    }
}