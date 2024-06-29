package InterfaceAdpater;

public class Client {

    public static void main(String[] args) {
        AbstartAdatper aba = new AbstartAdatper() {
            @Override
            public void m1() {
                System.out.println("接口适配器");
            }
        };
        aba.m1();
    }
}
