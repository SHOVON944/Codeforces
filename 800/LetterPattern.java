// Diamond Pattern
// ওপরের অংশ + নিচের অংশ মিলে হীরক আকৃতি তৈরি হবে
//     *
//    ***
//   *****
//  *******
// *********
//  *******
//   *****
//    ***
//     *
// public class DiamondPattern {
//     public static void main(String[] args) {
//         int n = 5;

//         // উপরের অর্ধেক
//         for (int i = 1; i <= n; i++) {
//             for (int sp = 1; sp <= n - i; sp++)
//                 System.out.print(" ");
//             for (int j = 1; j <= 2 * i - 1; j++)
//                 System.out.print("*");
//             System.out.println();
//         }

//         // নিচের অর্ধেক
//         for (int i = n - 1; i >= 1; i--) {
//             for (int sp = 1; sp <= n - i; sp++)
//                 System.out.print(" ");
//             for (int j = 1; j <= 2 * i - 1; j++)
//                 System.out.print("*");
//             System.out.println();
//         }
//     }
// }






//   E
//  EFE
// EFGFE
//  EFE
//   E

public class LetterPattern {
    public static void main(String[] args) {
        char ch = 'E';
        int n = 3;

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n - i; j++) System.out.print(" ");
            for (int j = 0; j < i; j++) System.out.print((char)(ch + j));
            for (int j = i - 2; j >= 0; j--) System.out.print((char)(ch + j));
            System.out.println();
        }

        for (int i = n - 1; i >= 1; i--) {
            for (int j = 1; j <= n - i; j++) System.out.print(" ");
            for (int j = 0; j < i; j++) System.out.print((char)(ch + j));
            for (int j = i - 2; j >= 0; j--) System.out.print((char)(ch + j));
            System.out.println();
        }
    }
}
