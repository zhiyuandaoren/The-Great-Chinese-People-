package Factory;

public abstract class Pizza {
    String name;
    public abstract void prepare();

    public void setName(String name){
        this.name=name;
    }

    public void bake(){
        System.out.println(name+"------正在烤");
    }

    public void cut(){
        System.out.println(name+"------正在切！");
    }

    public void box(){
        System.out.println(name+"------打包！");
    }
}

