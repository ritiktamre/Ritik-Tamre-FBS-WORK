package Ritik30;

public class Ritikpractice {

	public static void main(String[] args) {
     
		try
		{
			int a = Integer.parseInt(args[0]);
			int b = Integer.parseInt(args[1]);
			
			int c = a/b;
			System.out.println("Answer is :"+c);
		}
		
		catch(ArithmeticException ae)
		{
			System.out.println("Second Argument are not provide the zero");
		}
		
		catch(ArrayIndexOutOfBoundsException ai)
		{
			System.out.println("At least two Argument");
		}
		
		catch(Exception e)
		{
			System.out.println("Something Went wrong");
		}
		
	}
}