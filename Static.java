class A {
    static void func() {
        System.out.println("A");
    }

    void temp() {
        System.out.println("B");
    }
}

public class Static {
    public static void main(String[] args) {
        A.func();// static
        new A().temp();//non-static
    }
}
