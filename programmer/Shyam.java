package programmer;

public class Shyam {
   
	 int salary;
	 
//	 public Shyam(int salary) {
//		// TODO Auto-generated constructor stub
//		 this.salary = salary;
//	}



//	public Shyam(int a) {
//		// TODO Auto-generated constructor stub
//	}

	public void Homeloan() throws loanException
	 {
		 if( salary < 500000)
		 {
			 throw new loanException();
		 }
		 else
		 {
			 System.out.println("Home Loan Is Allowed");
		 }
	 }
}
