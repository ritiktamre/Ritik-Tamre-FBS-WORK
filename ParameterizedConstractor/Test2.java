package ParameterizedConstractor;

class Employee
{
	int id;
	String name;
	double salary;
	
	Employee(int id,String name,double salary)//parameterized constructor
	{
		this.id=id;
		this.name=name;
		this.salary=salary;
	}
	
	Employee()//default constructor
	{
		this.id=45;
		this.name="RITIK";
		this.salary=34567.89;
	}

	int getId() {
		return id;
	}

	void setId(int id) {
		this.id = id;
	}

	String getName() {
		return name;
	}

	void setName(String name) {
		this.name = name;
	}

	double getSalary() {
		return salary;
	}

	void setSalary(double salary) {
		this.salary = salary;
	}
	void display()
	{
		System.out.println("ID="+getId());
		System.out.println("NAME="+getName());
		System.out.println("SALARY="+getSalary());
	}
}

public class Test2 {

	public static void main(String[] args) {
		
		Employee e1;
		e1=new Employee();
		
		e1.display();

	}

}
