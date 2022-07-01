#include<bits/stdc++.h>
using namespace std;

bool kiemtra(string s){
    stack <char> myStack;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '(' || s[i] == '[' || s[i] == '{') myStack.push(s[i]);
        else {
            if(!myStack.empty() && s[i] == ')' && myStack.top() == '(') myStack.pop();
            else if(!myStack.empty() && s[i] == ']' && myStack.top() == '[') myStack.pop();
            else if(!myStack.empty() && s[i] == '}' && myStack.top() == '{') myStack.pop();
            else return false;
        }
    }
    return true;
}
main(){
    int t; cin >> t; cin.ignore();
    while(t--){
        string s; cin >> s;
        if(kiemtra(s)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}