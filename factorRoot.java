import java.util.Scanner;
public class factorRoot {
    
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Insira radicando a ser simplificado:");
        int teste = sc.nextInt();
        simplifyRoot(teste);
        sc.close();
        
    }

    private static void simplifyRoot(int value) 
    {
        int factor = 2;
        int simplifiedRadicand = value;
        int root = 1;
        while (factor <= simplifiedRadicand)
        {
            if (simplifiedRadicand % (factor*factor) == 0)
            {
                simplifiedRadicand /= (factor * factor);
                root *= factor;            
            } 
            else factor++;
        }
        System.out.println("Raiz:" + root);
        if (simplifiedRadicand!=1) {System.out.println("Radicando:" + simplifiedRadicand);} 
    }
}