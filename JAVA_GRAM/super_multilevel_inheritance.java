/*
 * super keyword is used to access the parent class member
 * super can be used to refer immediate parent class instance variable
 * we can directly access grand parent data in grand child class
 * in can of multilevel inheritance, super.super is not allowed, we can access grand parent data by creating its object
 
 */

class A {
    int x = 10;
    int y = 20;
}

class B extends A {
    int x = 100;

    void Bx() {
        System.out.println("Bx = " + x);
    }

    void Ax() {
        System.out.println("Ax = " + super.x);
    }
}

class C extends B {
    int x = 1000;

    void Cx() {
        System.out.println("Cx = " + x); // directly access its own memeber by default
    }

    void Bx() {
        System.out.println("Bx = " + super.x); // to access its parent member
    }

    void Ax() {
        System.out.println("Ax = " + new A().x); // to access its grand parent member
    }

    void Ay() {
        System.out.println("Ay = " + y); // can directly access its grand parent member that doesn't exist in C
    }
}

public class super_multilevel_inheritance {
    public static void main(String[] args) {
        C c = new C();
        c.Cx();
        c.Bx();
        c.Ax();
        c.Ay();
    }
}
