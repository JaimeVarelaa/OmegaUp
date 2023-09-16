import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

public class Main {
    static ArrayList<Integer> num = new ArrayList<Integer>();
    public static void add(int n) {
        num.add(n);
    }

    public static void main(String[] args) {
        Main xd=new Main();
        Scanner sc=new Scanner(System.in);
        int A=sc.nextInt();
        int cont=0;
        for(int i=0; i<A; i++) {
            Main.add(sc.nextInt());
        }
        Collections.sort(num);
        for(int i=0; i<A; i++){
            if(num.get(A-1)==num.get(i)){
                cont++;
            }
        }
        System.out.println(cont);
    }
}