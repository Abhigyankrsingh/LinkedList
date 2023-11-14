#include<bits/stdc++.h>

using namespace std;


struct Node{
    int data;
    Node* next;

    Node(int x){
        data = x;

        next = NULL;
    }

};


int searchin(Node* head, int x){
     int pos = 1;
    Node*curr = head;
    while(curr != NULL){
        if(curr->data == x){
            return pos;
        } else {
            pos++;

            curr = curr->next;
        }

      
    }
      return -1;
    
}


void printlist(Node* head){
    Node*curr = head;
       while(curr != NULL){
        cout << curr->data;
        curr = curr->next;
       }
}

int main(){

Node*head = new Node(1);

head->next = new Node(2);

head->next->next = new Node(4);


// printlist(head);

cout << searchin(head,2);
return 0;

}