package pertemuan6;
public class piramida {
    public static void main(String[] args) {
    loop lp = new loop();
    lp.piramida(6);
    }
}

class loop {
    public void piramida(int baris) {
        System.out.print(" + ");
        for(int i =0; i < baris; i++){
            for(int j =0; j <= i; j++){
                System.out.print(" * ");
            }
            System.out.println();
        }
    }
}