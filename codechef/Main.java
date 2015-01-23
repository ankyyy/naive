
import java.io.*;
import java.math.*;

 class FCTRL2 {
	static BigInteger one=new BigInteger("1");

	public static BigInteger factorial(BigInteger a)
	{
		if(a.equals(one))
			return one;
		return a.multiply(factorial(a.subtract(one)));
	}
	
	public static void main(String[] args)  {
		// TODO Auto-generated method stub

		int t;
		BufferedReader br =new BufferedReader(new InputStreamReader(System.in));
		try {
			t=Integer.parseInt(br.readLine());
			
			while(t>0)
			{
				int a;
				br =new BufferedReader(new InputStreamReader(System.in));
				a=Integer.parseInt(br.readLine());
				BigInteger num=factorial(BigInteger.valueOf(a));
				System.out.println(num);
				t--;
			}
		} catch (NumberFormatException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
			return ;
		} catch (IOException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
			return ;
		}
		
		
		
		

	}

}
