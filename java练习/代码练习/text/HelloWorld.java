public class HelloWorld {
    int i = 55;
    int j = 22;
    char c1 = 'f';
    char c2 = 'e';

    public static void main(String[] args) {
        HelloWorld h1 = new HelloWorld();
        int n = h1.i - h1.j;

        System.out.println(n);

        System.out.println(h1.i * h1.j);

        System.out.println("Hello World\n" + n + " " + h1.c1 + "\nhello world\n");
    }
}