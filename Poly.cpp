#include <iostream>
using namespace std;
class Player
{
public:
    int val = 0;
    virtual void Show()
    {
        cout << "I am player\n";
    }
};
class Cricket : public Player
{
public:
    int val = 2;
    void Show()
    {
        cout << "I am Cricket Player\n";
    }
    void hide()
    {
        cout << "I am hidden";
    }
};
int main()
{
    Player *player = NULL;
    player = new Player();
    player->Show();
    player = new Cricket();
    player->Show();
    cout << player->val;
    return 0;
}