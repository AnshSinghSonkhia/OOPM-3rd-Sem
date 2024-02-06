// Online Java Compiler
// Use this editor to write, compile and run your Java code online

class HelloWorldd {
    public static void main(String[] args) {
        System.out.println("Hello, World!");
        
        int i = 0;
        int j = 0;
        int k = 4;
        
        j = 18/k;
        System.out.println(j);
        
        int m = 0;
        
        // try block - won't stop the further execution, if an exception is encountered
        try {
            m = 18/i;
        }
        catch(Exception obj) {
            System.out.println("Something went wrong.......");
        }
        finally {
            System.out.println("Finally Block runs, whether error occurs or not");
        }
        
        
        System.out.println(m); 
        
        // Exception in thread "main" java.lang.ArithmeticException: / by zero at HelloWorld.main(HelloWorld.java:9)
    
        
        
        System.out.println("Ba-bye");
        
        
    }
}

// OUTPUT

// Hello, World!
// 4
// Something went wrong.......
// Finally Block runs, whether error occurs or not
// 0
// Ba-bye