import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
	    String A=sc.nextLine();
	    String[] B=A.split(" ");
	    int na=Integer.parseInt(B[0]);
	    int nf=Integer.parseInt(B[1]);
	    int aux=(2*nf)-na;
	    System.out.println(aux);
	}
}