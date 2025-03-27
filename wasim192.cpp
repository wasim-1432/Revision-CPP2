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
class GameResult:public Game
{
    private:
        int result[5];
    public:
        static const int WIN=2,LOOSE=0,DRAW=1;
        void SetResult(int result,int round)
        {
            this->result[round]=result;
        }
        int GetResult(int round)
        {
            return result[round-1];
        }
        void FinalResult()
        {
            int ScoreSum=0,ResultSum=0;
            for(int i=0;i<5;i++)
            {
                ScoreSum=ScoreSum+GetScore(i+1);
                ResultSum=ResultSum+GetResult(i);
            }
            cout<<"Total Score="<<ScoreSum<<endl;
            cout<<"Total Result="<<ResultSum;
        }
};