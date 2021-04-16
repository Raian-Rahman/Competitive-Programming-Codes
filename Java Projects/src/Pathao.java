public class Pathao {
    private Pathao pathao;
    private int type;
    Pathao(){
    }

    void printVehicle(){
        System.out.println();
    }

    Pathao setPathao(int type){
        Factory factory = new Factory();
        return factory.setVehicle(type);
    }
}
