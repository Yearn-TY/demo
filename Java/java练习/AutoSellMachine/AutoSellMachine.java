public class AutoSellMachine {
    private int price;
    private int balance;
    private int total;

    void showPrompt() {
        System.out.println("Welcome!!!");
    }

    void inserMoney(int amount) {
        balance = balance + amount;
    }

    void showBalance() {
        System.out.println(balance);
    }

    void getFood() {
        if (balance >= price) {
            System.out.println("Here you are!");
            balance = balance - prince;
            total = total + price;
        }
    }

    public static void main(String[] args) {
        AutoSellMachine
    }
}