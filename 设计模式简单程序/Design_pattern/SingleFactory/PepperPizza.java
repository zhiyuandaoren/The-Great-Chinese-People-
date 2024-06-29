package SingleFactory;

public class PepperPizza extends Pizza {
    //披萨种类
    public void prepare() {
        setName("胡椒披萨");
        System.out.println("PepperPizza");
    }
}
