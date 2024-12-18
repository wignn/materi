package pertemuan7;

public class arrayMultidimensi {
    public static void main(String[] args) {
        String [][] nama = {
            {"Budi", "Jl. A", "085123456789"},
            {"Susi", "Jl. B", "085123456789"},
        };
        
        for (int i = 0; i < nama.length; i++) {
            System.out.println("Nama : " + nama[i][0]);
            System.out.println("Alamat : " + nama[i][1]);
            System.out.println("No. Telp : " + nama[i][2]);
            System.out.println("==================================");
        }

    }
}
