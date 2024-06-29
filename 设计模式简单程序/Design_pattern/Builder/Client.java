package Builder;

public class Client {
    //盖房子的客户      需求方
    public static void main(String[] args) {
        //盖普通房子
        DirectorHouse dh = new DirectorHouse(new CommonHouse());
        dh.setHouseBuilder(new CommonHouse());
        House house = dh.BuilderHouse();
        System.out.println(house + "\n-----------------------------");
        //盖高楼
        dh.setHouseBuilder(new HigthBuilder());
        System.out.println(dh.BuilderHouse());
    }
}
