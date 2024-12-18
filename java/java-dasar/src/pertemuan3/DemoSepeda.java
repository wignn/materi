package pertemuan3;

public class DemoSepeda{
    public static void main(String[] args) {
        sepeda sepedaku = new sepeda();
        sepedaku.setGir(5);

        System.out.println("Gir saat ini: " + sepedaku.getGir());
        sepeda sep = new sepeda();
        sep.setGir(19);
        System.out.println("Gir saat ini: " + sep.getGir());

    }
}