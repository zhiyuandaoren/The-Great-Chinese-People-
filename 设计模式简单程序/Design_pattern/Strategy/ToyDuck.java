package Strategy;

public class ToyDuck extends Duck{
    //用到的话，改一下实现类就行了，对于扩展比较方便
    ToyDuck(){
        flybeha = new NoFly();
    }

    @Override
    void disPlay() {
        System.out.println("this is a ToyDuck");
    }
}
