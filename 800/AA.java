import java.util.Scanner;

public class AA {
    public static void call(String s){
        int counta = 0;
        int ansCount = 0;
        for(char ch : s.toCharArray()){
            if(ch == 'a') counta++;
        }
        int otherCount = s.length() - counta;
        if(counta > (double)otherCount/(double)2){
            System.out.println(s.length());
            return;
        }
        while(true){
            ansCount++;
            if(counta > (double)counta/(double)2) break;
        }
        System.out.println(ansCount);
    }
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String s = scan.nextLine();
        call(s);

        scan.close();
    }
}
