#include <iostream>
#include <map>
#include <unordered_map>

using namespace std;

int main() {

    // Unordered map is based on hashing
    // Ordered map is based on red-black tree

    /*
    Unordered map is faster than ordered map
    because it uses hashing to store the elements,
    while ordered map uses red-black tree to store the elements.
    However, unordered map does not maintain the order of the elements,
    while ordered map maintains the order of the elements based on the key.
    Therefore, if you need to maintain the order of the elements,
    you should use ordered map, otherwise you can use unordered map.

    Time and Space Complexity:
    - Unordered Map:
        - Average Time Complexity: O(1) for insertion, deletion, and search.
        - Worst Time Complexity: O(n) in case of hash collisions.
        - Space Complexity: O(n) for storing n elements.

    - Ordered Map:
        - Time Complexity: O(log n) for insertion, deletion, and search.
        - Space Complexity: O(n) for storing n elements.
        - Ordered map is slower than unordered map because it uses red-black tree to store the elements

    */

    //create an unordered map

    unordered_map<string, string> umap;

    umap["in"] = "India";
    umap["us"] = "United States";
    umap["uk"] = "United Kingdom";
    umap["fr"] = "France";

    umap.insert({"jp", "Japan"});
    umap.insert(make_pair("de", "Germany"));
    umap["in"] = "Indonesia"; // this will update the value for key "in"
    umap.at("in") = "India"; // this will also update the value for key "in"


    // size
    cout << "Size of unordered map: " << umap.size() << endl;

    // clear
    // umap.clear();

    // at
    cout << "Value for key 'in': " << umap.at("in") << endl;


    // iterator
     
    unordered_map<string,string> :: iterator it = umap.begin();

    while(it != umap.end()) {
        cout << it->first << " : " << it->second << endl;
        it++;
    }

    // find
    // this will return an iterator to the element with key "us"
    unordered_map<string,string> :: iterator it1 = umap.find("us");
    cout<< "Value for key 'us': " << it1->second << endl;

    if(it1 != umap.end()) {
        cout << "Key 'us' found with value: " << it1->second << endl;
    } else {
        cout << "Key 'us' not found" << endl;
    }

    // find which is not present
    unordered_map<string,string> :: iterator it2 = umap.find("xyz");
    if(it2 != umap.end()) {
        cout << "Key 'xyz' found with value: " << it2->second << endl;
    } else {
        cout << "Key 'xyz' not found" << endl;
    }


    // erase
    // umap.erase("uk"); // erase by key

    // count 

    cout << "Count of key 'in': " << umap.count("in") << endl; 
    // this will return 1 if key is present, otherwise 0

    cout<< "Count of key 'xyz': " << umap.count("xyz") << endl;
    // this will return 0 if key is not present

    // same code for the ordered map
    // only changes is it is sorted and  time complexity is O(log n) for insertion, deletion, and search

    map<string, string> omap;
    omap["in"] = "India";
    omap["us"] = "United States";
    omap["uk"] = "United Kingdom";
    omap["fr"] = "France";
    omap.insert({"jp", "Japan"});
    omap.insert(make_pair("de", "Germany"));
    omap["in"] = "Indonesia"; // this will update the value for key "in"
    omap.at("in") = "India"; // this will also update the value for key "in"    


    for (auto it : omap) {
        cout << it.first << " : " << it.second << endl;
    }

    // this is unordered map can also be used as a map
    map<int, string> mpp;
    
    mpp[1] = "One";
    mpp[2] = "Two";
    mpp[3] = "Three";
    mpp.insert({4, "Four"});
    mpp.insert(make_pair(5, "Five"));
    mpp[1] = "Uno"; // this will update the value for key 1
    mpp.at(1) = "One"; // this will also update the value for
    mpp[0] = "Nineteen"; // this will insert a new key-value pair

    for(auto it : mpp) {
        cout << it.first << " : " << it.second << endl;
    }

    return 0;
}