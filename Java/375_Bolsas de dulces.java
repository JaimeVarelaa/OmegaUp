import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
    	Scanner sc=new Scanner(System.in);
        int A=0; 
        int B;
        int C;
        int D=sc.nextInt();
        for(int i=0; i<D; i++) {
            B=sc.nextInt();
            C=sc.nextInt();
            A+=B*C;
        }
        System.out.println(A);
    }
}