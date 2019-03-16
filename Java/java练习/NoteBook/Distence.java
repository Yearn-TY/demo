// 输入格式:
// 首先，你会读到若干个城市的名字。每个名字都只是一个英文单词，中间不含空格或其他符号。
// 当读到名字为“###”（三个#号）时，表示城市名字输入结束，###并不是一个城市的名字。如果记读到的城市名字的数量为n。
// 然后，你会读到nxn的一个整数矩阵。
// 第一行的每一个数字，表示上述城市名单中第一个城市依次到另一个城市之间的里程。表中同一个城市之间的里程为0。
// 最后，你会读到两个城市的名字。
// 输出格式：
// 输出这两个城市之间的距离。

// 输入样例：
// Hagzou	Hugzou	Jigxng    ###
// 0	     1108	 708
// 1108	       0	 994
// 708	      994	  0
// Hagzou    Jigxng

// 输出样例：
// 708

import java.util.ArrayList;
import java.util.Scanner;

public class Distence {
    private ArrayList<String> city = new ArrayList<String>();

    public void add(String s) {
        city.add(s);
    }

    public int getSize() {
        return city.size();
    }

    private int[][] dis = new int[city.size()][city.size()];

    public void setdis(int s) {

    }

    public String getDistence(int index) {
        return city.get(index);
    }

    public static void main(String[] args) {
        int n=0;
        Distence d = new Distence();
        for(;;){
            Scanner in = new Scanner(System.in);
            String ss = in.nextString();
            d.add(ss);
            n++;
        }
        int [][] dis=new int [d.city.sisze()][d.city.size()];
        for()
        System.out.println();
    }
}