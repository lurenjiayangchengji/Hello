public class Rectangle {
    double width;
    double height;

    // 构造方法
    Rectangle(double w, double h) {
        width = w;
        height = h;
    }

    void setWidth(double w) {
        if (w > 0) width = w;
    }

    void setHeight(double h) {
        if (h > 0) height = h;
    }

    double getWidth() {
        return width;
    }

    double getHeight() {
        return height;
    }

    // 面积
    double getArea() {
        return width * height;
    }

    // 周长
    double getPerimeter() {
        return 2 * (width + height);
    }
}
