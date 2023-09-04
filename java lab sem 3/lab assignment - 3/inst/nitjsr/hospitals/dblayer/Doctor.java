package inst.nitjsr.hospitals.dblayer;

public class Doctor implements DBEntity {

    public void insert(DBEntity entity) {
        System.out.println("From insert method of Doctor class");
    }

    public void delete(int id) {
        System.out.println("From delete method of Doctor class");
    }

    public void update(int id, DBEntity entity) {
        System.out.println("From update method of Doctor class");
    }
}
