                                                    /*Check the validity of ipv4 address*/

#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>
int main ()
{int i,s,sum=0,tot=0,were=0,ans[4],t,num=0,set=0;
char arr[500];
printf("Enter any valid IPv4 adress:\v");
printf("(Of form X.X.X.X ,where(.) is called station and X is called octant lies between 0 to 255.)\n");
scanf("%s",arr);                                             /* Input enter by user suppose it is: 12.34.56.108 */
for(i=0;arr[i]!=0;i++){
if(isdigit(arr[i])==0 && arr[i]!='.'){printf("Error:There is an unaccepted character!\n");set+=1;break;}
if(i>=1){if(arr[i]=='.'){s=i+1;                                /* Error determination that may be caused due to position of dots */
while(isdigit(arr[s])){sum+=1;s++;}}}
if(arr[i]=='.'){
if(sum<1 || sum>3){printf("Error:Too few or too more digits between two stations(.)!\n");set+=1;break;}}
if(i==0){s=i;
while(isdigit(arr[s])){tot+=1;s++;}}
if(tot<1 || tot>3){printf("Error:Too few or too more digits before first station(.)!\n");set+=1;break;}sum=0;}
for(i=0;arr[i]!=0;i++){
if(arr[i]=='.'){were+=1;}}
if(were!=3){printf("Error:Too few or too more stations!\n");set+=1;}
for(i=0;arr[i]!=0;){t=2;                                               /*Convertion of User's input to decimal*/
while(isdigit(arr[i])){ans[t]=arr[i];--t;i++;}
if(t==1){num=ans[2]-48;}
if(t==0){num=10*(ans[2]-48)+(ans[1]-48);}if(t==-1){
for(s=2;s>=0;--s){
num+=(pow(10,s)*(ans[s]-48));}}
if(num<0 || num>255){printf("Error:You are out of the prescribed range of a octant!\n");set+=1;break;}i=i+1;num=0;}  /*Checking of range*/
if(set==0){printf("Correct answer!\n");}                              /*If no error is detected it will print correct answer!*/
return 0;
} 


