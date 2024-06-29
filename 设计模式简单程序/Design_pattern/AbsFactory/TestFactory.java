package AbsFactory;

public class TestFactory {
    //测试类
    public static void main(String[] args) {
        new BJOrdType(new BJFactory());
        System.out.println("结束~！");
    }
}
