import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        String Cad=sc.nextLine();
        String[] num=Cad.split(" ");
        int AuxA;
        int AuxB;
        Integer A=Integer.parseInt(num[0]);
        Integer B=Integer.parseInt(num[1]);
        Integer C=Integer.parseInt(num[2]);

        if(A>C){
            AuxA=A-C;
        }else{
            AuxA=C-A;
        }
        if(B>C){
            AuxB=B-C;
        }else{
            AuxB=C-B;
        }
        if(AuxA<AuxB){
            System.out.println("gato A");
        } else if (AuxA>AuxB) {
            System.out.println("gato B");
        }else{
            System.out.println("raton C");
        }
    }
}