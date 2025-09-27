#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
    struct Node* next;
}Node;

Node* AddFirst(Node* head , int value){
    Node* n = (Node*)malloc(sizeof(Node));
    n->data = value;
    n->next = head;
    head = n;

    return head;
    
}
Node* AddLast(Node* head , int value){
    Node* n = (Node*)malloc(sizeof(Node));
    n->data = value;
    n->next = NULL;
    

    if (head == NULL){
        return n;
    }

    Node* p = head;
    while(p->next != NULL){
        p = p->next;

    }
    p->next = n;
    return head;
    
}



void print(Node* head){
    Node* p = head;
    while(p != NULL){
        printf("%d\n",p->data);
        p = p->next;
    }

}

int main(){
    Node* head = NULL;
 
    for(int i = 0 ; i<=5 ; i++){
        head = AddFirst(head , i);
    }
    for(int i = 0 ; i<=5 ; i++){
        head = AddLast(head , i+10);
    }


    
    Node* p = head ; 
    print(head);




    return 0;
}