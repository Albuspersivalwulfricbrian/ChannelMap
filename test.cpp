#include "nlohmann/json.hpp"
#include "iostream"
#include "fstream"
#include "vector"
#include "sstream"
#include "iomanip"
// #include "QTextEdit"
// #include "QApplication"
// #include "QPushButton"
// #include "QTableWidget"
#include "ChannelMap.h"



// for convenience
using json = nlohmann::json;
using namespace std;
int test()
{
    std::ifstream iFile("/home/doc/afiadc/channel_map_generator/build/pretty.json");
    json jMap = json::parse(iFile);

    ChannelMap chMap;
    chMap.ReadConfig(jMap);
    for (auto &el:chMap.channel)
    {
        cout << el.connector << "\t" << el.channel << endl;
    }
    return 0;
}
