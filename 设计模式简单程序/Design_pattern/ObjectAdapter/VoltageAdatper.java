package ObjectAdapter;

public class VoltageAdatper implements Voltage {
    //电源转接口      使用的是聚合关系
    protected Voltage220v voltage220v;

    VoltageAdatper(Voltage220v voltage220) {
        this.voltage220v = voltage220;
    }

    public int charging5v() {
        if (voltage220v == null) {
            System.out.println("exit!");
            return 0;
        }
        int src = voltage220v.Voltage220();
        return src / 44;
    }

    public int charging20v() {
        return 0;
    }
}
