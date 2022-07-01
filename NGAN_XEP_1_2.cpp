#include<bits/stdc++.h>
using namespace std;
int st[205], top = 0;

void ShowStack(stack <int> myStack){
    stack <int> temp(myStack);
    while(!empty(myStack)){
        cout << myStack.top() << " ";
        myStack.pop();
    }
    cout << endl;
}
main(){
    stack <int> myStack;
    string s;
    while(cin >> s){
        if(s == "push"){
            int x; cin >> x;
            myStack.push(x);
        } else if(s == "pop"){
            myStack.pop();
        } else ShowStack(myStack);
    }
}