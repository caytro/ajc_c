#include <stdio.h>
#include <limits.h>
#include <float.h>

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
    printf("unsigned double : min = 0 ; max = %lld.\n", ULLONG_MAX);
    printf("long long : min = %lld ; max = %lld.\n", LLONG_MIN, LLONG_MAX);
    printf("float : min = %e ; max = %e.\n", FLT_MIN, FLT_MAX);
    printf("double : min = %e ; max = %e.\n", DBL_MIN, DBL_MAX);
    printf("long double : min = %Le ; max = %Le.\n", LDBL_MIN, LDBL_MAX);

    printf("---------------------------\n");

    int j = 3.7 + 2.3;
    printf ("j = %d\n",j);

    printf("3/2 = %d\n", 3/2);
    printf("3/2 = %f\n", 3.0/2.0);
    printf("3/2 = %f\n", 3.0/2.0);



    for (char d='a'; d<= 'z' ;printf("%c\n",d++));

    int a=3;
    int b=4;
    printf ("a=%d\n",a);
    printf ("b=%d\n",b);
    if (a=b) printf("a=b est vrai\n"); else printf ("a=b est faux\n");
    printf ("a=%d\n",a);
    printf ("b=%d\n",b);
    if (a==b) printf("a==b est vrai\n"); else printf ("a==b est faux\n");
    a=3;
    b=4;
    printf ("a=%d\n",a);
    printf ("b=%d\n",b);
    if (a==b) printf("a==b est vrai\n"); else printf ("a==b est faux\n");

    printf("------------------------\n");

    a = 8;
    b=5;
    printf("a=%d et b=%d\n", a, b);
    if (a & b) printf ("a&b vrai \n"); else printf("a&b faux\n");
    if (a && b) printf ("a&&b vrai \n"); else printf("a&&b faux\n");

    printf("------------------------\n");

    printf("a & b : %s\n", (a & b ? "vrai" : "faux"));
    printf("a && b : %s\n", (a && b ? "vrai" : "faux"));

    printf("--------------------------------\n");

    b=((a=2), (a*14));
    printf("3,14 =%d\n",b);
    printf ("adresse de b : %p\n",&b);

    printf("--------------------------------\n");

    int ii = 23674; int ji = -23674;
    //long int k = (1l << 32);
    double x = 1e-8 + 1000;
    char c = 'A';
    char *chaine = "chaine de caracteres";
    printf("impression de i: \n");
    printf("%d \t %u \t %o \t %x",ii,ii,ii,ii);
    printf("\nimpression de j: \n");
    printf("%d \t %u \t %o \t %x",ji,ji,ji,ji);
    printf("\n%.2f \t %.2e",x,x);
    printf("\n%.20f \t %.20e",x,x);
    printf("\nimpression de c: \n");
    printf("%c \t %d",c,c);
    printf("\nimpression de chaine: %s\t %.10s \n",chaine,chaine);
    return 0;
}
