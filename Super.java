
class A {
    int a;
    int b;

    A(int a, int b) {
        this.a = a;
        this.b = b;
    }

    void func() {
        System.out.println("Something");
    }
}

class B extends A {
    B(int a, int b) {
        super(a, b);
    }

    void b() {
        super.func();
    }
}

public class Super {
    public static void main(String[] args) {
        B b = new B(4, 5);
        System.out.println(b.a + b.b);
        b.func();
    }
}