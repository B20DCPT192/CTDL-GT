#include<bits/stdc++.h>
using namespace std;

struct Node{
    int heso, mu;
    Node *next;
};
void show(Node *dt){
    Node *p = dt;
    while(p != NULL){
        cout << p->heso << "*x^" << p->mu;
        p = p->next;
        if(p != NULL) cout << " + ";
        else break;
    }
}
void add_node(int hs, int m, Node *&start){
    Node *temp = new Node;
    temp->heso = hs; temp->mu = m; temp->next = NULL;
    if(start == NULL) start = temp;
    else {
        Node *p = start;
        while(p->next != NULL) p = p->next;
        p->next = temp;
    }
}
void tao_dathuc(char s[], Node *&start){
    int h, m;
    char *p = strtok(s, "*x^+ ");
    while(p != NULL){
        h = atoi(p); p = strtok(NULL, "*x^+ ");
        m = atoi(p); p = strtok(NULL, "*x^+ ");
        add_node(h, m, start);
    }
}
void cong(char a[], char b[]){
    Node *P = NULL, *Q = NULL, *R = NULL;
    tao_dathuc(a, P);
    tao_dathuc(b, Q);

    while(P != NULL && Q != NULL){
        if(P->mu > Q->mu){
            add_node(P->heso, P->mu, R);
            P = P->next;
        } else if(P->mu < Q->mu){
            add_node(Q->heso, Q->mu, R);
            Q = Q->next;
        } else {
            add_node(P->heso + Q->heso, P->mu, R);
            P = P->next; Q = Q->next;
        }
    }
    while(P != NULL){
        add_node(P->heso, P->mu, R);
        P = P->next;
    }
    while(Q != NULL){
        add_node(Q->heso, Q->mu, R);
        Q = Q->next;
    }
    show(R);
}
main(){
    int t; cin >> t;
    while(t--){
        char a[10005], b[10005];
        cin.getline(a, sizeof(a));
        cin.getline(b, sizeof(b));
        cong(a, b);
        cout << endl;
    }
}

