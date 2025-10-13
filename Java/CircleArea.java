import java.util.*;
public class Main
{
	public static void main(String[] args) {
		System.out.println("Δωσε την ακτηνα του κυκλου");
		Scanner input = new Scanner(System.in);
		double R = input.nextDouble();
		double area = 3.14 * (R * R);
		System.out.println("Το εμβαδον του κυκλου ειναι: "+ area);
	}
}
