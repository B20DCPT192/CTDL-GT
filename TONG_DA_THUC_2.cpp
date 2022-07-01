#include<bits/stdc++.h>
using namespace std;

main(){
    int t; cin >> t; cin.ignore();
    while(t--){
        string s1, s2;
        getline(cin, s1);
        getline(cin, s2);
        
        for(int i = 0; i < s1.size(); i++) if(isdigit(s1[i]) == false) s1[i] = ' ';
        for(int i = 0; i < s2.size(); i++) if(isdigit(s2[i]) == false) s2[i] = ' ';
        
        vector <int> myVector;
        stringstream ss1(s1); int number1;
        while(ss1 >> number1) {myVector.push_back(number1);}
        stringstream ss2(s2); int number2;
        while(ss2 >> number2) {myVector.push_back(number2);}

        map <int, int> myMap;
        for(int i = 0; i < myVector.size() - 1; i = i + 2){
            myMap[myVector[i+1]] = myMap[myVector[i+1]] + myVector[i];
        }

        vector <pair<int, int>> myAnswer;
        reverse_copy(myMap.begin(), myMap.end(), back_inserter(myAnswer));

        for(int i = 0; i < myAnswer.size(); i++){
            cout << myAnswer[i].second << "*x^" << myAnswer[i].first;
            if(i < myAnswer.size()-1) cout << " + ";
        }
        cout << endl;
    }   
}