import java.io.*;
import java.util.*;

public class C {

    public static void main(String[] args) {
        new Solver().run();
    }

    static class Solver implements Runnable {
        BufferedReader reader;
        StringTokenizer tokenizer = null;

        Solver() {
            reader = new BufferedReader(new InputStreamReader(System.in));
        }

        public void run() {
            try {
                int n = nextInt();
                int[] knights = new int[n];

                for (int i = 0; i < n; i++){
                    knights[i] = nextInt();
                }

                boolean possible = false;
                for (int i = 3; i <= n; i++){
                    if (n%i==0){
                        int step = n/i;
                        for (int j = 0; j < step; j++){
                            boolean doable = true;
                            for (int k = j; k < n; k += step){
                                if (knights[k] == 0){
                                    doable = false;
                                }
                            }

                            if (doable){
                                possible = true;
                            }
                        }
                    }
                }

                if (possible){
                    System.out.println("YES");
                }else{
                    System.out.println("NO");
                }
            } catch (Exception e) {
                throw new RuntimeException(e);
            }
        }

        int nextInt() {
            return Integer.parseInt(nextToken());
        }

        double nextDouble() {
            return Double.parseDouble(nextToken());
        }

        long nextLong() {
            return Long.parseLong(nextToken());
        }

        String nextToken() {
            while (tokenizer == null || !tokenizer.hasMoreTokens()) {
                try {
                    tokenizer = new StringTokenizer(reader.readLine());
                } catch (IOException e) {
                    throw new RuntimeException(e);
                }
            }
            return tokenizer.nextToken();
        }
    }

}
