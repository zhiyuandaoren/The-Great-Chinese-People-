package ObjectAdapter;

public class Client {
    //客户
    public static void main(String[] args) {
        System.out.println("对象适配器");
        Phone ph = new Phone();
        VoltageAdatper v = new VoltageAdatper(new Voltage220v());
        ph.charging(v);
        System.out.println("Charging over!");
    }
}
