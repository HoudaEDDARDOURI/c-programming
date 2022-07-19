#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 

char* al_strcat(char* destination, const char* source)
{
    
    char* chaine = destination + strlen(destination);
 
    
    while (*source != '\0') {
        *chaine++ = *source++;
    }
 
    
    *chaine = '\0';
 
    
    return destination;
}
 

int main()
{
    char* str = (char*)calloc(100, 1);
 
    al_strcat(str, "Hello ");
    al_strcat(str, "World ");
 
    puts(str);
 
    return 0;
}