import java.util.ArrayList;
import java.util.Scanner;

public class Main {
	static ArrayList<Integer> num = new ArrayList<Integer>();
	public static void add(int n) {
		num.add(n);
	}
	public static void main(String[] args) {
		Main xd=new Main();
		Integer aux=0;
		Scanner sc=new Scanner(System.in);
	    double A=sc.nextInt();
	    for(int i=0; i<A; i++) {
	    	Main.add(sc.nextInt());
	    }
	    for(Integer i=0; i<A; i++) {
	    	aux+=num.get(i);
	    }
	    System.out.println((aux/A));
	}
}