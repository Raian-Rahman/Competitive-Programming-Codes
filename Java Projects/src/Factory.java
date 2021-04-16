public class Factory {
    private Pathao pathao;
    Factory(){

    }

    Pathao setVehicle(int type){
        if(type == 1) {
            this.pathao=new Motorcycle();
            return pathao;
        }
        else if(type ==2) {
            this.pathao=new Car();
            return pathao;
        }
        else {
            this.pathao=new Cycle();
            return pathao;
        }
    }
}
