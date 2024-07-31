#include <iostream>
#include <string>

std::string rps(const std::string& p1, const std::string& p2) {
    std::string msg = "";
    std::string p1won = "Player 1 won!";
    std::string p2won = "Player 2 won!";

    if (p1 == p2) {
        msg = "Draw!";
    }
    else if (p1 == "rock") {
        if (p2 == "paper") msg = p2won;
        else if (p2 == "scissors") msg = p1won;
    }
    else if (p1 == "paper") {
        if (p2 == "rock") msg = p1won;
        else if (p2 == "scissors") msg = p2won;
    }
    else if (p1 == "scissors") {
        if (p2 == "paper") msg = p1won;
        else if (p2 == "rock") msg = p2won;
    }

    return msg;
}

int main() {
    std::string player1Choice, player2Choice;

    std::cout << "Player 1, enter your choice (rock, paper, scissors): ";
    std::cin >> player1Choice;

    std::cout << "Player 2, enter your choice (rock, paper, scissors): ";
    std::cin >> player2Choice;

    std::string result = rps(player1Choice, player2Choice);
    std::cout << result << std::endl;

    return 0;
}
