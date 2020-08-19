import java.util.Scanner;

public class EasyExponentials {
    public static void main(String[] args) {
        Scanner n = new Scanner(System.in);

        int a=n.nextInt();
        int b=n.nextInt();
        a=(int)Math.pow(a, b);
        System.out.println(a);
    }
}