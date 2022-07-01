#include<bits/stdc++.h>
using namespace std;
int st[205], top = 0;

main(){
    string s;
    while(cin >> s){
        if(s == "push"){
            int x; cin >> x;
            st[++top] = x;
        } else if(s == "pop"){
            if(top > 0) top--; 
        } else {
            if(top > 0){
                for(int i = 1; i <= top; i++) cout << st[i] << " ";
                cout << endl;
            } else cout << "empty" << endl;
        }
    }
}