#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void main()
{
int wic=0,score,f=0,ind,f2=0,wes,wess=0,tar,wic2=0,inds=0;
long t;
printf(" game start now\n");
while(f!=3)
{
 printf("hit it\n ");
 scanf("%d",&ind);

 t=time(NULL);
  srand(t);
    score = rand() % 6 +1;
	printf("the computerscore is %d  \n",score);
 if(ind==score)
 {
printf("hey ur gone nd wicketno %d \n",++wic);
f++;
printf("the fall of wickets is %d \n",f);
if(f==3)
{
	goto hurray;
 }
}
 else
 {
 inds+=ind;
 printf("the current score of india is %d \n",inds);
 }
 }
 hurray:
 printf("huray\n");
 printf("the  final score of  india  is %d  \n ",inds);
 printf("second innings  started \n");
 tar=inds;
while(f2!=5)
{
 printf("hit it\n ");
 scanf("%d",&wes);
 t=time(NULL);
  srand(t);
    score = rand() % 6 +1;
	printf("the computerscore %d  \n",score);
 if(wes==score)
 {
printf("hey ur gone nd wicket %d \n",++wic2);
f2++;
printf("the f is %d",f2);
if(f2==5)
{

	printf("u loss the match im sorry \n");

 }
}
 else
 {
 wess+=wes;
 printf("the current score is %d \n",wess);
 if(wess>=tar)
 {
	 printf("u  won  d match and score is %d \n",wess);
	 break;

 }
 }
 }
 getch();
}

