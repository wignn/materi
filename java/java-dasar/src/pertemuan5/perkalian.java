package pertemuan5;
import java.util.Scanner;

public class perkalian {
        public static void main(String[] args){

            Scanner input = new Scanner(System.in);
            System.out.print("Masukkan bilangan pertama: ");
            int bilangan1 = input.nextInt();
            System.out.print("Masukkan bilangan kedua: ");
            int bilangan2 = input.nextInt();
            System.out.print("Hasil perkalian: " +
                    (bilangan1 * bilangan2));

    }
}
