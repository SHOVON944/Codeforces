import java.util.Scanner;

public class A {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        int m = scan.nextInt();
        int a = scan.nextInt();
        int b = scan.nextInt();

        if((m*a)<=b){
            System.out.println(n*a);
        } else{
            int cost1 = ((n/m)*b)+(n%m)*a;
            int cost2 = ((n+m-1)/m)*b;          // eita eisob khetre use korar jonno...
            int ans = Math.min(cost1, cost2);
            System.out.println(ans);
        }
        scan.close();
    }
}
