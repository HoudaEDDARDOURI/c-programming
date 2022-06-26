//exercice 2
int main()
{
    int a,b,c;
    printf("donner deux entiers a et b :");
    scanf("%d%d",&a,&b);
    printf("la valeur de a = %d et la valeur de b = %d\n",a,b);
    c = a;
    a = b;
    b = c ;
    printf("la nouvelle valeur de a = %d \nla nouvelle valeur de b = %d",a,b);
    return 0;
}
