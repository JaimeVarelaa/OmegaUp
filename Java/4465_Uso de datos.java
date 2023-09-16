import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int aux=0;
        int X=sc.nextInt();
        int N=sc.nextInt();
        int[] P=new int[N];
        for(int i=0; i<N; i++){
            P[i]=sc.nextInt();
        }
        for(int i=0; i<N; i++){
            aux+=X-P[i];
        }
        System.out.println(aux+X);
    }
}