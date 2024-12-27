#include <iostream>
#include <fstream>
#include <vector>
#include <map>
#include <algorithm>

#include <nlohmann/json.hpp>
using json = nlohmann::json;

int main(int argc, char** argv) {
    srand(time(NULL));

    if (argc != 4) {
        std::cout << argv[0] << " <json_file> <id> <log>" << std::endl;
        return 1;
    }

    std::string filename = argv[1];
    int count_desk = std::stoi((std::string) argv[2]);

    std::string log_filename = argv[3];

    std::ifstream file(filename);
    json data = json::parse(file);

    std::vector<std::map<std::string, std::string>> parsed_data = data[count_desk];

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

        std::cout << "Title: " << title << std::endl;
        std::cout << "Text: " << text << std::endl;
        std::cout << "Battle title: " << battle_title << std::endl;
        std::cout << "Battle text: " << battle_text << std::endl;

        std::ofstream log_file(log_filename, std::ios::app);
        log_file << title << "\n";
        log_file.close();

        parsed_data.erase(parsed_data.begin() + id);

        std::cin.get();
    }

    return 0;
}
