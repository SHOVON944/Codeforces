import java.util.Scanner;

public class B_Coin_Games {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int t = scan.nextInt();
        while(t-->0){
            int n = scan.nextInt();
            scan.nextLine();
            String s = scan.nextLine();
            int count = 0;
            for(char ch:s.toCharArray()){
                if(ch=='U') count++;
            }
            if(count%2==1) System.out.println("YES");
            else System.out.println("NO");
        }
    }
}
