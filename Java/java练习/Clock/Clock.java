public class Clock {
    private Display hour = new Display(24);
    private Display minute = new Display(60);
    private Display second = new Display(60);

    public Clock(int hour, int minute, int second) {
        this.hour.setValue(hour);
        this.minute.setValue(minute);
        this.second.setValue(second);
    }

    // private int flagSecond = 0;
    private int flagMinute = 0;
    // private int flagHour = 0;
    private int c = 1000;

    // clock run and display everytime
    public void tick() {
        while (true) {
            c = 1000;
            while (c > 0)
                c--;
            second.increase();
            if (second.getValue() == 0) {
                minute.increase();
                flagMinute = 1;
            }
            if (minute.getValue() == 0 && flagMinute == 1) {
                hour.increase();
            }
            System.out.printf("%02d:%02d:%02d\n", hour.getValue(), minute.getValue(), second.getValue());
        }
    }

    // public void tick() {
    // while (c > 0)
    // c--;
    // second.increase();
    // if (second.getValue() == 0) {
    // minute.increase();
    // flagMinute = 1;
    // }
    // if (minute.getValue() == 0) {
    // if (flagMinute == 1)
    // hour.increase();
    // }
    // System.out.printf("%02d:%02d:%02d\n", hour.getValue(), minute.getValue(),
    // second.getValue());
    // }
}