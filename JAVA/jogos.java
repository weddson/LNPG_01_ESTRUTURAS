import java.util.Scanner;

public class jogos {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Quantos jogos foram vendidos?");
        int quantidadeJogos = scanner.nextInt();

        double valorTotal = quantidadeJogos * 19.9;
        double salario = valorTotal * 0.5;
        double bonus = Math.floor(quantidadeJogos / 15) * (valorTotal * 0.08);

        System.out.printf("Venda total: %.2f\nValor do salario: %.2f\nValor do bonus: %.2f\n", valorTotal, salario, bonus);

        scanner.close();
    }
}
