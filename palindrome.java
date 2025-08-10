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

  Scanner scanner = new Scanner(System.in);
        System.out.printf("Insira uma String");

        String palavra = scanner.nextLine();

        String reversa = new StringBuilder(palavra).reverse().toString();

        System.out.printf("nova string:" + reversa);





         Scanner scanner = new Scanner(System.in);
        String palavra = "";

        do {
            System.out.println("Insira a senha:");

            palavra = scanner.nextLine();

            if (palavra.equals("alfa")) {
                System.out.println("Senha correta");
            } else {
                System.out.println("Senha incorreta");
            }

        } while (!palavra.equals("alfa"));

        scanner.close();




    }

}


