#include<bits/stdc++.h>

using namespace std;




struct Node
{
    /* data */

    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};


Node *insertbeg(Node* head, int x){

   Node* temp = new Node(x);

   temp->next = head;
   return temp;

}

void printList(Node*head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}



int main(){
 Node*head = NULL;

head = insertbeg(head, 12);
head = insertbeg(head, 2);
head = insertbeg(head, 4);
  cout << "Linked List: ";
    printList(head);
return 0;

}