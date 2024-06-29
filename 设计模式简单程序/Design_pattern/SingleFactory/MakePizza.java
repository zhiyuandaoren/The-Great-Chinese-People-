package SingleFactory;

//真正使用的类，可能是控制器，服务层
public class MakePizza {
    public static void main(String[] args) {
        new OrdType(new PizzaFactory());
        System.out.println("Make pizza over!");
    }
}
