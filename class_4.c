    //todo :- Struct

    

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct student{ //! by using typedef we did not need to write "struct student" everytime to call struct just using the name of the typedef like here its "Student"
    int roll_num;
    float perc;
    char section;
    char name[50];
} Student;

void modify (Student *s){
    s->section = 'B';  //? '->' is a arrow operator we can use instead of (*s)
}

void print(Student s){
    printf("%s \n",s.name);
    printf("%d \n",s.roll_num);
    printf("%f \n",s.perc);
    printf("%c \n",s.section);
}

int main(){

    Student s1;
    s1.perc = 90.2;
    s1.roll_num = 38;
    s1.section = 'A';
    strcpy(s1.name , "zeus");

    Student s2;
    s2.perc = 64.2;
    s2.roll_num = 23;
    s2.section = 'A';
    strcpy(s2.name , "adam");

    //? to use modify we need pointer to change cause the function is local 
   
    modify(s1);
    print(s1);
    print(s2);
    

    //! by using pointer and storing in dynamic memory

    Student *p = (Student*)malloc(sizeof(Student));
    strcpy(p->name, "shiva");
    p->perc = 45.6;
    p->roll_num = 44;
    p->section = 'A';
    modify(p);
    print(*p);
    
    
 //! to input multiple data from user we can use arrays 
 
    
  

    return 0 ;
}