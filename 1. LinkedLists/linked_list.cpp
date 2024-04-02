#include<iostream>
#include<stdlib.h>

struct Node {
    int data;
    Node *next; //! node pointer named next
};

Node *head;

void Insert(int data, int n)
{
    Node *temp1 = new Node();
    temp1->data = data;
    temp1->next = NULL;
    if(n == 1){
        temp1->next = head;
        head = temp1;
        return;
    }
    Node *temp2 = head;
    for(int i = 0; i < n-2; i++){
        temp2 = temp2->next;
    }
    temp1->next = temp2->next;
    temp2->next = temp1;
}

void Print(){
    Node *temp = head;
    while(temp != NULL){
        std::cout << temp->data << " ";
        temp = temp->next;
    }
    std::cout << std::endl;
}

int main(){
    head = NULL;
    Insert(2,1);
    Print();
    Insert(3,2);
    Print();
    Insert(4,3);
    Print();
    Insert(5,4);
    Print();
    return 0;
};