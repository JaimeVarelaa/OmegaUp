import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        String a=sc.next();
        String b=sc.next();
        int c=sc.nextInt();
        int j=0;
        char[]cadena=new char[a.length()+b.length()];
        if(c==1) {
            for(int i=0; i<a.length(); i++){
                cadena[j]=a.charAt(i);
                cadena[j+1]=b.charAt(i);
                j+=2;
            }
        }
        if(c==2) {
            for(int i=0; i<a.length(); i++){
                cadena[j]=b.charAt(i);
                cadena[j+1]=a.charAt(i);
                j+=2;
            }
        }
        System.out.println(String.valueOf(cadena));
    }

}