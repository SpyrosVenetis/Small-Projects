import java.util.*;

public class Main
{
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		int num = input.nextInt();
		System.out.println(num % 2 == 0 ? "EVEN" : "ODD");
	}
}