# include <stdio.h>
# include <stdlib.h>

void main(){
    int my_int = 123;

    int *my_address = &my_int;
    int value_stored = *my_address;
    
    printf("My int is %i, on location %p \n", my_int, &my_int);
    printf("My value is %i, on location %p \n", value_stored, &value_stored);
    printf("My address is %i, on location %p \n", *my_address, *my_address);

    *my_address = 456;
    printf("My int is %i, on location %p \n", my_int, &my_int);
}