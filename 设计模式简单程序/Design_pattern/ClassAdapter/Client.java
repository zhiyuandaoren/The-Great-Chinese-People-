package ClassAdapter;

public class Client {
    //客户
    public static void main(String[] args) {
        Phone ph = new Phone();
        ph.charging(new VoltageAdatper());
        System.out.println("Charging over!");
    }
}
