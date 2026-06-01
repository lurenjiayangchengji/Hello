public class Example4_7 {
    public static void main(String[] args) {
        Circle circle = new Circle(99);
        Rectangle rectangle = new Rectangle(99, 66);

        Geometry geometry = new Geometry(circle, rectangle);

        System.out.print(" 圆的信息 ");
        System.out.println();
        geometry.printCircle();
        System.out.print("矩形");
        System.out.println();
        geometry.printRectangle();
    }
}
