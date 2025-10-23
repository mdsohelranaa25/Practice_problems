import java.util.*;
public class B_Stand_up_Comedian {
    public static void main(String[] args){
        int t;
        Scanner input=new Scanner(System.in);
        t=input.nextInt();
        while(t-->0){
            int a,b,c,d;
            a=input.nextInt();
            b=input.nextInt();
            c=input.nextInt();
            d=input.nextInt();
            int ans=0;
            ans+=a;
            int f=a,sc=a;
            if(ans>0){
            ans+=2*(Math.min(b,c));
            int mini=Math.min(b,c);
            b-=mini;
            c-=mini;
            int have=Math.max(b,c);
            if((have+d)>a){
                ans+=a+1;
            }
            else{
                ans+=have+d;
            }
          
           //else ans+=d;
           
            //ans+=Math.min(a+1,have);
        }
        else {
            if(b>0||c>0||d>0) ans=1;
            else ans=0;
        }
             System.out.println(ans);
        }
       

    }
}