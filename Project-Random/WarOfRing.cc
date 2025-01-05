#include <algorithm>
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <map>

#include <nlohmann/json.hpp>
using json = nlohmann::json;

int main(int argc, char** argv) {
    srand(time(NULL));

    if (argc != 2) {
        std::cout << argv[0] << " <config>" << std::endl;
        return 1;
    }

    // get config

    std::string config_filename = argv[1];
    std::ifstream config_file(config_filename);
    json config_data = json::parse(config_file);

    std::map<std::string, std::string> parsed_config = config_data;

    // get data from config
    std::string data_filename = parsed_config["data_file"];
    int desk_id = std::stoi(parsed_config["id"]);
    std::string log_filename = parsed_config["log_file"];

    // get desk file
    std::ifstream data_file(data_filename);
    json data = json::parse(data_file);

    // parse it
    std::vector<std::map<std::string, std::string>> parsed_data = data[desk_id];

    // read logs
    std::ifstream log_file(log_filename);

    std::string line;
    while (std::getline(log_file, line)) {
        for (int i = 0; i < parsed_data.size(); i++) {
            if (parsed_data[i]["title"] == line) {
                parsed_data.erase(parsed_data.begin() + i);
            }
        }
    }

    log_file.close();

    std::random_shuffle(parsed_data.begin(), parsed_data.end());

    while (parsed_data.size() > 0) {
        int id = rand() % parsed_data.size();

        std::string title = parsed_data[id]["title"];
        std::string text = parsed_data[id]["text"];

        std::string battle_title = parsed_data[id]["battle_title"];
        std::string battle_text = parsed_data[id]["battle_text"];

        std::string type = parsed_data[id]["type"];

        std::cout << "Title: " << title << std::endl;
        std::cout << "Text: " << text << std::endl;
        std::cout << "Battle title: " << battle_title << std::endl;
        std::cout << "Battle text: " << battle_text << std::endl;
        std::cout << "Type: " << type << std::endl;

        std::ofstream log_file(log_filename, std::ios::app);
        log_file << title << "\n";
        log_file.close();

        parsed_data.erase(parsed_data.begin() + id);

        std::string discard;
        std::getline(std::cin, discard);
    }

    return 0;
}
