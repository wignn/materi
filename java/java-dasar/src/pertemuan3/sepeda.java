package pertemuan3;

public class sepeda {
        private int gir;

        void setGir(int pertambahanGir) {
            gir += pertambahanGir;
        }

        int getGir() {
            return gir;
        }

        void loop(){
            for (int i = 1 ; i < 200 ; i++){
                System.out.println(i);
            }
        }
}
