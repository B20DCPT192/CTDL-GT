#include<bits/stdc++.h>
using namespace std;

int a[100] = {0};
vector <string> myVector;

bool check(string ans){
    for(int i = 0; i < myVector.size(); i++){
        if(ans == myVector[i]) return false;
    }
    return true;
}
void xuat(int a[], int k){
    for(int i = 1; i <= k; i++){
        cout << myVector[a[i]] << " ";
    }
    cout << endl;
}
void SinhTH(int i, int a[], int n, int k){
    for(int j = a[i-1] + 1; j <= n - k + i; j++){
        a[i] = j;
        if(i == k) xuat(a, k);
        else SinhTH(i+1, a, n , k);
    }
}
int main(){
    int n, k;
    cin >> n >> k;

    myVector.push_back("Temp");

    for(int i = 0; i < n; i++){
        string s; cin >> s;
        if(check(s)) myVector.push_back(s);
    }

    n = myVector.size()-1;

    sort(myVector.begin()+1, myVector.end());

    SinhTH(1, a, n, k);

    return 0;
}