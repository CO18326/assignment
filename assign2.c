                                             /*Roman to integer and Integer to roman converter*/

#include <stdio.h>
void rom_conv(char*,char,int);
int num_conv();
int main () {
int asd,k,num[123],i,tot=0,n,s,tr;
char df[5],pu[5];
printf("Which mode you want to activate:\n");
printf("...1...for integer to roman            ...2...for roman to integer\n");
printf("Enter your response here:");
scanf("%d",&tr);
if(tr==2){
num_conv();}
if(tr==1){
printf("Enter the integer:");
scanf("%d",&asd);                 /* Entering of a integer by user suppose : 21 */
i=0;
while(asd!=0){
k=asd%10;
asd=asd/10;
num[i]=k;
i++;
}                                                        /* Help to get the access of different digits */
printf("Roman numeral equivalent to it:\n");
for(s=(i-1);s>=0;s--){
switch(s){
case 3:         {df[3]='m'; pu[3]='u'; break;}
case 2:         {df[2]='c'; pu[2]='d';df[3]='m'; break;}
case 1:         {df[1]='x'; pu[1]='l';df[2]='c'; break;}
case 0:         {df[0]='i'; pu[0]='v';df[1]='x';break; }}                   /* content for the use of rom_conv */
rom_conv(&df[s],pu[s],num[s]);}
printf("\nCheck using the table below:\n(i=1  v=5  x=10  l=50  c=100  d=500  m=1000)\n");
}return 0;}
void rom_conv(char *cha,char ch,int t){int n;
if(t<4){for(n=1;n<=t;n++){printf("%c",*cha);}}
if(t==4){printf("%c%c",*cha,ch);}
if(t>=5 && t<9){printf("%c",ch);for(n=1;n<=t-5;n++){printf("%c",*cha);}}
if(t==9){printf("%c%c",*(cha),*(cha+1));}                                       /* rom_conv convert 21 to xxi */

}



int num_conv ()
{
char  were[34];
int s,num,tot=0;
printf("Enter the roman numeral:\v");
printf("(Use:i=1  v=5  x=10  l=50  c=100  d=500  m=1000)\n"); /*User enter roman numeral suppose:mlviii*/
scanf("%s",were);
for(s=0;were[s]!=0;s++){
if(were[s]=='i' &&( were[s+1]!='v' || were[s+1]!='x' || were[s+1]!='l' || were[s+1]!='c' || were[s+1]!='m' || were[s+1]!='d')){num=1;}
if(were[s]=='i' &&(were[s+1]=='v' || were[s+1]=='x' || were[s+1]=='l' || were[s+1]=='c' || were[s+1]=='m' || were[s+1]=='d')){num=-1;}
if(were[s]=='v'){num=5;}
if(were[s]=='x'){num=10;}
if(were[s]=='l'){num=50;}
if(were[s]=='c'){num=100;}
if(were[s]=='m'){num=1000;}
if(were[s]=='d'){num=500;}tot+=num; }
printf("Integer equivalent of it:\n%d\n",tot);      /*It will give 1058*/
return 0;
}

