/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2,cont=0,i,j; 
    
    printf("ingrese el primer numero: ");
    scanf("%d",&n1);
    
    printf("ingrese el segundo numero: ");
    scanf("%d",&n2);
    
    for(i=n1;i<=n2;i++) {
        cont=0;
        for(j=1;j<=n2;j++){
            if(i%j==0){
                cont++;
                
            }
        }
        if(cont==2){
            printf("%d ",i);
        }
    }
    
    
    
    
    
    
    return 0;
}
