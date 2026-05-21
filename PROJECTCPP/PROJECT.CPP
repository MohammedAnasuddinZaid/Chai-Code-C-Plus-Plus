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

};

int main(){

    vector<Product> Products= 
    {
    {101,"LAPTOP","ELECTRONICS"},
    {102,"SMAERTPHONE","ELECTRONICS"},
    {103, "COFFE MAKER","KITCHEN"},
    {104,"BLENDER","KITCHEN"},
    {105,"DESK LAMP","HOME"}
    };
    //it is a que system "add from here ==== or from here also"
    deque<string> recentCustomrs= {"C001","C002","C003"};
    // adding data from back or from front 
    //the 1st one added from back {AS I SAID que can be added back and front}
    //the 2nd one added from front {AS I SAID que can be added back and front}
    recentCustomrs.push_back("C004");
    recentCustomrs.push_front("C005");

    list<order> orderHistory;
    // we use push_back before push_front would be expensive as if we push it from front every element is being pushed forword so need to push more and more elements so it gets expensive to move many.
    orderHistory.push_back({1, 101, 1 , "C001", time(0)});
    orderHistory.push_back({2, 102, 2 , "C002", time(0)});
    orderHistory.push_back({3, 103, 4 , "C003", time(0)});

    set<string> categories;
    for(const auto &Produc: Products){
        categories.insert(Produc.category);
    }

    map<int, int> productStock = {
        {101,10},
        {102,20},
        {103,15},
        {104,5},
        {105,7},

    };

    multimap<string, order> CustomerOrders;
    for(const auto &ord:orderHistory){
        CustomerOrders.insert({ord.custormerID,ord});
    }

    unordered_map<string,string> CustomerData ={
        {"C001","Alice"},
        {"C002","hitesh"},
        {"C003","vidya"},
        {"C004","max"},
        {"C005","harry"},
    };

    unordered_set<int> uniqueProductIDs;
    for(const auto &product:Products){
        uniqueProductIDs.insert(product.prdoductID);
    }

    return 0;
}