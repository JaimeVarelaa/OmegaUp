import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
    	Scanner sc=new Scanner(System.in);
    	int S=0;
    	int DP=0;
    	int DN=0;
        int N=sc.nextInt();
        for(int i=0; i<N; i++) {
        	int aux=sc.nextInt();
        	S+=aux;
        	if(aux>=0) {
        		DP++;
        	}else {
        		DN++;
        	}
        }
        System.out.println(S+"\n"+DP+"\n"+DN);
    }
}