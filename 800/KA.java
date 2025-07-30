class Animal {
    void sound() {
        System.out.println("Animal makes sound");
    }
}

class Dog extends Animal {
    void sound() {
        System.out.println("Dog barks");
    }
}

public class KA {
    public static void main(String[] args) {
        Animal a = new Dog();  // Upcasting
        a.sound();             // Dynamic binding
    }
}
