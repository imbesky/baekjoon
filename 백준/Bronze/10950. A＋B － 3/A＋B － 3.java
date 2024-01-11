import java.util.Scanner;

public class Main{
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        int times = scanner.nextInt();
        for (int i=0;i < times;i++){
            System.out.println(scanner.nextInt() + scanner.nextInt());
        }
    }
}