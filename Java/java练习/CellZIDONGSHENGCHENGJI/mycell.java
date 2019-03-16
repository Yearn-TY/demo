import java.util.Scanner;

public class mycell {
    private int width = 0;
    private int height = 0;
    private int[] x;
    private int[] y;
    private int[][] cells;

    // chu shi hua
    public mycell(int width, int height, int i) {
        this.width = width;
        this.height = height;
        this.x = new int[i];
        this.y = new int[i];
        this.cells = new int[width][height];

    }

    private int ab = 0;

    // chu shi hua cell wei zhi
    public void getamount(int x, int y, int i) {
        this.x[i] = x;
        this.y[i] = y;
        this.ab = i;
    }

    // chu shi hua xi bao
    public void cell() {
        for (int i = 0; i < width; i++) {
            for (int j = 0; j < height; j++) {
                cells[i][j] = 0;
            }
        }
        for (int i = 0; i < ab; i++) {
            cells[x[i]][y[i]] = 1;
        }
    }

    public int getcell(int x, int y) {
        return cells[x][y];
    }

    private int w = -1;
    private int a = -1;
    private int s = 1;
    private int d = 1;

    // check the amount of cells(alive);
    public int amount(int x, int y) {
        int amount = 0;
        if (cells[x][y] == 1)
            amount++;
        if (x == 1) {
            if (y == 1) {
                if (cells[x][y + d] == 1)
                    amount++;
                if (cells[x + s][y + d] == 1)
                    amount++;
                if (cells[x + s][y] == 1)
                    amount++;
            } else if (y == width) {
                if (cells[x + w][y] == 1)
                    amount++;
                if (cells[x][y + d] == 1)
                    amount++;
                if (cells[x + w][y + d] == 1)
                    amount++;
            } else {
                if (cells[x][y + d] == 1)
                    amount++;
                if (cells[x + s][y + d] == 1)
                    amount++;
                if (cells[x + s][y] == 1)
                    amount++;
                if (cells[x + w][y] == 1)
                    amount++;
                if (cells[x + w][y + d] == 1)
                    amount++;
            }
        } else if (x == height) {
            if (y == 1) {
                if (cells[x + s][y] == 1)
                    amount++;
                if (cells[x][y + a] == 1)
                    amount++;
                if (cells[x + s][y + a] == 1)
                    amount++;
            } else if (y == width) {
                if (cells[x + w][y] == 1)
                    amount++;
                if (cells[x][y + a] == 1)
                    amount++;
                if (cells[x + w][y + a] == 1)
                    amount++;
            } else {
                if (cells[x + s][y] == 1)
                    amount++;
                if (cells[x][y + a] == 1)
                    amount++;
                if (cells[x + s][y + a] == 1)
                    amount++;
                if (cells[x + w][y] == 1)
                    amount++;
                if (cells[x + w][y + a] == 1)
                    amount++;
            }
        } else {
            if (cells[x + s][y] == 1)
                amount++;
            if (cells[x + s][y + a] == 1)
                amount++;
            if (cells[x + s][y + d] == 1)
                amount++;
            if (cells[x + w][y] == 1)
                amount++;
            if (cells[x + w][y + a] == 1)
                amount++;
            if (cells[x + w][y + d] == 1)
                amount++;
            if (cells[x][y + a] == 1)
                amount++;
            if (cells[s][y + d] == 1)
                amount++;

        }
        return amount;
    }

    public int allamount() {
        int amount = 0;
        for (int i = 0; i < width; i++) {
            for (int j = 0; j < height; j++) {
                if (cells[i][j] == 1)
                    amount++;
            }
        }
        return amount;
    }

    public boolean isAlive(int x) {
        if (x == 0)
            return false;
        return true;
    }

    public void alive(int x, int y) {
        cells[x][y] = 1;
    }

    public void die(int x, int y) {
        cells[x][y] = 0;
    }

    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);
        int width = in.nextInt();
        int height = in.nextInt();
        int x[] = new int[102];
        int y[] = new int[102];
        int i = 0;
        for (i = 0;; i++) {
            x[i] = in.nextInt();
            y[i] = in.nextInt();
            if (x[i] == -1 && y[i] == -1) {
                break;
            }
        }
        int n = in.nextInt();// zi dong ji run's steps
        mycell mc = new mycell(width, height, i);

        for (int j = 0; j < i; j++) {
            mc.getamount(x[j], y[j], j);
        }
        for (int l = 0; l < width; l++) {
            for (int j = 0; j < height; j++) {
                if (mc.isAlive(mc.getcell(l, j))) {
                    if (mc.amount(l, j) < 2 || mc.amount(l, j) > 3) {
                        mc.die(l, j);
                    }

                } else {
                    if (mc.amount(l, j) == 3)
                        mc.alive(l, j);
                }
            }
        }
        int alla = mc.allamount();
        System.out.println(alla);
    }
}