// https://practice.geeksforgeeks.org/problems/tower-of-hanoi-1587115621/1

Class Solution{
    public:

    long long toh(int N, int from, int to, int aux) {
       
    if (N == 0) {
        return 0;
    }
    toh(N - 1 , from, to, aux);
    cout << "Move disk " << N << " from rod " << from << " to rod " << to << endl;
    toh(N - 1 , from, to, aux);
    }

};
