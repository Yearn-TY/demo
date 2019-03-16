
// 细胞自动机（30分）
// 题目内容：
// 这是细胞自动机的非图形版本。细胞自动机是指在一个二维网格内，每一个网格是一个细胞。每个细胞有活和死两种状态。
// 初始时刻，有些细胞是活的，有些细胞是死的。自动机的每一步，根据每个细胞周围8个格子内的其他细胞的生存情况决定这个细胞下一步是否存活。具体的规则如下：
// 如果该细胞现在是活的，并且周围8个格子中有2或3个活着的细胞，则继续存活；如果周围8个格子中的活着的细胞数量少于2个或多于3个，则死亡；
// 如果该细胞现在是死的，并且周围8个格子中正好有3个活着的细胞，则细胞复活。
// 位于整个网格边缘和顶角的细胞，它的周围细胞可能少于8个。即越过网格的边界不再有细胞。
// 每ge细胞的生死变化，都不会影响当前这一步周围的细胞，只会在下一步表现出来。
// 提示：课程中的代码与上一句描述不同。
// 输入格式:
// 首先输入两个正整数，范围为[3,102]，依次表示网格的宽度和高度。
// 然后输入多组正整数，依次表示一个活着的细胞的网格位置，每组数字中，第一个表示行号，第二个表示列号，均从0开始编号。
// 最后，以“-1 -1”表示不再有活着的细胞。-1 -1不是有效的位置。
// 然后，以一个正整数，范围为[1,10000]，表示要求细胞自动机执行的步数。
// 输出格式：
// 输出一个正整数，表示执行完毕后，剩下的活着的细胞的数量。
// 输入样例：
// 3 3
// 1 1 1 2 0 1 2 1
// -1 -1
// 1
// 输出样例：
// 7

import java.util.Scanner;

public class Main {

    // 1代表活着，0代表死亡,2代表即将死亡，3代表即将复活

    public static void main(String[] args) {

        // TODO 自动生成的方法存根
        int col, row;
        int num1, num2, step;
        int aliveNum;
        Scanner in = new Scanner(System.in);
        row = in.nextInt();
        col = in.nextInt();
        int[][] cell = new int[col][row];
        for (int i = 0; i < col; i++)
            for (int j = 0; j < row; j++)
                cell[i][j] = 0;
        num1 = in.nextInt();
        num2 = in.nextInt();
        while (num1 != -1 && num2 != -1) {
            cell[num1][num2] = 1;
            num1 = in.nextInt();
            num2 = in.nextInt();
        }
        step = in.nextInt();
        while (step > 0) {
            // 执行死亡和复活
            for (int i = 0; i < col; i++) {
                for (int j = 0; j < row; j++) {
                    if (cell[i][j] == 2) {
                        cell[i][j] = 0;
                    }
                    if (cell[i][j] == 3) {
                        cell[i][j] = 1;
                    }
                }
            }
            step--;
            for (int i = 0; i < col; i++) {
                for (int j = 0; j < row; j++) {
                    aliveNum = 0;
                    for (int k = -1; k <= 1; k++) {
                        for (int m = -1; m <= 1; m++) {
                            if (i - k < 0 || j - m < 0 || i - k >= col || j - m >= row)
                                continue;
                            if (i - k == i && j - m == j)
                                continue;
                            if (cell[i - k][j - m] == 1 || cell[i - k][j - m] == 2)
                                aliveNum++;
                        }
                    }
                    if (cell[i][j] == 0 && aliveNum == 3) {
                        cell[i][j] = 3;
                    } else if ((aliveNum < 2 || aliveNum > 3) && cell[i][j] == 1) {
                        cell[i][j] = 2; // 等待死亡
                    }
                }
            }
        }
        // 统计存活数量
        aliveNum = 0;
        for (int i = 0; i < col; i++)
            for (int j = 0; j < row; j++)
                if (cell[i][j] == 1 || cell[i][j] == 3)
                    aliveNum++;
        System.out.println(aliveNum);

    }

}