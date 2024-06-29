package AbsFactory;

import java.io.BufferedReader;
import java.io.InputStreamReader;

public class BJOrdType {//北京工厂子类，伦敦的同理
    IPizzaFactory iPizzaFactory;

    BJOrdType(IPizzaFactory Factory) {
        setiPizzaFactory(Factory);
    }

    //只要是成员变量都是要有set方法的，不然就没有意义
    private void setiPizzaFactory(IPizzaFactory factory) {
        this.iPizzaFactory = factory;
        Pizza pizza = null;
        String order = null;
        do {
            order = getType();//这里的工厂可能是北京的，也有可能是伦敦的
            pizza = iPizzaFactory.createPizza(order);
            if (pizza == null) {
                break;
            }
            System.out.println("使用抽象工厂模式");
            pizza.prepare();
            pizza.bake();
            pizza.cut();
            pizza.box();
            System.out.println("您的" + pizza.name + "请收好！");
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
