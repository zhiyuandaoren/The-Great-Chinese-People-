package SingleFactory;

public class CheesePizza extends Pizza{
    public void prepare(){
        setName("芝士披萨");
        System.out.println("CheesePizza");
    }
}
