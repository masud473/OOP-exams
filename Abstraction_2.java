interface A {
    public void temp();

    public default void func() {// use default to have abstract class like facilities
        System.out.println("Something");
    }
}

class B implements A {// implement with outer class
    @Override
    public void temp() {
        System.out.println("Something else");
    }
}

public class Abstraction_2 {
    public static void main(String[] args) {
        B b = new B();
        b.func();
        b.temp();
        A a = new A() {// inplement with inner anonymous class
            @Override
            public void temp() {
                System.out.println("Something");
            }
        };
        a.func();
    }
}
