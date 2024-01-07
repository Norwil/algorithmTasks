#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>

using namespace std;

// Define a structure for a card
struct Card {
    string suit;
    string rank;
};

// Define a class for a deck of cards
class Deck {
private:
    vector<Card> cards;

public:
    // Constructor to initialize a standard deck of cards
    Deck() {
        initializeDeck();
    }

    // Function to initialize a standard deck of cards
    void initializeDeck() {
        const string suits[] = { "Hearts", "Diamonds", "Clubs", "Spades" };
        const string ranks[] = { "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King", "Ace" };

        for (const auto &suit : suits) {
            for (const auto &rank : ranks) {
                cards.push_back({suit, rank});
            }
        }
    }

    // Function to shuffle the deck
    void shuffleDeck() {
        srand(static_cast<unsigned int>(time(0)));
        random_shuffle(cards.begin(), cards.end());
    }

    // Function to draw a card from the top of the deck
    Card drawCard() {
        if (!cards.empty()) {
            Card drawnCard = cards.back();
            cards.pop_back();
            return drawnCard;
        } else {
            cerr << "Error: The deck is empty." << endl;
            exit(EXIT_FAILURE);
        }
    }
};

int main() {
    // Create a deck of cards
    Deck myDeck;

    // Shuffle the deck
    myDeck.shuffleDeck();

    // Draw and print the top card
    Card drawnCard = myDeck.drawCard();
    cout << "Drawn card: " << drawnCard.rank << " of " << drawnCard.suit << endl;

    return 0;
}
