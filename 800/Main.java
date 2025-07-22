import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int t = scan.nextInt();
        while(t-->0){
            int a = scan.nextInt();
            int count = 0;
            int step = 0;
            for(int i=1; i<=50000; i++){
                step++;
                if(i%3!=0  &&  i%10!=3) count++;
                if(count==a) break;
            }
            System.out.println(step);
        }
    }
}
