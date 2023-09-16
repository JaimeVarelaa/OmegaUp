import java.util.ArrayList;
import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    ArrayList<Integer> fibonacciNumbers = new ArrayList<Integer>();
    ArrayList<Integer> nonFibonacciNumbers = new ArrayList<Integer>();
    Scanner sc = new Scanner(System.in);
    
    int n = sc.nextInt();
    int a = 1;
    int b = 1;
    
    while (b < n) {
      fibonacciNumbers.add(b);
      int temp = a;
      a = b;
      b = temp + b;
    }
    
    for (int i = 1; i < n; i++) {
      if (!fibonacciNumbers.contains(i)) {
        nonFibonacciNumbers.add(i);
      }
    }
    
    for (int i = 0; i < nonFibonacciNumbers.size(); i++) {
      System.out.print(nonFibonacciNumbers.get(i) + " ");
    }
  }
}
