import java.util.Scanner;

public class Main{
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        int total = scanner.nextInt();
        int numbers = scanner.nextInt();
        
        for (int i = 0;i < numbers;i++){
            total -= scanner.nextInt() * scanner.nextInt();
        }
        
        String result = total == 0 ? "Yes" : "No";
        System.out.println(result);
   }
}