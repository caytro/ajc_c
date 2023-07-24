#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "mesConst.h"




/**
 * @brief Exercice
 * @return 0 si OK et 1 en cas de pb
 */

int max(int n1, int n2){
    return (n1>=n2 ? n1 :n2);
}

int min(int n1, int n2){
    return (n1<=n2 ? n1 :n2);
}

int ascii(char c){
    return (int)c;
}

unsigned char Char(int i){
    return ((unsigned char)i);
}

char* premmajuscule(char *chaine){
    if (chaine[0]>='a' && chaine[0]<'z') chaine[0]-=32;
    return chaine;
}

char* majuscule(char *chaine){
    for (unsigned long i =0;i<strlen(chaine);i++){
        if (chaine[i]>='a' && chaine[i]<'z') chaine[i]-=32;
    }
    return chaine;
}

char* minuscule(char *chaine){
    for (unsigned long i =0;i<strlen(chaine);i++){
        if (chaine[i]>='A' && chaine[i]<'Z') chaine[i]+=32;
    }
    return chaine;
}
int main()
{
    int tmp;

    printf("\nmin(10,9)=%d\n", min(10,9));
    printf("\nascii('a')=%d", ascii('a'));
    printf("\nChar(512+97)='%c'", Char(512+97));
    char chaine[50]="bonjour";
    printf("\npremmajuscule(bonjour) : %s",premmajuscule(chaine));
    strcpy(chaine,"bonjour tout le monde 786");
    printf("\nmajuscule(%s) : %s","bonjour tout le monde 786",majuscule(chaine));
    strcpy(chaine,"BONJOUR TOUT le MONDE 786");
    printf("\nminuscule(%s) : %s","BONJOUR TOUT le MONDE 786",minuscule(chaine));
    printf("\n");
    PRINT_MY_NAME;
    return 0;
}
