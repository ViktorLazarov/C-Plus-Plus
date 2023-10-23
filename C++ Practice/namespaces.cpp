#include <iostream>

namespace first {
    int x = 1;
}
namespace second {
    int x = 2;
}



int main(){
    using namespace first;
    using std::cout;
    using std::string;
    

    // std::cout << first::x << '\n';
    cout << x << '\n';
    cout << second::x << '\n';

    std::string name = "Viktor";
    string city = "Sandanski";

    cout << name << " " << city << '\n';

    return 0;
}