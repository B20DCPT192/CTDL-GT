#include<bits/stdc++.h>
using namespace std;

int Processing(string s){
    stack <int> myStack;
    for(int i = 0; i < s.length(); i++){
        if('0' <= s[i] && s[i] <= '9') {
            myStack.push(s[i]-'0');
        }
        else {
            int a = myStack.top(); myStack.pop();
            int b = myStack.top(); myStack.pop();
            if(s[i] == '+') {
                myStack.push(b + a);
            } else if(s[i] == '-'){
                myStack.push(b - a);
            } else if(s[i] == '*'){
                myStack.push(b * a);
            } else {
                myStack.push(b / a);
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