
import java.util.HashMap;
import java.util.Scanner;

public class Distence {
    private HashMap<Integer, String> hashs = new HashMap<Integer, String>();

    public void add(Integer i, String s) {
        hashs.put(i, s);
    }

    public String getName(int amount) {
        return hashs.get(amount);
    }

    public int getKey(String s, int k) {
        for (int i = 0; i < k; i++) {
            if (hashs.get(i).equals(s))
                return i;
        }
        return 0;
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        Distence d = new Distence();
        Integer i = 0;
        String ss = "hello";
        String s2 = "###";
        for (i = 0;; i++) {
            String s = in.next();
            if (s.equals(s2))
                break;
            d.add((Integer) i, s);
        }
        Integer k = i;
        int[][] amount = new int[k][k];
        for (i = 0; i < k; i++) {
            for (int j = 0; j < k; j++) {
                amount[i][j] = in.nextInt();
            }
        }
        String s3 = in.next();
        String s4 = in.next();
        int keys = d.getKey(s3, k);
        int keys2 = d.getKey(s4, k);
        System.out.println(amount[keys][keys2]);

    }
}