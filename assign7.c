                                   /*Check whether triangle can be form with given three sides or not*/

#include <stdio.h>
int main ()
{float arr[4];
int sum=0,t,s,f,i;
char as[2];
printf("Hello!I will help you to predict wether with the sides you are giving me you are able to make triangle or not.\n");
for(i=0;i<=2;i++){
if(i==0){as[0]='s'; as[1]='t';}
if(i==1){as[0]='n'; as[1]='d';}
if(i==2){as[0]='r'; as[1]='d';}
printf("Enter %d%s side:",i+1,as);
scanf("%f",&arr[i]);                                 /* User enter all the three sides ,suppose: 3,4,5 */
}
if(arr[0]+arr[1]>arr[2] && arr[0]+arr[2]>arr[1] && arr[1]+arr[2]>arr[0]){printf("1(It can form triangle.)\n");}
else{printf("0(It can't form triangle.)\n");}                        /* sum of two side is checked for each possible
                                                                        combination if it is found greater than third
                                                                        side each time triangle will formed,in our it 
                                                                        is too, so it will return 1 */
return 0;
}
