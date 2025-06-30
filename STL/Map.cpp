#include<iostream>
#include<map>
using namespace std;

int main(){
    map <string, int> m;
    m["Scorpio"] = 10;
    m["Tha"] = 12;
    m["Bmw"] = 25;
    m["Audi"] = 23;
    m["Audi"] = 10;

    // m.insert({"Swift",24});
    // m.erase("Scorpio");

    for(auto p: m){
        cout << p.first << " " << p.second << endl;
    }

    cout << "Count:" << m.count("Audi") << endl;
    cout << "No. of audi:" << m["Audi"] << endl;
}

// in multi map we can store duplicate keys
// in unorded map keys are not in ordered form