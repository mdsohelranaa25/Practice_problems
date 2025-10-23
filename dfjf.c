#include<stdio.h>
int main(){
int year;
printf("Enter your birth year:");
scanf("%d",&year);
int n=(year-4)%12;
int a=n;
if(a==0) printf("Rat");
else if(a==1) printf("Ox");
else if(a==2) printf("Tiger");
else if(a==3) printf("Rabbit");
else if(a==4) printf("Dragon");
else if(a==5) printf("Snake");
else if(a==6) printf("Horse");
else if(a==7) printf("Goat");
else if(a==8) printf("Monkey");
else if(a==9) printf("Rooster");
else if(a==10) printf("Dog");
else if(a==11) printf("Pig");



}