 #include <stdio.h>
int main(){
    char str[] = "Hey";
//printf("%s\n",str+1);

// printf("%c",*str+1); //? ascii value of H is added by one

// scanf("%s",str); //? can be wriiten without & , %s storing address
// printf("%s",str); //? only give first string as output. scanf breaks on space and enter 

// scanf("%[^m]s",str); //? waits for m to break scanf
// scanf("%[^\n]s",str) //? scanf breaks at enter 

// gets(str); //?if space is defined and input data is more than the space then it overwrites the next space
// puts(str);//? buffer space manipulation


// char str1[5];
// fgets(str1,10,stdin); //? can print upto 9 character \0 is reserved already


char str3[5];
char str4[5];
fgets(str3,5,stdin);
// fgets(str3,5,stdin);
printf("%s ",str3);

//! *str stores in read only memory
//! str[] stores in stack memory

char str6[] = "a"; //? here str6 and str7 is not equal , as it stores address
char str7[] = "a"; //? *str6 = *str7(pointer) is equal , now it stores value



return 0;
} 
