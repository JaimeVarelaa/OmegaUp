import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int A=sc.nextInt();
        int D=0;
        int H=0;
        int M=0;
        if(A/50>0){
            M+=A/50;
            A-=M*50;
        }
        if(M/70>0){
            H+=M/70;
            M-=H*70;
        }
        if(H/12>0){
            D+=H/12;
            H-=D*12;
        }


        System.out.println(D+" "+H+" "+M+" "+A);
    }
}