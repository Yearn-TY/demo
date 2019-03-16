class Base {
    private Base() {
        System.out.println(0);
    }

    public Base(int i) {
        System.out.println(i);
    }
}

public class Shape extends Base {
    public Shape() {
        super(1);
    };

    public static void main(String argv[]) {
        Shape t = new Shape();
    }
}