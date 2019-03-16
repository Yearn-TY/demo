import java.util.Scanner;

//有问题，
public class AddAndMul {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        Fraction a = new Fraction(in.nextInt(), in.nextInt());
        Fraction b = new Fraction(in.nextInt(), in.nextInt());
        Fraction c = new Fraction(a.aa, a.bb);
        Fraction d = new Fraction(a.aa, a.bb);

        a.print();
        b.print();
        a.plus(b).print();
        a = c;
        // 执行完下一句后c和a的值为什么都会变，难道是上一步传递的是地址，这里进行的是类似于指针的操作？
        a.multiply(b).plus(new Fraction(5, 6)).print();
        a = d;
        a.print();
        b.print();
        in.close();
    }
}

class Fraction {
    int aa = 0;
    int bb = 0;
    private int min = 1;

    private int max = 1;

    public Fraction(int aa, int bb) {
        this.aa = aa;
        this.bb = bb;
    }

    public void print() {
        if (aa == bb)
            System.out.println("1");
        else if (aa != bb) {
            if (aa > bb) {
                min = bb;
                while (min > 0) {
                    if ((aa % min == 0) && (bb % min == 0)) {
                        aa = aa / min;
                        bb = bb / min;
                        break;
                    } else {
                        min--;
                    }
                }
            } else {
                min = aa;
                while (min > 0) {
                    if ((aa % min == 0) && (bb % min == 0)) {
                        aa = aa / min;
                        bb = bb / min;
                        break;
                    } else {
                        min--;
                    }
                }
            }
            System.out.println(aa + "/" + bb);
        }
    }

    Fraction plus(Fraction b) {
        aa = aa * b.bb + b.aa * bb;
        bb = bb * b.bb;
        return (new Fraction(aa, bb));
    }

    Fraction multiply(Fraction b) {
        aa = aa * b.aa;
        bb = bb * b.bb;
        return (new Fraction(aa, bb));
    }
}