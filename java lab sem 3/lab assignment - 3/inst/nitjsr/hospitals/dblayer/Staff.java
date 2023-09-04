package inst.nitjsr.hospitals.dblayer;

public class Staff implements DBEntity {

    public void insert(DBEntity entity) {
        System.out.println("From insert method of Staff class");
    }

    public void delete(int id) {
        System.out.println("From delete method of Staff class");
    }

    public void update(int id, DBEntity entity) {
        System.out.println("From update method of Staff class");
    }
}