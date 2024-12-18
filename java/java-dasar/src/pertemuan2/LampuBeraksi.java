package pertemuan2;

public class LampuBeraksi{
    public static void main(String[] args){
        Lampu lampuKamar = new Lampu();
        System.out.println("Status Lampu Saat Ini: Mati");
        lampuKamar.hidupkan();
        lampuKamar.matikan();
        lampuKamar.matikan();
        lampuKamar.hidupkan();
        lampuKamar.hidupkan();
    }
}