class Shape {
    // Method to get area
    public double getArea() {
        return 0;
    }
}

// Subclass Rectangle
class Rectangle extends Shape {
    double length;
    double width;

    // Constructor
    Rectangle(double length, double width) {
        this.length = length;
        this.width = width;
    }

    // Overriding getArea() method
    @Override
    public double getArea() {
        return length * width;
    }
}

// Main class
public class Main {
    public static void main(String[] args) {
        Rectangle rect = new Rectangle(10, 5);

        System.out.println("Area of Rectangle: " + rect.getArea());
    }
}