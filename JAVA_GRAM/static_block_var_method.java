public class static_block_var_method {
    public static void main(String args[]){
        
        System.out.println(x);
        
    }
    static int x=10;
    static {System.out.println("X = "+x);}
}
