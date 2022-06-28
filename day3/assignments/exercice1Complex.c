#include <stdio.h>
// exercice 1 

// the structure
typedef struct{
    float real;
    float imag;
}complex;


//prototypes
void add(complex z1, complex z2, complex *r);
void sub(complex z1, complex z2, complex *r);
void mul(complex z1, complex z2, complex *r);
void division(complex z1, complex z2, complex *r);
void saisie(complex *f);
void affichage(complex f);


int main() 
{
    int choice=0,n=0;
    complex z1,z2,r;
    saisie(&z1);
    affichage(z1);
    saisie(&z2);
    affichage(z2);
    printf("choose the number of operations to perform :");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("here's the operations ' menu :\n1-addition \n2-substraction \n3-multiplication \n4-division\nchoose an operation : \n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1 :
            add(z1,z2,&r);
            printf("the sum is :");
            affichage(r);
            break;
            case 2 :
            sub(z1,z2,&r);
            printf("the difference is :");
            affichage(r);
            break;
            case 3 :
            mul(z1,z2,&r);
            printf("the product is :");
            affichage(r);
            break;
            case 4 :
            division(z1,z2,&r);
            printf("the quotient is :");
            affichage(r);
            break;
            
        }
    }
    
    
    return 0;
};

//functions
void saisie(complex *z){
    printf("enter a complex number : \n");
    scanf("%f%f",&(z->real),&(z->imag));
}
void affichage(complex z){
    if(z.imag < 0)
        printf("%f%fi\n",z.real,z.imag);
    if(z.imag >= 0)
        printf(" %f+%fi\n",z.real,z.imag);        
}

void add(complex z1, complex z2, complex *r)
{
    r->real = z1.real + z2.real;
    r->imag = z1.imag + z2.imag;
}

void sub(complex z1, complex z2, complex *r)
{
    r->real = z1.real - z2.real;
    r->imag = z1.imag - z2.imag;
}

void mul(complex z1, complex z2, complex *r)
{
    r->real = z1.real * z2.real - z1.imag * z2.imag ;
    r->imag = z1.real * z2.imag + z1.imag * z2.real;
}

void division(complex z1, complex z2, complex *r)
{
    float c = z2.real*z2.real + z2.imag*z2.imag;
    if(c==0)
        printf("impossible");
    else
    {
        r->real = (z1.real * z2.real + z1.imag * z2.imag)/c;
        r->imag = (z2.real * z1.imag - z2.imag * z1.real)/c;
    }
}




