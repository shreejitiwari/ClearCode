// Superclass 
class Base { 
      
    // Static method in base class which will be hidden in subclass  
    public static void display() { 
        System.out.println("Static or class method from Base"); 
    } 
      
     // Non-static method which will be overridden in derived class  
     public void print()  { 
         System.out.println("Non-static or Instance method from Base"); 
    } 
} 

// Subclass 
class Derived extends Base { 
      
    // Static is removed here (Causes Compiler Error)  
    public static void display() { 
        System.out.println("Non-static method from Derived"); 
    } 
      
    // Static is added here (Causes Compiler Error) 
    public void print() { 
        System.out.println("Static method from Derived");    
}
   } 



public class nested_static_class {
    public static void main(String args[])
    {
        // As per overriding rules this should call to class Derive's static  
        // overridden method. Since static method can not be overridden, it  
        // calls Base's display()  
        Base obj = new Derived(); 
        obj.display();   
        // Here overriding works and Derive's print() is called  
        obj.print();
    }
}
