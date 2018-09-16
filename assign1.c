                                                        /* Repeater checker */
#include <stdio.h>
int main ()
{int arr[4],i,n,k;
char ch[2];
printf("Enter three integer,I will return 1 if all are different & 0 if any two of them are same.\n");
for(i=0;i<=2;i++){
switch(i){
case 0:  { ch[0]='s';ch[1]='t'; break;}
case 1:  { ch[0]='n';ch[1]='d';break;}
case 2:  { ch[0]='r';ch[1]='d';break;}}
printf("Enter %d%s integer :",i+1,ch);
scanf("%d",&arr[i]);                                /*User enter three integers suppose 1,2,3*/
}
if(arr[0] != arr[1] &&arr[0] != arr[2] && arr[1] != arr[2] )
{printf("%d(all are different)\n" ,1);}               /*return 1 as all are different*/
else
{printf("%d(following are same:)\n" ,0);}
for(n=0;n<=2;n++){for(k=0;k!=n && k<=2; k++){if(arr[n]==arr[k]){printf("%d and %d terms are equal.\n",n+1,k+1);}}}
return 0;
}
