import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int n, r=1, ant=0, temp=0;
		n=sc.nextInt();
		
		for(int i=0; i<n; i++) {
			temp=r;
			r=(r+ant)%1000000;
			ant=temp;
		}
		System.out.println(r);
	}
}