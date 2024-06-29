package SingleFactory;

//制作披萨的工厂，只负责制造披萨
public class PizzaFactory {
    public Pizza createPizza(String orderType) {
        Pizza piza = null;
        if (orderType.equals("Greek")) {
            piza = new GreekPizza();
        } else if (orderType.equals("Cheese")) {
            piza = new CheesePizza();
        } else if (orderType.equals("Pepper")) {
            piza = new PepperPizza();
        }
        return piza;
    }
}
