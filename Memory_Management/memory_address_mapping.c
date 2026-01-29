#include <stdio.h>
/*
Pointer => A "variable-like" reference that holds a memory address to another variable, array, etc.
some tasks are performed more easily with pointers
* => indirection operator (value at address)
*/
void printAge(int age){
    printf("\nYou are %d years old.",age);
}
void printPointer(int *pointer_of_age){
    printf("\n\nThe pointer of the age is %d",*pointer_of_age);
}
int main(){
int age = 19;
int *pointer_of_age = NULL;  // We have to add a '*' before the pointer's (variable) name.
pointer_of_age = &age;
printf("\n\nThe address of age is %p",&age);
printf("\n\nTher pinter's valu (which is the holding the address) is %p",pointer_of_age);
printf("\n\nAnd the value at %p address is %d",pointer_of_age,*pointer_of_age);
printf("\n\nThe size of age variable is %lu bytes,\n\nand the size of it's addres is %lu bytes",sizeof(age),sizeof(pointer_of_age));
if (pointer_of_age == &age){
    printf("\n\nThe pointer has successfuly hold the address of the 'age' variable.\n");
}
else{
    printf("There is something wrong in this program.");
}
printAge(age);
printPointer(pointer_of_age);
    return 0;
}