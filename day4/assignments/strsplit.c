#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// le cas d'une chaine de caractere composée que de délimiteurs
void  strsplit(char* str,char delim)
{
    // fonction qui calcule le nombre de mots constituant la chaine 
    unsigned i =0,l = strlen(str),nbw = 0;
    while(i<l)
    {
        while(str[i]==delim)
        {
            i = i+1;
        }
        
        while(str[i] != delim)
        {
            i++;
        }
        nbw++;
        while(str[i]==delim)
        {
            i = i+1;
        }
    }
    // fonction qui crée un tableau où on stocke la taille de chaque mot
    unsigned T[nbw],m=0,j=0;
    i=0;
    {
        while(i<l)
        {
            while(str[i] == delim)
            {
                i++;

            }
            while(str[i]!=delim && i<l)
            {
                i = i+1;
                m++;
            }
            T[j]=m;
            m =0;
            j++;
            
        }
        
    }
    // fonction qui détermine le max des tailles des mots 
    unsigned max =T[0];
    i =0;
    for(i=0;i<j+1;i++)
    {
        if(T[i]>max)
        {
            max = T[i];
        }
    }
    // fonction qui crée un tableau contenant les mots
    char ** L = (char **)malloc(nbw *sizeof(char *));
    for(int n =0;n<nbw;n++)
    {
        L[n] = (char *)malloc(T[n]*sizeof(char));
    }
    unsigned k =0;
    i = 0;
    j =0;
    while(i<nbw)
    {
        
        while(j<T[i])
        {
            while(str[k] == delim)
            {
                k++;
            }
            while(str[k]!= delim && str[k] != '\0')
            {
                L[i][j] = str[k];
                k ++;
                j ++;
            }
        }
        j =0;
        i ++;
    }
    
    for(i=0;i<nbw;i++)
    {
        printf("\n");
        for(j=0;j<T[i];j++)
            printf("%c",L[i][j]);
    }
    return;
    
    
    
    
    
        
    
    

}


int main()
{
    char * test = "hello world";
    char delim = ' ';
    strsplit(test,delim);

    return 0;
}


