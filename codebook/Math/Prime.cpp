const int N = 20000000;
bool sieve[N];
//用bitset可建更大的表但時間較久
//bitset<N> sieve;
vector<int> prime;
void linear_sieve(){
    for(int i = 2; i < N; i++){
        if(!sieve[i])prime.push_back(i);
        for(int j = 0; i * prime[j] < N; j++){
            sieve[i * prime[j]] = true;
            if(i % prime[j] == 0)break;
        }
    }
}