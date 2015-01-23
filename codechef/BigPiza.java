import java.util.*;

public class BigPiza
{
	static Scanner sc = new Scanner(System.in);
	static final int MAX = 10000 + 1;
	public static void main(String[] args)
	{
		int[] grundy = new int[MAX];
		boolean[] temp = new boolean[MAX];
		for(int i=2;i<MAX;i++)
		{
			Arrays.fill(temp, false);
			for(int j=0;j<=i-2;j++)
			{
				int xor = grundy[j]^grundy[i-2-j];
				if(xor < MAX)
					temp[xor] = true;
			}
			for(int j=0;j<MAX;j++)
			{
				if(!temp[j])
				{
					grundy[i] = j;
					break;
				}
			}
		}
		int T = sc.nextInt();
		while(T-->0)
			System.out.println(grundy[sc.nextInt()]==0 ? "Bhima" : "Arjuna");
	}
}
