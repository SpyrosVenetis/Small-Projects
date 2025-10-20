import java.util.*;

public class MiniCalc
{
	public static void Main(String[] args) {
		Scanner input = new Scanner(System.in);
		double num1 = input.nextDouble();
		input.nextLine();
		String op = input.nextLine();
		double num2 = input.nextDouble();
		switch (op) {
		    case "+":
		        System.out.println(num1 + num2);
		    case "-":
		        System.out.println(num1 - num2);
		    case "*":
		        System.out.println(num1 * num2);
		    case "/":
		        if (num2 == 0){
		            System.out.println("Cant divide by 0");
		        }
		        else{
		            System.out.println(num1 / num2);
		        }
		    default:
		        System.out.println("Invalid Operator");
		}
	}
}
