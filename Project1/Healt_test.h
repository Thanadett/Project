int calculateMentalHealthScore(int score0, int score1, int score2, int score3,int score4,int score5)
{
    int score0 = 0;
    int score1 = 1;
    int score2 = 2;
    int score3 = 3;
    int score4 = 4;
    int score5 = 5;
    int totalScore = score0 + score1 + score2 + score3 + score4 + score5;

    if (totalScore >= 0 && totalScore <= 4)
    {
        std::cout << "ความเครียด: น้อย\n";
    }
    else if (totalScore >= 5 && totalScore <= 7)
    {
        std::cout << "ความเครียด: ปานกลาง\n";
    }
    else if (totalScore >= 8 && totalScore <= 9)
    {
        std::cout << "ความเครียด: มาก\n";
    }
    else if (totalScore >= 10 && totalScore <= 15)
    {
        std::cout << "ความเครียด: มากที่สุด\n";
    }
    else
    {
        std::cout << "คะแนนไม่ถูกต้อง\n";
    }

    return totalScore;
}
