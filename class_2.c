#include <stdio.h>
#include <stdlib.h>
int main(){

    //*   DYNAMIC MEMORY ALLOCATION

    malloc(4); //? allocate 4 byte memory and returns a void pointer 
    int* p = (int*)malloc(4) //? changed to int type pointer
    //! 'p' is address of the pointer '*p' gives the value at p

    int* p = (int*)malloc(sizeof(int));
    int* q = (int*)malloc(sizeof(int));
    *p = 10;
    *q = 5;
   printf("%d", *p + *q);

   
//! malloc stores garbage value if value is not specified  
   int* arr = (int*)malloc(sizeof(int)*5); //? dynamic array is created 
   //? 5 int type can be stored in this dynamic array

//! calloc is generally for arrays , as it replace garbage value to 0 ;
int* arr = (int*)calloc(sizeof(int),5);



    //* TIME COMPLEXITY

    //! If seperate loops  --> time complexity adds up
    //! If nested loops  --> time complexity multiply
    //! If constant number of instruction executed independent of input --> time complexity O(constant)
    //! If problem size increasing / decreasing by a factor K then --> time complexity is log(N) base k
    //! If a number of constant value is added or multiplied  --> TC does not change
    //! Always pick the major TC in case of higher or lower are added [O(n^2)+ O(n) = O(n^2)]
    //? O(constant) = 0(1)

    //! Important Time Complexity
    //? Binary search --> log(N)
    //? Merge sort --> Nlog(N)
    //? Quick sort --> Nlog(N)
    //? Heap sort --> Nlog(N)
    //? BUbble sort --> N^2
    //? insertion sort --> N^2
    //? selection  sort --> N^2
    


    return 0;
}