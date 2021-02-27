import java.io.BufferedReader;
import java.io.InputStreamReader;

public class B {

    public static void main(String[] args) throws Exception {
        BufferedReader stdin = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(stdin.readLine());
        int v[] = new int[n];
        String line[] = stdin.readLine().split(" ");
        for (int i = 0; i < n; i++) {
            int x = Integer.parseInt(line[i]);
            v[i] = x;
        }
        int ans = -1;
        for (int it = 0; it < n; it++) {
            int aux = 1;
            int pos_max = it;
            for (int i = pos_max; i > 0; i--) {
                if (v[i-1] > v[i]) break;
                aux++;
            }
            for (int i = pos_max; i < n - 1; i++) {
                if (v[i+1] > v[i]) break;
                aux++;
            }
            ans = Math.max(ans, aux);
        }
        System.out.println(ans);
    }

}
