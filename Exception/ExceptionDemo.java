package Exception;

class Error {
     void check(int age) throws Exception {
        if (age < 19) {
            throw new Exception("You will not pass");
        }
        System.out.println("You shall pass");
    }
}

public class ExceptionDemo {

    public static void main(String[] args) {
        try {
           new Error().check(9);
        } catch (Exception e) {
            System.out.println(e.getMessage());
        }
    }
}