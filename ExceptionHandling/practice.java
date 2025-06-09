package ExceptionHandling;

public class practice {

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
        	System.out.println("second argument not provide zero:");
        }
        
        catch(ArrayIndexOutOfBoundsException ai)
        {
        	System.out.println("At least two argument");
        }
        
        catch(Exception e)
        {
        	System.out.println("Something went wrong");
        }
        
	}

}
