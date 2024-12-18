package pertemuan7;

import java.util.Arrays;

public class arrayKotak {

    public static void main(String[] args) {
        String[] kota = {"jakarta", "madiun", "karawang"};
        String[] jawa = new String[3];

        System.out.println(kota[0]);

        for (int i = 1; i < kota.length; i++) {
            System.out.print(kota[i] + "\t");
        }

        System.out.println();

        jawa[0] = "jawa";
        jawa[1] = "madiun";
        jawa[2] = "karawang";

        System.out.println("=============== manual looop");

        for (int i = 0; i < jawa.length; i++) {
            System.out.print(jawa[i] + "\t");
        }

        System.out.println();
        System.out.println("=============== loop array");
        for (String a : kota) {
            System.out.print(a + "\t");
        }
        kota[0] = "surabaya";
        String [] tempat = java.util.Arrays.copyOf(kota, kota.length);
        System.out.println(tempat[0]);
    }


}
