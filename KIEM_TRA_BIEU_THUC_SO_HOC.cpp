#include<bits/stdc++.h>
using namespace std;

int kiemtra(string s){
    stack <int> st;
    int n = s.length(), i, j;
    for(i = 0; i < n; i++){
        if(s[i] == '(') st.push(i);
        else if(s[i] == ')'){
            j = st.top(); st.pop();
            if(i - j == 2) {
                //* Truong hop (b).
                //cout << i << " - " << j << " = " << i - j << endl;
                return 1;
            }
            else if(s[j+1] == '(' && s[i-1] == ')') {
                //* Truong hop ((a+b))
                //printf("s[%d] va s[%d]\n", j + 1, i - 1);
                return 1;
            }
        }
    } 
    return 0;
}
main(){
    int t; cin >> t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin, s);
        if(kiemtra(s)) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}