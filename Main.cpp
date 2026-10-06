#include <string>
#include <vector>

struct Game
{
    std::string name;
    std::string image;
};

std::vector<Game> games =
{
    {"GTA V", "assets/gta5.png"},
    {"God of War", "assets/gow.png"},
    {"Black Myth: Wukong", "assets/wukong.png"}
};

int selectedGame = 0;

void moveLeft()
{
    if (selectedGame > 0)
        selectedGame--;
}

void moveRight()
{
    if (selectedGame < (int)games.size() - 1)
        selectedGame++;
}
