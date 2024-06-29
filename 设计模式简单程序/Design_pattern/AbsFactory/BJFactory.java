package AbsFactory;

public class BJFactory implements IPizzaFactory {
    @Override
    public Pizza createPizza(String orderType) {
        Pizza pizza = null;
        if (orderType.equals("Cheese")) {
            pizza = new BJCheesePizza();
        } else if (orderType.equals("Greek")) {
            pizza = new BJGreekPizza();
        } else {
            System.out.println("您要的披萨不存在！");
        }
        return pizza;
    }
}
