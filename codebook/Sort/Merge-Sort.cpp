void MergeSort(int* l, int* r){
    if(l + 1 == r)return;
    int* mid = l + (r - l) / 2;
    MergeSort(l, mid);
    MergeSort(mid, r);
    vector<int> v(r - l);
    merge(l, mid, mid, r, v.begin());
    int i = 0;
    for(auto &x : v){
    	*(l + i) = x;
    	i++;
	}
}