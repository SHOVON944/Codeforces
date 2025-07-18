import java.util.Scanner;
import java.util.Vector;

public class Distinct_Numbers {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        Vector<Integer> vec = new Vector<>();
        for(int i=0; i<n; i++) {
            int a = scan.nextInt();
            if(!vec.contains(a)){
                vec.add(a);
            }
        }
        int size = vec.size();
        System.out.println(size);
        scan.close();
    }
}