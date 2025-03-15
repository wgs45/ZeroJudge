// TODO: Formulas: M=month, D=day, S=(M*2+D)%3
import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int month = input.nextInt();
        int day = input.nextInt();

        // Input validation
        if (month < 1 || month > 12 || day < 1 || day > 31) {
            System.out.println("Invalid input!");
            input.close();
            return;
        }

        int fortune = (month * 2 + day) % 3;
        switch (fortune) {
        case 2:
            System.out.println("大吉");
            break;
        case 1:
            System.out.println("吉");
            break;
        default:
            System.out.println("普通");
        }
        input.close();
    }
}
