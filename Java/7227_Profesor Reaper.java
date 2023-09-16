import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		float P=0;
		for(int i=0; i<5; i++) {
			P+=sc.nextFloat();
		}
		System.out.printf("%.2f",P/5);
	}
}