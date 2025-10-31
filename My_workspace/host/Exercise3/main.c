/*
 * main.c
 *
 *  Created on: Oct 15, 2025
 *      Author: Sambhav.Jain
 */


#include<stdio.h>

int main(){
    char aplha;
    char num;
    char special_char;
    char char1;
    char char2;
    char char3;

    aplha = getchar();
    num = getchar();
    special_char = getchar();
    char1 = getchar();
    char2 = getchar();
    char3 = getchar();

    printf("ASCII codes : %d, %d, %d, %d, %d, %d",aplha,num,special_char,char1,char2,char3);
    return 0;
}
