package Builder;

public class HigthBuilder extends HouseBuilder {
    //高楼
    @Override
    public void builderBaise() {
        house.setBaise("地基25m！");
        System.out.println("打高楼地基25m深！");
    }

    @Override
    public void builderwall() {
        house.setWall("砌墙20m！");
        System.out.println("砌高楼墙20cm厚！");
    }

    @Override
    public void roofed() {
        house.setRoofed("屋顶9m！");
        System.out.println("盖高楼屋顶9m高！");
    }
}
