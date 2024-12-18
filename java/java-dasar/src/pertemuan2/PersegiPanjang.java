package pertemuan2;

class PersegiPanjang {
    int panjang, lebar;

    public PersegiPanjang(int panjang, int lebar){
        this.panjang  = panjang;
        this.lebar = lebar;
    }
    public void info(){
        System.out.println("Panjang Persegi Panjang : " + panjang);
        System.out.println("Lebar Persegi Panjang      : " + lebar);
    }
}