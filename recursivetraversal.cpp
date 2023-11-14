#include<bits/stdc++.h>

using namespace std;



struct Node {

    int data;

    Node*next;

    Node(int x){
        data = x;

        next = NULL;
    }
};


void recur(Node* head){

   if(head == nullptr)
     return ;

     cout << head->data;

     recur(head->next);
      


}


int main(){

Node* head = new Node(1);
head->next = new Node(2);
head->next->next = new Node(2);
head->next->next->next = nullptr;


recur(head);

return 0;


}