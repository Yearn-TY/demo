package test;
import java.awt.Rectangle;
import javax.swing.JFrame;
import java.awt.Color;
import java.awt.Graphics;
import java.awt.Graphics2D;
import java.awt.geom.Ellipse2D;
import java.awt.geom.Line2D;
import javax.swing.JComponent;
public class test extends JComponent{
	public void paintComponent(Graphics g){
		Graphics2D g2=(Graphics2D) g;
		Ellipse2D.Double head=new Ellipse2D.Double(5,10,100,150);
		g2.draw(head);
		g2.setColor(Color.GREEN);
		Rectangle eye=new Rectangle(25,70,15,15);
		g2.fill(eye);
		eye.translate(50, 0);
		g2.fill(eye);
		Line2D.Double mouth=new Line2D.Double(30, 110, 80, 110);
		g2.setColor(Color.RED);
		g2.draw(mouth);
		g2.setColor(Color.BLUE);
		g2.drawString("Hello!My name is h,s happy dog!", 5, 175);
	}
//	public Rectangle box=new Rectangle(20,35,20,35);
	
	public static void main(String[] args) {
		JFrame frame=new JFrame();
		frame.setSize(150,125);
		frame.setTitle("An Alian Face");
		frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		test component=new test();
		frame.add(component);
		frame.setVisible(true);
		
	}

}
