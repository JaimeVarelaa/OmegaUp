import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
    	Scanner sc=new Scanner(System.in);
    	int I=sc.nextInt();
    	int F=sc.nextInt();
    	for(int i=I; i<=F; i++) {
        	if(i%2==0){
        		System.out.println(i);
        	}
        }
    }
}