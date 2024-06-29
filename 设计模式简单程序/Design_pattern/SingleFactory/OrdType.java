package SingleFactory;

import java.io.BufferedReader;
import java.io.InputStreamReader;

//使用工厂制造披萨的类，创建披萨的方式有很多种，这个算是烤的，可能还有冷的、麻辣、香辣、甜...
public class OrdType {
    PizzaFactory pizzaFactory;
    Pizza pizza;

    OrdType(PizzaFactory pizzafact) {
        this.pizzaFactory = pizzafact;
        setPizzaFactory();
    }

    public void setPizzaFactory() {
        String order = "";
        do {
            order = getType();
            pizza = pizzaFactory.createPizza(order);
            if (pizza != null) {
                System.out.println("欢迎制作披萨！");
                pizza.prepare();
                pizza.bake();
                pizza.cut();
                pizza.box();
                System.out.println("制作完成！");
            } else {
                System.out.println("订购披萨失败，没有您需要的披萨");
                break;
            }
        } while (true);
    }

    public String getType() {
        try {
            BufferedReader strin = new BufferedReader(new InputStreamReader(System.in));
            System.out.println("input pizza type:");
            String str = strin.readLine();
            return str;
        } catch (Exception e) {
            e.printStackTrace();
        }
        return "";
    }
}
