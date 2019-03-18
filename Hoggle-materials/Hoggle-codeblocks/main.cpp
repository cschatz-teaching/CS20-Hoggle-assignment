#include "lpclib.h"
#include "hgraphics.h"
using namespace std;

int main()
{
    /// This function draws and clears the board framework
    DrawBoard();

    // Here is a double for loop that iterates through all dice
    // on the board
    for (int r = 0; r < 5; r++)
    {
        for (int c = 0; c < DiceInRow(r); c++)
        {
            LabelHex(r, c, '?');
        }
    }
    UpdateDisplay();

    // Scoring is done with the RecordNewWord function
    RecordNewWord("puma", Human);
    RecordNewWord("lion", Human);
    RecordNewWord("tiger", Human);
    RecordNewWord("leopard", Human);
    RecordNewWord("jaguar", Human);
    RecordNewWord("turtle", Computer);
    RecordNewWord("snake", Computer);
    RecordNewWord("gecko", Computer);
    RecordNewWord("crocodile", Computer);
    RecordNewWord("lizard", Computer);

    // Printing onscreen with PrintMessage
    PrintMessage("Welcome to Hoggle\n");

    // Getting input onscreen
    PrintMessage ("What's your name? ");
    string name = BoardGetLine();
    PrintMessage (string("Hi, ") + name + ". Good luck!");

    // Highlighting hexes on the board
    for (int r = 0; r < 5; r++)
    {
        for (int c = 0; c < DiceInRow(r); c++)
        {
            HighlightHex(r, c, true); // highlighting on
            Pause(0.1);
            HighlightHex(r, c, false); // highlighting off
        }
    }

    Pause(2);
}

