import java.util.Scanner;

/**
 *
 * @author Gabriel Nunes dos Santos
 */
public class Main {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        
        int a, b, c, maiorab, maior;

        Scanner entrada = new Scanner(System.in);
        
        a = entrada.nextInt();
        b = entrada.nextInt();
        c = entrada.nextInt();
        
        

    maiorab = ((a + b + Math.abs(a - b)) / 2);

    maior =  ((maiorab + c + Math.abs(maiorab - c)) / 2);

    System.out.println(maior + " eh o maior");

    }
    
}
