package Strategy;

//野鸭
public class WildDuck extends Duck {

    WildDuck() {
        flybeha = new GoodFly();
    }

    @Override
    void disPlay() {
        System.out.println("this is a wildDuck");
    }
}
