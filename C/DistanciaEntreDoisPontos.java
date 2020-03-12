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
        
        double x1,x2,y1,y2,a,b,d;
  
        Scanner entrada = new Scanner(System.in);
        
        x1 = entrada.nextDouble();
        y1 = entrada.nextDouble();
        x2 = entrada.nextDouble();
        y2 = entrada.nextDouble();

        a = x2 - x1;
        b = y2 - y1;
    
        d = Math.sqrt( (a * a) + (b * b) );

        System.out.printf("%.4f\n", d);

    }
    
}
