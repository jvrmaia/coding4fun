import java.io.BufferedReader;
import java.io.InputStreamReader;

public class B {

    public static void main(String[] args) throws Exception {
        BufferedReader stdin = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(stdin.readLine());
        System.out.print(n+" ");
        int i = 2;
        while(n != 1){
            while(n % i == 0){
                n /= i;
                System.out.print(n+" ");
            }
            i++;
        }
    }
}
