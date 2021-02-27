import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.math.BigInteger;

public class A {

    public static void main(String[] args) throws Exception {
        BufferedReader stdin = new BufferedReader(new InputStreamReader(System.in));
        BigInteger b = new BigInteger(stdin.readLine());
        if (b.compareTo(new BigInteger("-128")) >= 0 && b.compareTo(new BigInteger("127")) <= 0)
            System.out.println("byte");
        else if (b.compareTo(new BigInteger("-32768")) >= 0 && b.compareTo(new BigInteger("32767")) <= 0)
            System.out.println("short");
        else if (b.compareTo(new BigInteger("-2147483648")) >= 0 && b.compareTo(new BigInteger("2147483647")) <= 0)
            System.out.println("int");
        else if (b.compareTo(new BigInteger("-9223372036854775808")) >= 0 && b.compareTo(new BigInteger("9223372036854775807")) <= 0)
            System.out.println("long");
        else
            System.out.println("BigInteger");
    }

}
