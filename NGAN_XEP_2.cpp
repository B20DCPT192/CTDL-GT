#include<bits/stdc++.h>
using namespace std;

main(){
    int t; cin >> t;
    stack <int> myStack;

    while(t--){
        string s; cin >> s;
        if(s == "PUSH") {int x; cin >> x; myStack.push(x);}
        else if(myStack.size() > 0 && s == "POP") {myStack.pop();}
        else if(s == "PRINT"){
            if(myStack.empty() == true) cout << "NONE" << endl;
            else cout << myStack.top() << endl;
        }
    }
    return 0;
}