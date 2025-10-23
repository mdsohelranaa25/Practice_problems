import java.util.*;

public class B_Equalize_by_Divide {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();

        while (t-- > 0) {
            int n = input.nextInt();
            int[] v = new int[n];
            for (int i = 0; i < n; i++) {
                v[i] = input.nextInt();
            }

            boolean notone = false;
            int mn = v[0];
            for (int i = 0; i < n; i++) {
                if (v[i] != 1) {
                    notone = true;
                   
                }
                 mn = Math.min(mn, v[i]);
            }
            boolean allsame=true;
            for (int i = 0; i < n; i++) {
                if(v[i]!=mn)  allsame=false;
            }
            //  System.err.println(allsame+" "+mn);
            //  System.err.println(mn);
          if(allsame){
           
              System.out.println(0);
          }
          else if(mn==1){
            
            System.out.println(-1);
          }
             else {
                int op = 0;
                int indexOftwo = -1;
                List<AbstractMap.SimpleEntry<Integer, Integer>> pair = new ArrayList<>();

                for (int i = 0; i < n; i++) {
                    if (v[i] == mn) {
                        indexOftwo = i;
                        break;
                    }
                }

          if (mn == 2) {
                    int ind2 = -1;
                    for (int i = 0; i < n; i++) {
                        if (v[i] == 2) {
                            ind2 = i;
                            break;
                        }
                    }
                    for (int i = 0; i < n; i++) {
                        while (v[i] > 2) {
                            v[i] = (v[i] + 1) / 2;
                            op++;
                            pair.add(new AbstractMap.SimpleEntry<>(i + 1, ind2 + 1));
                        }
                    }
                } else {
                   // System.err.println(mn);
                  //  System.err.println(indexOftwo);
                    boolean havetwo = false;
                    int have2ind = -1;
                    for (int i = 0; i < n; i++) {
                        
                            while (v[i] > mn) {
                                if (v[i] % mn == 0) {
                                    v[i] /= mn;
                                } else {
                                    v[i] = (v[i] + mn-1) / mn;
                                }
                                op++;
                                pair.add(new AbstractMap.SimpleEntry<>(i + 1, indexOftwo + 1));

                                if (v[i] == 2) {
                                    havetwo = true;
                                    have2ind = i;
                                    break;
                                }
                            }
                        
                        if (havetwo) break;
                    }
                 allsame=true;   
 for (int i = 0; i < n; i++) {
                if(v[i]!=v[0])  allsame=false;
            }
           

                    if (havetwo) {
                        for (int i = 0; i < n; i++) {
                            if (v[i] != 2) {
                                while (v[i] > 2) {
                                    //v[i] /= 2;
                                    v[i]=(v[i]+1)/2;
                                    op++;
                                    pair.add(new AbstractMap.SimpleEntry<>(i + 1, have2ind + 1));
                                }
                            }
                        }
                    } else {
                         allsame=true;   
 for (int i = 0; i < n; i++) {
                if(v[i]!=v[0])  allsame=false;
            }
                        while(havetwo==false&&allsame==false){
                        mn = Integer.MAX_VALUE;
                        int indmn=-1;
                        have2ind = -1;
                       
                        for (int i = 0; i < n; i++) {
                           if(v[i]<mn){
                               mn = v[i];
                               indmn=i;
                           }
                        }
                        for (int i = 0; i < n; i++) {
                            while (v[i] > mn) {

                                v[i]=(v[i]+mn-1)/mn;
                                op++;
                                pair.add(new AbstractMap.SimpleEntry<>(i + 1, indmn + 1));
                            }
                            if(v[i]==2){
                            havetwo = true;
                            have2ind = i;
                        }
                        if(havetwo) break;
                        }
                        if(havetwo){
                            for (int i = 0; i < n; i++) {
                               
                                while(v[i]>2){
                                    v[i]=(v[i]+1)/2;
                                    op++;
                                    pair.add(new AbstractMap.SimpleEntry<>(i + 1, have2ind + 1));
                                }
                            }

                        }
                        allsame=true;   
 for (int i = 0; i < n; i++) {
                if(v[i]!=v[0])  allsame=false;
            }
                    }

                    }
                }

                System.out.println(op);
                for (AbstractMap.SimpleEntry<Integer, Integer> p : pair) {
                    System.out.println(p.getKey() + " " + p.getValue());
                }
                //    for (int i = 0; i < n; i++) {
                //     System.out.print(v[i] + " ");
                // }
                // System.out.println();
             
            }
        }   
        }
    }
    

