import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int A = 0;
        for (int i = 0; i < 5; i++) {
            A += sc.nextInt();
        }
        System.out.println(A/5);
    }
}