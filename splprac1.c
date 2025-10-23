#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int main() {
    // int t;
    // scanf("%d", &t);
    // while(t--) {
        char ch1[1000000];
        //char ch2[1000000];
        scanf("%s", ch1);
        //scanf("%s", ch2);
        
        int i = 0;
        bool h =false;
          bool e =false;
            bool l =false;
              bool o=false;
                int count=0;
        
       
        
       while(ch1[i]!='\0'){
        if(!h){
            if(ch1[i]=='h'){ h=true;
            i++;
            }
            else i++;
        }
        else if(!e){
            if(ch1[i]=='e') {e=true;
            i++;
            }
            else i++;
        }
        else if(!l){

            if(ch1[i]=='l') {count++;
            if(count==2) {
                l=true;
                i++;
            }
            else 
            i++;
        }
        else i++;
       }
       else if(!o){
        if(ch1[i]=='o') {o=true;
            i++;
            }
            else i++;
       }
        else i++;
       }
       if(h==true&&e==true&&l==true&&o==true) printf("YES\n");
       else printf("NO\n"); 
        
    }

