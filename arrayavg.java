import java.util.Scanner;
public class arrayavg {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("insira numero");
        int n = scanner.nextInt();
        int[] vetor = new int[n];

        for (int i=0;i <n; i++){
            System.out.println(" numero vetor");
            vetor[i] = scanner.nextInt();
        }
        int soma =0;
        for (int i=0;i <n; i++){
            soma+= vetor[i];
        }
        double media = (double) soma/n;
        System.out.println(media);


    }
}
