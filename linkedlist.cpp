#include<bits/stdc++.h>

using namespace std;



struct Node {

    int data;

    Node* next;

    Node(int x){
       data = x;
       next = NULL;
        
    }
};



int main(){

Node* head = new Node(4);

Node*temp1 = new Node(2);

Node*temp2 = new Node(1);

cout << head->data << " " << temp1 -> data<<" "<< temp2->data;


}