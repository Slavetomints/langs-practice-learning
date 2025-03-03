
import java.util.Scanner;

public class FactorialCalculator 
{
  public static void main(String[] args) 
  {
    // Declare variables  
    double total = 1;
    Integer currentValue = 1;
    Integer maxValue;
    Scanner keyboard = new Scanner(System.in);

    // Collect value
    System.out.println("Please enter a non-negative number to get a factorial of");
    maxValue = keyboard.nextInt();

    // Calculate factorial
    while (currentValue <= maxValue)
    {
      total *= currentValue;
      currentValue += 1;
    }

    // Display results
    System.out.println(maxValue + "! is equal to " + total);

    keyboard.close();
  }
  
}