// public class Test {
//     public static void main(String[] args) {
//         Integer n1 = new Integer(47);
//         Integer n2 = new Integer(47);
//         System.out.println(n1 == n2);//Why n1 != n2?
//     }
// }
public class Test {
    public int t = 4;

    public static void main(String[] args) {
        new Test().NumberPlay();
    }

    public void NumberPlay() {
        int t=2;
        t = t+5;
        this.t = this.t-2;
        t = t-this.t;
        System.out.println(t+this.t+”ok”);//why ouput is "7ok"? 
    }
}