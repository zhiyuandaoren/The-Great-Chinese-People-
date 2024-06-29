package Factory;

//制作披萨的抽象工厂类，
public abstract class PizzaFactory {
    public abstract Pizza createPizza(String orderType);
}
