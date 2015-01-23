
import java.io.*;
import java.math.*;

 class FCTRL2 {
	static BigInteger one=new BigInteger("1");

	public static BigInteger factorial(BigInteger a)
	{
		int c;
		BigInteger fact=new BigInteger("1");
		BigInteger inc=new BigInteger("1");
		int n=a.intValue();
		for ( c = 1 ; c <= n ; c++ )
            {
            	fact = fact.multiply(inc);
            	inc=inc.add(BigInteger.ONE);
            }
		return fact;
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
				BigInteger num = new BigInteger(Integer.toString(a));
				BigInteger ans=factorial(num);
				System.out.println(ans);
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
