package Factory;

public class BJOrdType extends OrdType {
    @Override
    public Pizza setPizzaFactory(String order) {
        Pizza pizza = null;
        if (order.equals("Cheese")) {
            pizza = new BJCheesePizza();
        } else if (order.equals("Greek")) {
            pizza = new BJGreekPizza();
        } else {
            System.out.println("没有你要的种类");
        }
        return pizza;
    }
}
