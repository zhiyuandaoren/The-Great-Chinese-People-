package Factory;

public class BJPizzaFactory extends PizzaFactory {
    @Override
    public Pizza createPizza(String orderType) {
        Pizza pizza = null;
        if (orderType.equals("Cheese")) {
            pizza = new BJCheesePizza();
        } else {
            System.out.println("您要的披萨不存在！");
        }
        return pizza;
    }
}
