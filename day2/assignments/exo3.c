#include <stdio.h>
# include <stdbool.h>
//exercice 3
int main()
{
    int   i =  8;
    int   j =  5;
    float x =  0.005f;
    float y = -0.01f;
    char  c = 'c';
    char  d = 'd';
    printf("%d\n",(3*i - 2*j)%(2*d - c));
    printf("%d\n",2*((i/5) + (4*(j-3))%(i + j - 2)));
    printf("%s\n",(i<=j)? "true" : "false");
    printf("%s\n",(j != 6)? "true" : "false");
    printf("%s\n",(c == 99)? "true" : "false");
    printf("%s\n",(5*(i + j) > 'c')? "true" : "false");
    printf("%s\n",((i > 0) && (j < 5))? "true" : "false");
    printf("%s\n",((i > 0) || (j < 5))? "true" : "false");
    return 0;
}