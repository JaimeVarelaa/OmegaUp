import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int A=sc.nextInt();
        A*=8;
        for(int i=0; i<5; i++) {
            A-=sc.nextInt();
        }
        if(A>0){
            System.out.println("FF");
        }else System.out.println("FH");
    }
}