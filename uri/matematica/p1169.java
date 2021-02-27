import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.math.BigInteger;


public class p1169 {

    public static void main(String[] args) throws Exception {
        BufferedReader stdin = new BufferedReader(new InputStreamReader(System.in));
        Integer n = Integer.parseInt(stdin.readLine());
        for (int i = 0; i < n; i++) {
            Integer a = Integer.parseInt(stdin.readLine());
            BigInteger ans = new BigInteger("2");
            ans = ans.pow(a);
            ans = ans.divide(new BigInteger("12000"));
            System.out.println(ans + " kg");
        }
    }

}

