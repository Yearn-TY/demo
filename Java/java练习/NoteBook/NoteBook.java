
import java.util.ArrayList;

public class NoteBook {
    // 泛型类，即容器类型，尖括号中是数据类型
    private ArrayList<String> notes = new ArrayList<String>();

    public void add(String s) {
        notes.add(s);// ArrayList中有add函数
    }

    public void add(int location, String s) {
        notes.add(location, s);
    }

    public int getSize() {
        return notes.size();// 同上
    }

    public String getNote(int index) {
        return notes.get(index);// 同上
    }

    public void removeNote(int index) {
        notes.remove(index);
    }

    public String[] list() {

        String[] a = new String[notes.size()];
        // for (int i = 0; i < notes.size(); i++) {
        // a[i] = notes.get(i);
        // }
        notes.toArray(a);// 就是上面的循环
        return a;
    }

    public static void main(String[] args) {
        NoteBook nb = new NoteBook();
        nb.add("First");
        nb.add("second");
        nb.add(1, "third");
        System.out.println(nb.getSize());
        System.out.println(nb.getNote(1));
        nb.removeNote(1);
        System.out.println(nb.getNote(1));
        String[] a = nb.list();
        for (String s : a) {
            System.out.println(s);
        }
    }
}