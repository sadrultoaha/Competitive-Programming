import java.util.*;
import java.lang.*;
import java.io.*;
import java.math.BigInteger;


class SPOJ_FCTRL2_Small_factorials
{
	 public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        while(T>0)
        {
            BigInteger fact = BigInteger.ONE;
            int n =sc.nextInt();
            BigInteger v = BigInteger.ONE;
            for(int i=1;i<=n;i++)
            {
                fact = fact.multiply(v);
                v= v.add(BigInteger.ONE);

            }
            System.out.println(fact);
            T--;
        }
	 }
}
