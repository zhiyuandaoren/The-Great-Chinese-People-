package Strategy;

public abstract class Duck {
    Flybeha flybeha;

    Duck() {
        disPlay();
        quack();
        swim();
    }

    abstract void disPlay();

    void quack() {
        System.out.println("鸭子会叫~~~");
    }

    void swim() {
        System.out.println("鸭子会游泳~~~");
    }

    void fly() {
        if (flybeha != null) {
            flybeha.Fly();
        } else {
            System.out.println("fly failed");
        }
    }

    public void setFlybeha(Flybeha flybeha) {
        this.flybeha = flybeha;
    }
}
