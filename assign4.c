                                               /*Chack whether numbers are multiple of each oher or not*/

#include <stdio.h>
int main ()
{int i,j,c;
printf("Give me two integers, I will give 1 if any of it is multiple of athor and their quitient if they are not multiple of it.\n");
printf("Enter the first integer:");
scanf("%d",&i);                                            /* Recieves input from the User supposing: 1 and 2 */
printf("Enter the second integer:");
scanf("%d",&j);
if(j>i){c=i;i=j;j=c;}
if(i%j==0){printf("%d is multiple of %d ,so I will return 1\n",i,j);}         /* If it is multiple, it will return 1 
                                                                                  in our case it will return 1*/
else{
float f=i,g=j;
printf("%0.0f is not multiple of %0.0f so their quitient is %0.2f\n",f,g,f/g);}     /* If it is not a multiple it will return quitient */
return 0;
}
