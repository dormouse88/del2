/* 
 * File:   main.cpp
 * Author: Dormouse
 *
 * Created on 10 December 2014, 16:11
 */

#include <cstdlib>
#include <iostream>
#include <vector>
#include <memory>
#include <string>

using namespace std;

    template<typename T> void print_pointer(T p)
    {
        std::cout << *p << std::endl;
    }


int main(int argc, char** argv) {

    int x{1};
    auto y = 2;
    int *p = nullptr;
    decltype(5) z;
    int in;
    std::cout << "IPNUT PLAESE";
    std::cin >> in;
    std::cout << in;
    std::vector<int> teh_ints {1, 3, 7, 11, 18};
    teh_ints.push_back(4);
    teh_ints.push_back({6});
    
    teh_ints.emplace_back(999);
    //teh_ints.emplace_back({998});
    
    for (auto x: teh_ints) {
        std::cout << "number: " << x << std::endl;
    }

    enum class Color {red, blue, green};
    auto c { Color::blue };
    //std::cout << c;
    
    std::unique_ptr<int> p1{new int{42}};
    std::unique_ptr<int> p2 = std::move(p1); // transfer ownership

    if(p1) print_pointer(p1.get());
    (*p2)++;
    if(p2) print_pointer(p2.get());
    
    auto shp = make_shared<int>(101);
    print_pointer(shp);
    auto shp2 = shp;
    (*shp)++;
    print_pointer(shp2);
    std::weak_ptr<int> wp = shp;
    (*shp2)++;
    shp.reset();
    print_pointer(wp.lock());
    
    auto how_app = [] (std::string insult) { return std::string("how appropriate, ") + insult; };
    std::cout << how_app("you fight like a cow.");
    
    return 0;
}

//oooh, actual codez

void func() {
    return;
}