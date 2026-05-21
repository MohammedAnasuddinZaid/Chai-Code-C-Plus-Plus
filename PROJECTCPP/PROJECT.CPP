#include <iostream>
#include <vector>
#include <list>
#include <map>
#include <string>
#include <ctime>
#include <unordered_set>
#include <unordered_map>
#include <deque>
#include <set>


using namespace std;

struct Product {
    int prdoductID;
    string name;
    string category;
};

struct order{
    int orderID;
    int PRDUCTID;
    int Quatity;
    string custormerID;
    time_t orderDate;

}

int main(){

    vector<Product> = 
    {
    {101,"LAPTOP","ELECTRONICS"}
    {102,"SMAERPHONE","ELECTRONICS"}
    {103, "COFFE MAKER","KITCHEN"}
    {104,"BLENDER","KITCHEN"}
    {105,"DESK LAMP","HOME"}
    };

    deque<string> recentCustomrs= {"C001","C002","C003"};

    recentCustomrs.push_back("C004");
    recentCustomrs.push_front("C005");

    list<order> orderHistory;
    orderHistory.push_back({1, 101, 1 , "C001", time(0)});
    orderHistory.push_back({2, 102, 2 , "C002", time(0)});
    orderHistory.push_back({3, 103, 4 , "C003", time(0)});

    set<string> categories;
    for(const auto &Product: prod){
        categories.insert(Product.category);
    }

    map<int, int> productStock = {
        {101,10},
        {102,20},
        {103,15},
        {104,5},
        {105,7},

    };

    multimap



    return 0;
}