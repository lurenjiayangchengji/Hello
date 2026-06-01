public class Circle {
    double radius;

    Circle(double r){
        radius=r;
    }
    void set(double r) {
        if (r>0) radius=r;
    }
    double get(){
        return radius;
    }
    double getArea(){
        return 3.1416*radius*radius;
    }

    double getPerimeter(){
        return 2*3.1416*radius;
    }
}
