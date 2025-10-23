interface A {
    void a();
}

interface B {
    void b();
}

interface C {
    void c();
}

class D implements A, B, C {
    @Override
    public void a() {
        System.out.println(1);
    }

    @Override
    public void b() {
        System.out.println(2);

    }

    @Override
    public void c() {
        System.out.println(3);
    }
}

public class MultiInheritance {
    public static void main(String[] args) {
        D d = new D();
        d.a();
        d.b();
        d.c();

    }
}
