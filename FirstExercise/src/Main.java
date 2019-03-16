
import java.util.Scanner;


public class Main {
	
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		Fraction a = new Fraction(in.nextInt(), in.nextInt());
		Fraction b = new Fraction(in.nextInt(),in.nextInt());
		a.print();
		b.print();
		a.plus(b).print();
		a.multiply(b).plus(new Fraction(5,6)).print();
		a.print();
		b.print();
		in.close();
	}
	
}
class Fraction{
	double x;
	int a;
	int b;
	public Fraction(int a, int b) {
		this.x=a/b;
		this.a=a;
		this.b=b;
	}

	public void print() {
		System.out.println(a+"/"+b);
	}

	public Fraction plus(Fraction b) {
		
		return null;
	}

	public Object multiply(Fraction b) {
		// TODO Auto-generated method stub
		return null;
	}
	
}
