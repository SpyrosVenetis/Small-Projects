import java.util.*;

public class Factorial {
    public static void main(String[] args) {
        System.out.println("Dwse enan arithmo apo 0 ews 20");
        Scanner input = new Scanner(System.in);
        int num = input.nextInt();
        int result = 1;
        if (num >= 1 && num <= 20){
            for (int i=1; i<=num; i++) {
                result *= i;
            }
            System.out.println("to n! tou arithmou " + num + " 12einai: " + result);
        }
    }
}
