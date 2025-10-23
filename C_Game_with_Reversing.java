import java.util.*;

public class C_Game_with_Reversing {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        input.nextLine();

        while (t-- > 0) {
            int n = input.nextInt();
            input.nextLine();
            String s = input.nextLine();
            String ss = input.nextLine();

            String rs = new StringBuilder(s).reverse().toString();
            int count = 0, cnt = 0;

            if (s.equals(ss)) {
                System.out.println(0);
                continue;
            }

            for (int i = 0; i < n; i++) {
                if (s.charAt(i) != ss.charAt(i)) {
                    count++;
                }
            }

            for (int i = 0; i < n; i++) {
                if (rs.charAt(i) != ss.charAt(i)) {
                    cnt++;
                }
            }

            int ans = Integer.MAX_VALUE;
            if (count % 2 == 1) {
                ans = count * 2 - 1;
            } else {
                ans = count * 2;
            }
            int newcount=0;
            newcount=2;
            cnt--;
            if (cnt % 2 == 0) {
                newcount+=cnt*2;
                
            } else {
                newcount+=Math.max(0,cnt*2-1);
            }
            ans=Math.min(ans,newcount);
            ans=Math.max(ans,0);

            System.out.println(ans);
        }
    }
}
