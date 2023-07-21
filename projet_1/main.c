#include <stdio.h>
#include <limits.h>

/**
 * @brief main affiche mon nom
 * @return 0 si OK et 1 en cas de pb
 */

int main()
{
    int i=1;
    for(char c = 'A'; c <= 'z' ; c++){
        printf("%c = %d\n", c, c);
    }
    char *name = "Hello world";
    printf("Chaine : %s\n",name);
    printf("main : i = %d\n",i);
    {
        i=2;
        printf("block1 : i = %d\n",i);
        {
            int i=3;
            printf("block2 : i = %d\n",i);
            {
                printf("block3 : i = %d\n",i);
                int i=4;
                printf("block3 : i = %d\n",i);
            }
            printf("block2 : i = %d\n",i);
        }
        printf("block1 : i = %d\n",i);
    }
    printf("main : i = %d\n",i);

    printf("---------------------------\n");
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
    return 0;
}
