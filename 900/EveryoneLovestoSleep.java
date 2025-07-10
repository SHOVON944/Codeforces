import java.util.*;

public class EveryoneLovestoSleep{
  
  public static int alarm(int h, int m, int h1, int m1){
    int sleep = h*60 + m;
    int alarm = h1*60 + m1;
    if(alarm<sleep) alarm += 24*60;
    return Math.abs(sleep -alarm);
  }
  
  public static void main(String args[]){
    Scanner scan = new Scanner(System.in);
    int t = scan.nextInt();
    int minimum = Integer.MAX_VALUE;
    while(t-->0){
      int n = scan.nextInt();
      int h = scan.nextInt();
      int m = scan.nextInt();
      Set<Integer> set = new TreeSet<>();
      while(n-->0){
        int h1 = scan.nextInt();
        int m1 = scan.nextInt();
        int value = alarm(h, m, h1, m1);
        set.add(value);
      }
      int ans = ((TreeSet<Integer>)set).first();
      System.out.println(ans/60 + " " + ans%60);
    }
  }
}