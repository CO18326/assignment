                                        /*Find the kth occurence of a even number*/

#include <stdio.h>
int find_even(int,int*);
int main ()
{int asd[10000],i,e;
i=0;
printf("Enter which even number you want:(e.g 1st or 2nd and so on...)");
scanf("%d",&e);                                              /* User enter the occurence suppose: 4 */
printf("Enter your sequence of which you want to search:(press space after every term, To terminate the sequence, press -1 and then press enter)\n");
do
{
scanf("%d",&asd[i]);i++;}while(asd[i-1]!=(-1));                       /* user enter the sequence suppose: 1 2 4 2 8 10 -1 */
find_even(e,asd);
return 0;}
int find_even(int t, int *c){
int n,sum=0,ans[1000];
for(n=0;*(c+n)!=-1;n++){if(*(c+n)!=0){if(*(c+n)%2==0){sum+=1;ans[sum]=*(c+n);}}}
if(sum>=t){                                                                              /* find_even find the 4th even number & returns its
                                                                                                 value which is n our case is 10 */
printf("%d occurence of even numbers is %d\n",t,ans[t]);}
if(sum<t){printf("There are no %d even numbers, maximum %d even numbers are available for search\n",t,sum);}
} 
