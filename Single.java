
class InstanceError extends Exception {
    InstanceError() {
        super("No more instance Possible");
    }
}

class Singleton {
    private static int count = 2;

    private Singleton() {
        System.out.println("Creation Completed");
        count--;
    }

    static Singleton create() throws InstanceError {
        if (count > 0) {
            return new Singleton();
        }
        throw new InstanceError();
    }
}

public class Single {

    public static void main(String[] args) {
        try {
            Singleton single = Singleton.create();
            Singleton single2 = Singleton.create();
            if (single == single2) {
                System.out.println("same");
            }
        } catch (InstanceError e) {
            System.out.println(e.getMessage());
        }
        System.out.println("Continue");
    }
}
