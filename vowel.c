#include<stdio.h>
#include<string.h>
int main(){
    char name[50];
    fgets(name,sizeof(name),stdin);
    int v=0,c=0;
    for(int i=0;name[i]!='\0';i++){
        if(name[i]=='a'||name[i]=='e'||name[i]=='i'||name[i]=='o'||name[i]=='u') v++;
        else c++;
    }
    printf("number of vowel=%d \n number of consonant=%d",v,c-1);
}