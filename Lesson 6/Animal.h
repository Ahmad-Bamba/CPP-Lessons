#include <string>

class Animal {
public:
    Animal(std::string n, std::string s);
    void Growl();

    //getters and setters
    std::string get_name();
    void set_name(std::string n);

private:
    std::string name;
    std::string sound;
};
