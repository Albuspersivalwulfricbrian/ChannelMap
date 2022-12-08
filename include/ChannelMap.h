#include "nlohmann/json.hpp"
#include "iostream"
#include "fstream"
#include "vector"
#include "sstream"
#include "iomanip"
using json = nlohmann::json;
using namespace std;
struct ChannelInfo
{
    int channel = -100;
    int connector = -100;
    int x1 = -100;
    int x2 = -100;
    int x3 = -100;    
};

class ChannelMap
{
    public:
    ChannelMap(){};
    ~ChannelMap(){};

    void ReadConfig(const json &a)
    {
        for (auto& [key,val] : a["channels"].items())
        {
            ChannelInfo chinfo;
            chinfo.channel = stoi(key);
            chinfo.connector = val["connector"];


            channel.push_back(chinfo);
        }
    }
    json SaveConfig()
    {
        
        return jMap;
    }

    json jMap;
    vector <ChannelInfo> channel;
    private:
    
};