abstract class A {
    void func() {
        System.out.println("Something");
    }

    abstract void temp();
}

class B extends A {
    @Override
    void temp() {
        System.out.println("Something Else");
    }
}

interface C {
    void func();
}

class D implements C {
    @Override
    public void func() {
        System.out.println("D implements C");
    }
}

public class Abstract {
    public static void main(String[] args) {
        B b=new B();
        b.func();
        b.temp();
        D d =new D();
        d.func();
    }
}
