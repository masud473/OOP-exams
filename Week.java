class TermDay {
    private int day;// 0-6
    private int week;// 0-7

    public void changeweek(int x) {
        if (x < 0 || x > 7) {
            {
                throw new RuntimeException("Invalid Arguments");
            }
        } else
            week = x;
    }

    public void changeday(int x) {
        if (x < 0 || x > 6) {
            {
                throw new RuntimeException("Invalid Arguments");
            }
        } else
            day = x;
    }
}

public class Week {

    public static void main(String[] args) {
        TermDay t = new TermDay();
        t.changeday(5);
        t.changeweek(1);
    }
}
