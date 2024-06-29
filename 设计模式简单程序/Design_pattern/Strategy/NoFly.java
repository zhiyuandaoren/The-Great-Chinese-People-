package Strategy;

public class NoFly implements Flybeha {

    @Override
    public void Fly() {
        System.out.println("该物种不能飞！");
    }
}
