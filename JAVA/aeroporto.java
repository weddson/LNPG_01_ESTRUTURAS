
import java.util.Scanner;

class aeroporto{
        public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Quantos passageiros?");
        int psg = scanner.nextInt();

        for (int i = 1; i <= psg; i++) {
            System.out.printf("O passageiro %d possui 'RG' ou 'Nao possui'?\n", i);
            String rg = scanner.next();

            if (rg.equalsIgnoreCase("RG")) {
                System.out.printf("O passageiro %d possui 'Passagem' ou 'Nao possui'?\n", i);
                String passagem = scanner.next();

                if (passagem.equalsIgnoreCase("Passagem")) {
                    System.out.printf("Qual a data de nascimento do passageiro %d? No formato DD/MM/AAAA\n", i);
                    String dataNascimentoA = scanner.next();

                    System.out.printf("Qual a data que de nascimento do passageiro %d que consta na passagem? No formato DD/MM/AAAA\n", i);
                    String dataNascimentoB = scanner.next();

                    if (dataNascimentoA.equals(dataNascimentoB)) {
                        System.out.printf("Qual o assento que consta na passagem do passageiro %d? No formato A12\n", i);
                        String assento = scanner.next();
                        System.out.printf("Seu assento é: %s, tenha um bom dia\n", assento);
                    } else {
                        System.out.println("190");
                    }
                } else {
                    System.out.println("A recepcao e nessa direcao");
                }
            } else {
                System.out.println("A saida e nessa direcao");
            }
        }

        scanner.close();
    }
}
