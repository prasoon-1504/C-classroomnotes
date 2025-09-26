//todo -->  Linked List
//? link list allocate memoery in random order but arrays allocate memory in straight line
//? cannot use index to find next element
//? every element stores the address of next element except for last one
//? every element has a pointer byte to store the address of next element(including its pointer byte) , last elemnt stores the null pointer
//? need to create a node which store data and pointer(address of next node)

#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node* next;
    
}Node;


int main(){

    //! Node creation
    Node* n1 = (Node*)malloc(sizeof(Node));  //node created using dynamic memory
    Node* n2 = (Node*)malloc(sizeof(Node));  //next node created at random location
    Node* n3 = (Node*)malloc(sizeof(Node));  //next node created at random location
    
    //! data insertion and address allocation
    n1->data = 10 ;  // inserting data in a node using arrow operator
    n1->next = n2; // inserting address of the node n2 in pointer byte

    n2->data = 20 ;  
    n2->next = n3; // inserting address of the node n3 in pointer byte

    n3->data = 25;
    n3->next = NULL ;  // last node so no address allocated

    //! printing linked list
    Node *p = n1; // p and n1 points the same data
    // printf("%d\n",p->data);
    // p = p->next;

    // p = n2; 
    // printf("%d\n",p->data);
    // p = p->next;

    // p = n3; 
    // printf("%d\n",p->data);
    // p = p->next;

    //! using while loop

    while (p!=NULL)
    {
        printf("%d ",p->data);
        p = p->next;
    }


//! data insertion
//? we can insert data in linked list in two ways from head or from last element

    
    return 0;     
}
