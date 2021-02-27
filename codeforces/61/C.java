import java.io.BufferedReader;
import java.io.InputStreamReader;


public class C {

    public static String ArabicToRoman(Long aNumber){
        if(aNumber < 1 || aNumber > 3999){
            return "-1";
        }
        int[] aArray = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
        String[] rArray = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        String rNumber = "";
        for(int i=0; i<aArray.length; i++){
            while(aNumber >= aArray[i]){
                rNumber += rArray[i];
                aNumber -= aArray[i];
            }
        }
        return rNumber;
    }

    public static void main(String[] args) throws Exception {
        BufferedReader stdin = new BufferedReader(new InputStreamReader(System.in));
        String l1[] = stdin.readLine().split(" ");
        String l2 = stdin.readLine();
        int a = Integer.parseInt(l1[0]);
        Long c = Long.parseLong(l2, a);
        if (l1[1].equals("R")){
            System.out.println(ArabicToRoman(c));
        } else {
            System.out.println(Long.toString(c, Integer.parseInt(l1[1])).toUpperCase());
        }
    }

}
