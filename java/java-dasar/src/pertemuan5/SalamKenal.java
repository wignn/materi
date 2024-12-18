package pertemuan5;
import java.util.Scanner;

public class SalamKenal {
    public static void main( String[] args ){
        var masukan = new Scanner(System.in);
        System.out.print("Masukkan Nama Anda: ");
        String nama = masukan.nextLine();
        System.out.print("Masukkan nilai Anda: ");
        Double nila = masukan.nextDouble();
        System.out.println("Halo, Salam Kenal sdr " + nama +"!");
        System.out.println("nilai " + nila +"!");
    }
}