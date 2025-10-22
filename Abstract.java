

// Abstract class A
abstract class A {
    // Concrete method
    void func() {
        System.out.println("Something");
    }

    // Abstract method
    abstract void temp();
}

// Class B extends A
class B extends A {
    // Implementing abstract method
    @Override
    void temp() {
        System.out.println("Something Else");
    }
}

// Interface C
interface C {
    // Abstract method
    void func();
}

// Class D implements C
class D implements C {
    // Implementing interface method
    @Override
    public void func() {
        System.out.println("D implements C");
    }
}

// Main class
public class Abstract {
    public static void main(String[] args) {
        // Create object of B
        B b = new B();
        // Call methods
        b.func();
        b.temp();
        // Create object of D
        D d = new D();
        // Call method
        d.func();
    }
}
