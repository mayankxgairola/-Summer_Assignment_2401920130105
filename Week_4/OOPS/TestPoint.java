public class TestPoint {

    public static void main(String[] args) {

        Point p1 = new Point();
        p1.display();

        Point p2 = new Point(5, 10);
        p2.display();

        p2.setX(20);
        p2.setY(30);
        p2.display();

        p2.setXY(100, 200);
        p2.display();

    }

}
