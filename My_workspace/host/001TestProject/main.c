#include<stdio.h>

int main(){

    char a1 = 'A';
    /* char a2 = 'p';
    char a3 = 'p';
    char a4 = 'l';
    char a5 = 'e';
    char a6 = ':'; */
    // char a7 = 'G';

    unsigned long long int address = (unsigned long long int)&a1;


    printf("Address of a1 is: %llu\n", address);
    /*printf("Address of a2 is: %p\n", (void*)&a2);
    printf("Address of a3 is: %p\n", (void*)&a3);
    printf("Address of a4 is: %p\n", (void*)&a4);
    printf("Address of a5 is: %p\n", (void*)&a5);
    printf("Address of a6 is: %p\n", (void*)&a6);*/
    // printf("Address of a7 is: %p\n", (void*)&a7);`
    return 0;
}
