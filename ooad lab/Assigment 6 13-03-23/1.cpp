#include <iostream>
using namespace std;
class bicycle
{
    // protected:
    string frame_type;
    int wheel_diameter;
    string handle_type;

public:
    bicycle(){};
    void get_data(string a, int b, string c)
    {
        frame_type = a;
        wheel_diameter = b;
        handle_type = c;
    }
    void print_data()
    {
        cout << "frame type : " << frame_type << endl;
        cout << "wheel diameter : " << wheel_diameter << endl;
        cout << "handle type : " << handle_type << endl;
    }
};
class MoterBike : public bicycle
{
    int no_of_gear, max_speed, engine_capcity, meter_reading, fuel_consumed;

public:
    MoterBike(){};
    void input_data(int a, int b, int c, int d, int e)
    {
        no_of_gear = a;
        max_speed = b;
        engine_capcity = c;
        meter_reading = d;
        fuel_consumed = e;
    }
    void print_data()
    {
        cout << "no gear : " << no_of_gear << endl;
        cout << "max speed : " << max_speed << endl;
        cout << "engine capacity : " << engine_capcity << endl;
        cout << "meter reading : " << meter_reading << endl;
        cout << "fuel consumed : " << fuel_consumed << endl;
    }
    void calmilage(float a, float b)
    {
        cout << "\nmilage :" << a / b;
    }
};
int main()
{
    // for bicycle
    cout << "\n************************\n";
    cout << "--------BICYCLE---------\n";
    bicycle b1;
    string i, k;
    cout << "\nenter frame type of bicycle : ";
    cin >> i;
    cout << "\nenter wheel diameter : ";
    int j;
    cin >> j;
    cout << "\nenter handle type : ";
    cin >> k;
    cout << "\n************************\n";
    b1.get_data(i, j, k);
    b1.print_data();

    // for motercycle
    cout << "\n************************\n";
    cout << "-------MOTERCYCLE-------\n";

    MoterBike m1;
    string m, n;
    cout << "\nenter frame type of bicycle : ";
    cin >> m;
    cout << "\nenter wheel diameter : ";
    int q;
    cin >> q;
    cout << "\nenter handle type : ";
    cin >> n;
    b1.get_data(m, q, n);
    int w, e, r, t, y;
    cout << "\nno_of_gear : ";
    cin >> w;
    cout << "\nmax_speed : ";
    cin >> e;
    cout << "\nengine_capcity : ";
    cin >> r;
    cout << "\nmeter_reading : ";
    cin >> t;
    cout << "\nfuel_consumed : ";
    cin >> y;
    m1.input_data(w, e, r, t, y);
    cout << "\n************************\n";
    m1.print_data();
    m1.calmilage(t, y);

    return 0;
}