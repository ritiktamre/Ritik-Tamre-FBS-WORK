package Array;


class Account
{
	int acNo;
	int balance;
	String name;
	
	 Account(int acNo, int balance, String name)
	 {
		this.acNo = acNo;
		this.balance = balance;
		this.name = name;
	}
	 
	 Account()
	 {
		 this.acNo=1234;
		 this.balance=1226;
		 this.name="not given";
	 }

	int getAcNo() {
		return acNo;
	}

	void setAcNo(int acNo) {
		this.acNo = acNo;
	}

	int getBalance() {
		return balance;
	}

	void setBalance(int balance) {
		this.balance = balance;
	}

	String getName() {
		return name;
	}

	void setName(String name) {
		this.name = name;
	}
	 
	 void display()
	 {
		 System.out.println("ACNO:"+acNo);
		 System.out.println("BALANCE:"+balance);
		 System.out.println("NAME:"+name);
		
	 }
	
	
}//class ends here

class savingAc extends Account
{
	int limitPayment;
	double intrestRate;
	
	 savingAc(int acNo, int balance, String name, int limitPayment, double intrestRate) 
	 {
		super(acNo, balance, name);
		this.limitPayment = limitPayment;
		this.intrestRate = intrestRate;
	}
	 
	 savingAc()
	 {
		 super();
		 this.limitPayment=00;
		 this.intrestRate=00;	 
	 }

	int getLimitPayment() {
		return limitPayment;
	}

	void setLimitPayment(int limitPayment) {
		this.limitPayment = limitPayment;
	}

	double getIntrestRate() {
		return intrestRate;
	}

	void setIntrestRate(double intrestRate) {
		this.intrestRate = intrestRate;
	}
	 
	 void display()
	 {
		 System.out.println("---SAVING AC---");
		 super.display();
		 System.out.println("LIMIT PAYMENT:"+limitPayment);
		 System.out.println("INTREST RATE:"+intrestRate);
	 }
	 
}//class ends here

class currentAc extends Account
{
	String nolimit;
	int nolimitpayment;
	
	currentAc(int acNo, int balance, String name, String nolimit, int nolimitpayment)
	{
		super(acNo, balance, name);
		this.nolimit = nolimit;
		this.nolimitpayment = nolimitpayment;
	}
	
	currentAc()
	{
		this.nolimit="not given";
		this.nolimitpayment=0;
	}

	String getNolimit() {
		return nolimit;
	}

	void setNolimit(String nolimit) {
		this.nolimit = nolimit;
	}

	int getNolimitpayment() {
		return nolimitpayment;
	}

	void setNolimitpayment(int nolimitpayment) {
		this.nolimitpayment = nolimitpayment;
	}
	
	void display()
	{
		System.out.println("---Current Ac---");
		super.display();
		System.out.println("NO LIMIT:"+nolimit);
		System.out.println("NO LIMIT PAYMENT:"+nolimitpayment);
	}
	
	
}//class ends here

public class Test2 {

	public static void main(String[] args) {
		Account[] arrAc;
		arrAc=new Account[2];
		arrAc[0]=new savingAc(123,1000,"ritik",20000,2.1);
		arrAc[1]=new currentAc(134,2000,"rahul","unlimited",10000);
	
		
		for(int i=0;i< arrAc.length;i++)
		{
			arrAc[i].display();
			System.out.println();
		}
		

	}

}
