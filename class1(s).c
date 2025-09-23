#include <stdio.h>

int main(){
  //name of the array stores the address of the first element
  char arr[] = {'A','B','C','D','\0'};
  char str[] = "hello";
  // printf("%c",*(str+1));
  //?complicated version
  // for (int i = 0; arr[i] != '\0';i++){
  //   printf("%c",*(arr+i));
  // }
  //?easy version of printing strings 
  printf("%s\n",arr); //automatically runs a loop it also work for the str array
  printf("%s\n",arr+1);
  printf("%c\n",*arr+1); // it will work fine 
  printf("%c",*str+1); // it will not show e but will show i because of the ascii value

  //?taking string as input 
  char name[10]; //if you use limit and input greater that 10 it will still display but will lag a little 
  // scanf("%[^\n]s",&name); //it will work also with the & symbol //? we to get strings with spaces we need to [^/n] so the input exits only when enter is clicked
  // printf("%s",name);
  //? there is an another method for entering string using gets and puts
  //! however is highly not recommended to use in modern uses because it doesnt have a sense of boundary and will manipulate the data alaready present if the size of strings increase than the given bytes
  // gets(name);
  // puts(name); //! using it will throw a warning not recommended to use it 
  //? to solve this fgets was introduced

  // fgets(name,12,stdin); //? it will not show more than the max count of bytes given make sure to always give a little more that the variable amount
  // printf("%s",name);
  
  //!however this too have problems when more data are needed to be stored one by one because they read from the same input stream
  // char str1[5];
  // char str2[5];
  // fgets(str1,7,stdin);
  // fgets(str2,7,stdin);
  // printf("%s %s",str1,str2);

  //todo in the end most better option is to use the scanf with [^/n] 
  

  //?note string like char arr[] here the name arr stores the address of the first element or charecter
  //when doing this 
  char str[] = "satya";
  //and doing 
  char *str = "satya";
  //?both the str stores the pointer of the first letter s however the str[] is modifiable while *str is read only and cannot be changed
  
  char *str1 = "groot";
  char *str2 = "groot";
  //?here if you run if condition for str1==str2 it will be true coz this is stored in the rom part of the ram so the computer doesnt make duplicate variable with the same value because it will not be modified
 
  return 0;
}