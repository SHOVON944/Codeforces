import java.util.Scanner;

public class Three_Indices {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int t = scan.nextInt();
        while (t-- > 0) {
            int n = scan.nextInt();
            int num[] = new int[n];
            for(int i = 0; i < n; i++) num[i] = scan.nextInt();

            boolean found = false;
            for (int i = 0; i < n - 2; i++) {
                if (num[i] < num[i + 1] && num[i + 1] > num[i + 2]) {
                    System.out.println("YES");
                    System.out.println((i + 1) + " " + (i + 2) + " " + (i + 3));
                    found = true;
                    break;
                }
            }
            if (!found) {
                System.out.println("NO");
            }
        }
    }
}