import java.io.*;
import java.util.*;

public class A {

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
                for (int i = 0; i < n; i++){
                    String line = nextToken();
                    int m = line.length();
                    if (m <= 10)
                        System.out.println(line);
                    else
                        System.out.printf("%c%d%c\n", line.charAt(0), m-2, line.charAt(m-1));
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
