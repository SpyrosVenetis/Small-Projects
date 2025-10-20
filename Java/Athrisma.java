import java.util.*;

public class Athrisma {
    public static void main(String[] args) {
        System.out.println("Dwse enan arithmo");
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int sol = 0;
        for (int i = 1; i <= n; i++){
            if (i != n){
                System.out.print(i + "+");
            }
            else{
                System.out.print(i + "=");
            }
            sol += i;
        }
        System.out.println(sol);
    }
}
