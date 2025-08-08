import java.util.Scanner;
public class palindrome {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("digite uma palavra");
        String entrada = scanner.nextLine();

        String limpa = entrada.replaceAll("\\s+","").toLowerCase();

        String reversa = new StringBuilder(limpa).reverse().toString();

        if(limpa.equals(reversa)){
            System.out.println("palindrome");
        }
        else {
            System.out.println("nao e um palindrome");

        }



    }

}
