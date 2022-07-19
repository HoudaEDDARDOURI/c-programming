#include <stdio.h>
 

char* al_strcpy(char* copie, const char* chaine)
{
    
    if (copie == NULL) {
        return NULL;
    }
 
    
    char *ptr = copie;
 
    
    while (*chaine != '\0')
    {
        *copie = *chaine;
        copie++;
        chaine++;
    }
    *copie = '\0';
 
    
    return ptr;
}
 

int main(void)
{
    char chaine[] = "Hello";
    char copie[1000];
 
    printf("%s\n", al_strcpy(copie, chaine));
 
    return 0;
}