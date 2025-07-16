import java.util.Scanner;

public class A_Choosing_Teams {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        int k = scan.nextInt();
        int a;
        int counter = 0;
        for(int i=0; i<n; i++){
            a = scan.nextInt();
            if((5-(a+k))>=0) counter++;
        }
        System.out.println(counter/3);
        scan.close();
    }
}