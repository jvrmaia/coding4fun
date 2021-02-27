import java.io.*;
import java.util.*;

public class B {

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
                int k = nextInt();
                int t = nextInt();
                int total = n*k*t/100;
                for (int i = 0; i < n; i++) {
                    if (total <= 0) System.out.print("0 ");
                    else {
                        if (total > k)
                            System.out.printf("%d ", k);
                        else
                            System.out.printf("%d ", total);
                    }
                    total -= k;
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
