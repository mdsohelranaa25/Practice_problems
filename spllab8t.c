#include<stdio.h>
#include<string.h>
int main(){
    int n;
    scanf("%d",&n);
    char ch[101],cc[101];
    scanf("%s%s",ch,cc);
    if(strlen(cc)!=strlen(ch)) {
        printf("No");
        return 0;
    }
    else {
        for(int i=0;cc[i]!='\0';i++){
            if(cc[i]!=ch[i]){
                if((cc[i]=='l'&&ch[i]=='1')||(cc[i]=='1'&&ch[i]=='l')||(ch[i]=='0'&&cc[i]=='o')||(ch[i]=='o'&&cc[i]=='0')){
                   continue;
                }
                else {
                    printf("No");
                    return 0;
                }
                
               
            
            }
        }
        printf("Yes");
    }
}