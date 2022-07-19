void str_reverse(char* chaine)
{
    int i;
    int j = 0;
    while(chaine[j] != '\0') 
    
     j++;
    for(i = 0; i < j/2; i++)
    {
        char chaine1 = chaine[i];
        chaine[i] = chaine[j-i-1];
        chaine[j-i-1] = chaine1;
    }
}