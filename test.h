#ifndef TEST_H
#define TEST_H


class Test
{
    private:
        void testPawn();
        void testBishop();
        void testKnight();
        void testRook();
        void testQueen();
        void testKing();

        void testIfCheck();
        void testEnPassant();

        void testCastle();
        void testEvaluate();
        void testDraw();
        void testAi();

        void myAssert(int id, int b);
        int numOfTestsDone;

    public:
        Test();
};

#endif // TEST_H
