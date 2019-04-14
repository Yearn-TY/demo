
import java.util.Scanner;

public class Calendars {

	public Calendars() {
		
	}

	public static void main(String[] args) {
		Scanner in=new Scanner(System.in);
		Calendars calendars=new Calendars();
		Years years=new Years(in.nextInt());
		Weeks weeks=new Weeks(in.nextInt());
		years.OutYear();
		weeks.OutWeek();
	}

}
