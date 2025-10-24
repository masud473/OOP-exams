#include <iostream>
using namespace std;
class Player
{
public:
    int val = 0;
    virtual void Show() = 0;
};
class Cricket : public Player
{
public:
    int val = 2;
    void Show() override
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

    player = new Cricket();
    player->Show();
    cout << player->val;
    return 0;
}