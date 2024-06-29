package ClassAdapter;

public class Phone {
    //手机
    void charging(Voltage voltage5v) {
        int src = voltage5v.charging5v();
        if (src == 5) {
            System.out.println("转成5 伏，充电成功！！");
        } else {
            System.out.println("转化失败！");
        }
    }
}
