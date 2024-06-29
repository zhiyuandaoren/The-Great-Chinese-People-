package Factory;

import java.io.BufferedReader;
import java.io.InputStreamReader;

//使用工厂制造披萨的类，创建披萨的方式有很多种，这个算是烤的，可能还有冷的、麻辣、香辣、甜...
public abstract class OrdType {
    public abstract Pizza setPizzaFactory(String order);

    //公共的方法由抽象的构造器写出来
    OrdType() {
        Pizza pizza = null;
        String order = null;
        do {
            order = getType();
            pizza = setPizzaFactory(order);//具体方法由子类实现
            if (pizza == null) {
                break;
            }
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
