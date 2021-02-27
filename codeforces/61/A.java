import java.io.BufferedReader;
import java.io.InputStreamReader;


public class A {

    public static void main(String[] args) throws Exception {
        BufferedReader stdin = new BufferedReader(new InputStreamReader(System.in));
        String num1 = stdin.readLine();
        String num2 = stdin.readLine();
        for(int i = 0; i < num1.length(); i++)
            System.out.print((num1.charAt(i)==num2.charAt(i)) ? 0 : 1);
    }

}
