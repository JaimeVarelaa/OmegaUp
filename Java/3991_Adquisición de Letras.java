import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        String Cad=sc.nextLine();
        int yommi=0;
        char[] l=Cad.toCharArray();
        for(int i=0; i<Cad.length(); i++){
            if(l[i]=='d')
                yommi++;
        }
        System.out.println(yommi);
    }
}