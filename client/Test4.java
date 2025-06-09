package client;

import programmer.Shyam;
import programmer.loanException;

public class Test4 {

	public static void main(String[] args) {
	 
		 try
		 {
			 int a = Integer.parseInt(args[0]);
			 
			 Shyam b1 = new Shyam(a);
			 b1.Homeloan();
		 }
		 
		 catch(ArrayIndexOutOfBoundsException ai)
		 {
			 System.out.println(ai);
		 }
		 
		 catch(loanException le)
		 {
			 System.out.println(le);
		 }
		 
		 finally
		 {
			 System.out.println("Always Execute hoga");
		 }
       
	}

}
