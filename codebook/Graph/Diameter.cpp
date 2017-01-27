int dfs(int x, int pa) {
	int h1 = 0, h2 = 0;
	for (auto &i : edge[x]) {
		if (i == pa) continue;
		int h = dfs(i, x) + 1;
		if (h > h1) h2 = h1, h1 = h;
		else if (h > h2) h2 = h;
	}
	ans = max(ans, h1 + h2);
	return h1;
}