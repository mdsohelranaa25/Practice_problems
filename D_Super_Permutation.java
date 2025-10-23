import java.util.*;
public class D_Super_Permutation {
    public static void main( String[] args){
        Scanner input=new Scanner(System.in);
        int t=input.nextInt();
        input.nextLine();
        while(t-->0){
            int n=input.nextInt();
            if(n==1) System.out.println(1);
            else if(n%2==1) System.out.println(-1);
            else{
                int cnt=0;
                System.out.print(n+" ");
                cnt=2;
                System.out.print(1+" ");
                int cur=2;
                while(cnt<n){
                    System.out.print(n-cur+" "+(cur+1)+" ");
                    cur+=2;
                    cnt+=2;

                }
                System.out.print("\n");

            }

        }
    }

}