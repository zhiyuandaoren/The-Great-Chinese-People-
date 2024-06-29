package ClassAdapter;

public class VoltageAdatper extends Voltage220v implements Voltage {
    //电源转接口
    public int charging5v() {
        int src = Voltage220();
        return src / 44;
    }

    public int charging20v() {
        return 0;
    }
}
