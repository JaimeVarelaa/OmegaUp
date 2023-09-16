import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
    	Scanner sc=new Scanner(System.in);
        int A=sc.nextInt(); 
        int B=sc.nextInt();
        for(int i=A; i<=B; i++) {
        	if(i%3==0 && i%5==0) {
        		System.out.println("BuzzFizz");
        	}else if(i%3==0) {
        		System.out.println("Buzz");
        	}else if(i%5==0) {
        		System.out.println("Fizz");
        	}else {
        		System.out.println(i);
        	}
        }
    }
}