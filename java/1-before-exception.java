// Online Java Compiler
// Use this editor to write, compile and run your Java code online

class HelloWorld {
    public static void main(String[] args) {
        System.out.println("Hello, World!");
        
        int i = 0;
        int j = 18/i;
        
        System.out.println(j);  // Exception in thread "main" java.lang.ArithmeticException: / by zero at HelloWorld.main(HelloWorld.java:9)
    
        // Exceptions stop the execution, it won't do anything below
        
        System.out.println("Ba-bye");
        
        
    }
}
