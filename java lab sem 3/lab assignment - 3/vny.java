// package inst.nitjsr.hospitals;

import inst.nitjsr.hospitals.dblayer.*;


public class vny {
    public static void main(String[] args) {
        DBEntity doctor = new Doctor();
        DBEntity staff = new Staff();
        DBEntity patient = new Patient();

        doctor.insert(null);
        doctor.delete(1);
        doctor.update(1, null);

        staff.insert(null);
        staff.delete(2);
        staff.update(2, null);

        patient.insert(null);
        patient.delete(3);
        patient.update(3, null);
    }
}
