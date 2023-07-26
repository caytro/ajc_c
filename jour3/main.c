#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char nomExec[256];

void getDMY(char *chaine, int *d, int *m, int *y)
{
    char sub[6];
    strncpy(sub,chaine,2);
    sub[2]='\0';
    *d=atoi(sub);
    strncpy(sub,chaine+3,2);
    sub[2]='\0';
    *m=atoi(sub);
    strncpy(sub,chaine+6,4);
    sub[4]='\0';
    *y=atoi(sub);

}

int somme(int a, int b)
{
    return a+b;
}
int produit(int a, int b )
{
    return a*b;
}

int printUsage()
{
    printf("\nUsage : %s prénom nom jj/mm/aaaa\n",nomExec);
    return 1
}

int main(int argc, char *argv[])
{
    strcpy(nomExec,argv[0]);
    if(argc !=4)
    {
        return printUsage();
    }
    // char date[11]="05/01/1971";
    if (strlen(argv[3]) != 10)
    {
        return printUsage();
    }
    int d,m,y;
    getDMY(argv[3],&d, &m, &y);
    if ((d<1 || d>31 || m<1 || m>12 || y<1 || y>9999))
    {
        return printUsage();
    }
    printf("\nPrénom : %s\nNom : %s\n",argv[1],argv[2]);
    printf("\nJour : %d - Mois : %d - Année : %d\n", d,m,y);

    int (*pf)(int,int);

    pf=somme;
    printf("\nsomme(3,5) = %d\n",(*pf)(3,5));
    pf=produit;
    printf("\nproduit(3,5) = %d\n",(*pf)(3,5));


    return 0;
}
