import java.util.Scanner;


public class numneg {
    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);
        System.out.printf("Insira o numero");

        int num = scanner.nextInt();
        if(num > 1){
            System.out.printf("positivo");
        } else if (num == 0) {
            System.out.printf("numero zero");
        }
        else{
            System.out.printf("negativo");

        }


    }
}