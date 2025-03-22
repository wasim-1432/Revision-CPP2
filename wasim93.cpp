#include<iostream>
using namespace std;
class TestResult
{
    private:
        int roll_no,right,wrong,net_score;
        static int right_weightage,wrong_weightage;
    public:
        void setRollno(int r)
        {
            roll_no=r;
        }
        void setRight(int r)
        {
            right=r;
        }
        void setWrong(int w)
        {
            wrong=w;
        }
        void setNetscore(int n)
        {
            net_score=n;
        }
        static void setRightWeightage(int rw)
        {
            right_weightage=rw;
        }
        static void setWrongWeightage(int ww)
        {
            wrong_weightage=ww;
        }
        int getRollno()
        {
            return roll_no;
        }
        int getRight()
        {
            return right;
        }
        int getWrong()
        {
            return wrong;
        }
        int getNetScore()
        {
            return net_score;
        }
        static int getRightWeightage()
        {
            return right_weightage;
        }
        static int wrongWeightage()
        {
            return wrong_weightage;
        }
};