import java.util.ArrayList;
import java.util.Scanner;

public class Main {
    static ArrayList<Integer> num = new ArrayList<Integer>();
    public static void add(int n) {
        num.add(n);
    }

    public static void main(String[] args) {
        Main xd=new Main();
        Scanner sc=new Scanner(System.in);
        for(int i=0; i<2; i++) {
            Main.add(sc.nextInt());
        }
        int A=sc.nextInt();
        int x=num.get(0)*num.get(1);
        if(x<A) {
            A = A - x;
            System.out.println(x + " " + A);
        }else{
            System.out.println(A + " "+0);
        }
    }
}