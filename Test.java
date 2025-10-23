
class Fruit {
    int x = 1;

    void f() {
        System.out.println("fruit");
    }
}

class Apple extends Fruit {
    int x = 2;

    void f() {
        System.out.println("Apple");
    }
}

class Orange extends Fruit {
    void o() {
        System.out.println("Orange");
    }

}

class GoldenDelicious extends Apple {
    int x = 3;

    void f() {
        System.out.println("Golden Delicious");
    }
}

class Macintosh extends Apple {
    void mc() {
        System.out.println("Macintosh");
    }
}

public class Test {
    public static void main(String[] args) {
        Fruit fruit = new GoldenDelicious();
        // children-grandchildren can use my property but i can't use theirs
        // child instance also equals to decendent
        fruit.f();
        System.out.println(fruit.x);
    }
}
