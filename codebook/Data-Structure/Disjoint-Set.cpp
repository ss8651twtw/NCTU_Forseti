const int N = 10000;
int par[N];
void init(){
    for(int i = 0; i < N; i++)
        par[i] = i;
}
int find(int x){
    return x == par[x] ? x : par[x] = find(par[x]);
}
void Union(int x, int y){
    return par[find(x)] = find(y);
}