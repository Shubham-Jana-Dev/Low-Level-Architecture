/* Challenge 2: The Smart Light (The "State" Level)

The Goal: Sometimes encapsulation isn't just about numbers; 
it's about the "State" of an object.

Private Members: Brightness (int, 0 to 100).

Rules:

dim(): Reduces brightness by 10. It should never go below 0.

brighten(): Increases brightness by 10. It should never go above 100.

The Twist: If the brightness is 100 and the user calls brighten(),
print "Maximum brightness reached."

*/
#include <iostream>
using namespace std;
class brightness_c{
private:
    int Brightness = 100;
public:
    void dim(){
        if (Brightness >= 20){
        Brightness -= 10;
        cout << "The screen has been made darker. courrent brightness: " << Brightness << " %." << endl;
        }
        else{
            cout << "Minimun Brightness reached. Brightness: " << Brightness << " %." << endl; 
        }
    }
    void brighten(){
        if (Brightness <= 90){
            Brightness += 10;
            cout << "The screen has been made brighter. courrent brightness: " << Brightness << " %." << endl;
        }
        else{
            cout << "Maximum Brightness reached. Brightness: " << Brightness << " %." << endl;
        }
    }

};
int main(){
    brightness_c Device1 = brightness_c();
    Device1.dim();
    Device1.dim();
    Device1.dim();
    Device1.dim();
    Device1.dim();
    Device1.dim();
    Device1.dim();
    Device1.dim();
    Device1.dim();
    Device1.dim();
    Device1.brighten();
    Device1.brighten();
    Device1.brighten();
    Device1.brighten();
    Device1.brighten();
    Device1.brighten();
    Device1.brighten();
    Device1.brighten();
    Device1.brighten();
    Device1.brighten();
    return 0;
}