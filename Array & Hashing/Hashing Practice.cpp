#include <iostream>
#include <unordered_map>
#include <map>
#include <string>
using namespace std;

// Hashing in C++ typically involves using hash functions to map data (keys) to a fixed-size value (hash code) 
// that is used to access a data structure efficiently. The unordered_map is one of the most common data 
// structures in C++ for hashing.

// int main() {
//     unordered_map<string, int> hashtable;
//     hashtable["Alice"] = 23;
//     hashtable["Bob"] = 50;
//     hashtable["John"] = 17;

//     if (hashtable.find("Bob") != hashtable.end()) 
//         cout << "Bob found!" << endl;
    
//     for (auto p : hashtable) {
//         cout << p.first << " : " << p.second << endl;
//     }
    
//     return 0;
// }

// ordered map
// Keeps keys in sorted order.
// Uses binary search trees (typically Red-Black trees) internally.
// Slower than unordered_map for large data sets.

// int main() {
//     map<int, string> mp;
//     mp[3] = "three";
//     mp[1] = "one";
//     mp[2] = "two";
    
//     map<string, char> mp1;
//     map<char, int> mp2;
    
//     mp1["Orange"] = 'o';
//     mp1["Abaya"] = 'a';
//     mp1["Park"] = 'p';
    
//     mp2['w'] = 1;
//     mp2['r'] = 2;
//     mp2['e'] = 3;
//     mp2['p'] = 4;
    
//     for (auto p: mp) 
//         cout << p.first << " : " << p.second << endl;
//     cout << endl;
    
//     for (auto p : mp1) 
//         cout << p.first << " : " << p.second << endl;
//     cout << endl;
    
//     for (auto p : mp2) 
//         cout << p.first << " : " << p.second << endl;
//     cout << endl;
    
//     return 0;
// }

//unordered map
//Provides average O(1) complexity for operations like insertion, deletion, and lookup.

// int main() {
//     unordered_map<int, string> mp;
//     mp[3] = "three";
//     mp[1] = "one";
//     mp[2] = "two";
//     mp[0] = "zero";
    
//     for (auto p : mp) 
//         cout << p.first << " : " << p.second << endl;
//     cout << endl;    
    
//     return 0;
// }

//Multimap
// Allows duplicate keys.
// Maintains sorted order of keys.

// int main() {
//     multimap<int, string> mp;
    
//     // mp[3] = "three";  cannot do it in multimap
//     mp.insert({1, "One"});
//     mp.insert({8, "Eight"});
//     mp.insert({6, "Six"});
//     mp.insert({3, "Three"});
//     mp.insert({1, "Duplicate One"});
    
//     for (auto p : mp) 
//         cout << p.first << " : " << p.second << endl;
//     cout << endl;    
    
//     return 0;
// }

// Unordered MultiMap 
// Allows duplicate keys.
// Does not maintain any order.

// int main() {
//     unordered_multimap<int, string> mp;
    
//     //  mp[3] = "three"; // cannot do it in multimap
//     mp.insert({1, "One"});
//     mp.insert({8, "Eight"});
//     mp.insert({6, "Six"});
//     mp.insert({3, "Three"});
//     mp.insert({1, "Duplicate One"});
    
//     for (auto p : mp) 
//         cout << p.first << " : " << p.second << endl;
//     cout << endl;    
    
//     return 0;
// }


// Use Cases of Hashing
// Fast Lookups: Store key-value pairs for constant-time retrieval.
// Frequency Count: Count occurrences of elements in an array or string.
// Caching: Store recently accessed data.
// Detect Duplicates: Quickly identify duplicates in a dataset.

