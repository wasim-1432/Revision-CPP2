#include<iostream>
using namespace std;
class Game
{
    private:
        int score[5];
    public:
        void SetScore(int round,int score)
        {
            this->score[round]=score;
        }
        int GetScore(int round)
        {
            return score[round-1];
        }
        void ShowData()
        {
            for(int i=0;i<5;i++)
            {
                cout<<score[i]<<" ";
            }
        }
};
int main()
{
    Game g1;
    g1.SetScore(0,33);
    g1.SetScore(1,32);
    g1.SetScore(2,42);
    g1.SetScore(3,52);
    g1.SetScore(4,62);
    g1.ShowData();
    cout<<endl;
    return 0;
}