import java.util.Scanner;

class Multi
{
	
	static int i1,i2,temp,temp1,temp2;
	public void input1()
	{
		for(int i=2;i<11;i++)
		{
			System.out.println(i1*i);
			temp1=i1*i;
		}
	}
	public void input2()
	{
		for(int i=2;i<11;i++)
		{
			System.out.println(i2*i);
			temp2=i2*i;
		}	
	}
	public void display()
	{
		temp=temp1+temp2;
		System.out.println("------------- The multiplication of sum of two no. is ----------------");
		for(int i=1;i<11;i++)
		{
			System.out.println(temp*i);
		}
	}
	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		Multi m=new Multi();
		System.out.println("enter the 1st number");
		i1=sc.nextInt();
		m.input1();
		System.out.println("enter the 2nd number");
		i2=sc.nextInt();
		m.input2();
		m.display();
	}
}