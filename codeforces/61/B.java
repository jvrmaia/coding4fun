import java.io.BufferedReader;
import java.io.InputStreamReader;

public class B {

    public static String words[] = new String[3];

    public static String filter(String s){
        String ans = new String();
        for (int i = 0; i < s.length(); i++){
            if(s.charAt(i) >= 'a' && s.charAt(i) <= 'z' || s.charAt(i) >= 'A' && s.charAt(i) <= 'Z')
                ans += s.charAt(i);
        }
        return ans.toLowerCase();
    }

    public static boolean check(String s){
        boolean ok = false;
        if (s.equals(words[0]+words[1]+words[2])) ok = true;
        if (s.equals(words[0]+words[2]+words[1])) ok = true;
        if (s.equals(words[1]+words[0]+words[2])) ok = true;
        if (s.equals(words[1]+words[2]+words[0])) ok = true;
        if (s.equals(words[2]+words[1]+words[0])) ok = true;
        if (s.equals(words[2]+words[0]+words[1])) ok = true;
        return ok;
    }

    public static void main(String[] args) throws Exception {
        BufferedReader stdin = new BufferedReader(new InputStreamReader(System.in));
        for (int i = 0; i < 3; i++){
            String line = stdin.readLine();
            words[i] = filter(line);
        }
        int n = Integer.parseInt(stdin.readLine());
        for(int i = 0; i < n; i++){
            String test = stdin.readLine();
            if(check(filter(test)) == true)
                System.out.println("ACC");
            else
                System.out.println("WA");
        }
    }

}
