package Builder;

public class CommonHouse extends HouseBuilder {
    //普通房子
    @Override
    public void builderBaise() {
        house.setBaise("地基5m！");
        System.out.println("打普通地基5m深！");
    }

    @Override
    public void builderwall() {
        house.setWall("砌墙10cm！");
        System.out.println("砌普通墙10cm厚！");
    }

    @Override
    public void roofed() {
        house.setRoofed("屋顶3m！");
        System.out.println("盖普通屋顶3m高！");
    }
}
