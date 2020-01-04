import java.util.Scanner;
import java.math.BigInteger;

public class Main {

    public static BigInteger getPow(long _a,long _b,long _c)
    {
        BigInteger res= BigInteger.valueOf(_a);
        BigInteger b = BigInteger.valueOf(_b);
        BigInteger c = BigInteger.valueOf(_c);
        res = res.modPow(b,c);
        return res;
    }

    public static void main(String[] args) {
        Scanner input=new Scanner(System.in);
       int t;
       t=input.nextInt();
       for(int i=0;i<t;i++)
       {
           long a,b,c;
           a=input.nextLong();
           b=input.nextLong();
           c=input.nextLong();
           BigInteger res1=getPow(b,a,c);
           System.out.println(res1);
       }

    }
}
