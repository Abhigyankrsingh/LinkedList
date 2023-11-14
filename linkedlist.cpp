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





int main(){
   Node*head = new Node(10);

   Node*temp1 = new Node(12);

   Node*temp2 = new Node(4);
    

    head ->next = temp1;

    temp1->next = temp2;

    cout<<head ->data<< "-> " << temp1->data<< "->"<< temp2->data;


}