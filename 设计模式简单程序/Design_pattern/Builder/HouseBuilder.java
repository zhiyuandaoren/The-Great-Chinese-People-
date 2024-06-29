package Builder;

public abstract class HouseBuilder {
    //建造房子的抽象类
    protected House house = new House();

    public House getHouse() {
        return house;
    }

    public abstract void builderBaise();

    public abstract void builderwall();

    public abstract void roofed();
}
