package Builder;

public class DirectorHouse {
    //指挥者
    HouseBuilder houseBuilder = null;

    DirectorHouse(HouseBuilder houseBuild) {
        this.houseBuilder = houseBuild;
    }

    public void setHouseBuilder(HouseBuilder houseBuild) {
        this.houseBuilder = houseBuild;
    }

    //建造顺序由指挥者来决定
    House BuilderHouse() {
        houseBuilder.builderBaise();
        houseBuilder.builderwall();
        houseBuilder.roofed();
        return houseBuilder.getHouse();
    }
}
