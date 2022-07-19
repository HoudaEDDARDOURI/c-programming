#include <stdio.h>
void *my_memchr(const void *s, int c, unsigned n)
{
    unsigned char *p = (unsigned char*)s;
    unsigned char *isCharFind = NULL;
    while((s!= NULL) && (n--))
    {
        if( *p != (unsigned char)c )
        {
            p++;
        }
        else
        {
            isCharFind = p;
            break;
        }
    }
    return isCharFind;
}
int main()
{
    char s[] = "Aticleworld";
    
    //called own created memchr function
    char *ptr = my_memchr(s,'c',sizeof(s));
    if (ptr != NULL)
    {
        printf ("'c' found at position %d  \n", ptr-s+1);
        printf ("search character found:  %s\n", ptr);
    }
    else
    {
        printf ("search character not found\n");
    }
    return 0;
}
