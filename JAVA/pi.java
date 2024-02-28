import java.util.Scanner;

public class pi {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        double pi, base = 0, div = 1;
        int n;

        System.out.println("Qual valor de n?");
        n = scanner.nextInt();

        for (int i = 1; i <= n; i++) {
            if (i % 2 == 0) {
                base = base - 1/Math.pow(div,3);
            } else {
                base = base + 1/Math.pow(div,3);
            }
            div += 2;
        }

        pi = Math.cbrt(base*32);
        System.out.printf("%.5f", pi);
    }
}