#include <iostream>
#include <map>
#include <string>
#include <string_view>
 
void print_map(std::string_view comment, const std::map<std::string, int>& m)
{
    std::cout << comment;
    for (const auto& [key, value] : m) {
        std::cout << key << " = " << value << "; ";
    }
    std::cout << "\n";
}
 
int main()
{
    // Create a map of three strings (that map to integers)
    std::map<std::string, int> m { {"CPU", 10}, {"GPU", 15}, {"RAM", 20}, };
 
    print_map("Initial map: ", m);
 
    m["CPU"] = 25;  // update an existing value
    m["SSD"] = 30;  // insert a new value
 
    print_map("Updated map: ", m);
}
