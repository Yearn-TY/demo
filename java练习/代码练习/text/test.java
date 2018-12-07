import java.util.Date

//texe类测试访问null值的对象
public class test {
    public void showDate(Date d) {
        System.out.println(d);
    }

    // java程序主入口方法
    public static void main(String[] args) {
        // 创建test类的对象实例，应用为t
        test t=new test();
        //创建一个Data，即日期类的对象实例，应用为d
        Date d=new Date();
        //调用showDate方法来显示时间
        t.showDate(d);
    }
}