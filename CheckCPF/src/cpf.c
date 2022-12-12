#include <stdio.h>
#include <stdlib.h>

int main ()
{
    unsigned long int cpf, n, s;
    int k,dv,dv2;
    printf("digite o cpf:");
    scanf("%ld",&cpf);
    while(cpf!=0)
     {
       n=cpf;
       k=2;
       s=0;
       for(;n!=0;k++)
         {
	   s+=(n%10)*k;
	   n=n/10;
	 }
       dv=s%11;
       dv=11-dv;
       if(dv>=10) dv=0;
       n=cpf;
       k=3;
       s=dv*2;
       for(;n!=0;k++)
        {
	  s+=(n%10)*k;
	  n=n/10;
	}
       dv2=s%11;
       dv2=11-dv2;
       if(dv2>=10) dv2=0;
       printf("cpf=%ld - %d%d",cpf,dv,dv2);
       printf("\n digite 9 digitos do cpf:");
       scanf("%ld",&cpf);
     }

}
