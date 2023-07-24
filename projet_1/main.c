#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <stdlib.h>
#include <time.h>



/**
 * @brief main affiche mon nom
 * @return 0 si OK et 1 en cas de pb
 */

void tailleMemoire()
{
    printf("-- Taille mémoire --\n");
    printf("Un octet se compose de %d bits.\n", CHAR_BIT);
    printf("signed char : min = %d ; max = %d.\n", SCHAR_MIN, SCHAR_MAX);
    printf("unsigned char : min = 0 ; max = %u.\n", UCHAR_MAX);
    printf("short : min = %d ; max = %d.\n", SHRT_MIN, SHRT_MAX);
    printf("unsigned short : min = 0 ; max = %u.\n", USHRT_MAX);
    printf("int : min = %d ; max = %d.\n", INT_MIN, INT_MAX);
    printf("unsigned int : min = 0 ; max = %u.\n", UINT_MAX);
    printf("long : min = %ld ; max = %ld.\n", LONG_MIN, LONG_MAX);
    printf("unsigned long : min = 0 ; max = %lu.\n", ULONG_MAX);
    printf("long long : min = %lld ; max = %lld.\n", LLONG_MIN, LLONG_MAX);
    printf("unsigned long long : min = 0 ; max = %lld.\n", ULLONG_MAX);
    printf("unsigned double : min = 0 ; max = %lld.\n", ULLONG_MAX);
    printf("long long : min = %lld ; max = %lld.\n", LLONG_MIN, LLONG_MAX);
    printf("float : min = %e ; max = %e.\n", FLT_MIN, FLT_MAX);
    printf("double : min = %e ; max = %e.\n", DBL_MIN, DBL_MAX);
    printf("long double : min = %Le ; max = %Le.\n", LDBL_MIN, LDBL_MAX);

    printf("---------------------------\n");
}

float absolute(float x)
{
    return (x>=0?x:-x);
}

int main()
{
    tailleMemoire();
    long long puissance2[65];
    puissance2[0]=1;
    for (int i=1;i<65;i++)
    {
        puissance2[i]=puissance2[i-1]*2;
        printf("\n%d : %lld = %e\n",i,puissance2[i], (float)puissance2[i]);
    }


    return 0;
}
