public class Geometry {
    Circle circle;
    Rectangle re;

    Geometry(Circle c, Rectangle r) {
        circle = c;
        re = r;
    }

    void printCircle() {
        System.out.println("圆的半径：" + circle.get());
        System.out.println("圆的面积：" + circle.getArea());
        System.out.println("圆的周长：" + circle.getPerimeter());
    }

    void printRectangle() {
        System.out.println("矩形的宽：" + re.getWidth());
        System.out.println("矩形的高：" + re.getHeight());
        System.out.println("矩形的面积：" + re.getArea());
        System.out.println("矩形的周长：" + re.getPerimeter());
    }
}
