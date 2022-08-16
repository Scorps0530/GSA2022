/*
º´ÇÕ
 
- input
3 4
1 2 3
1 3 4 6

- output
1 1 2 3 3 4 6
*/



#pragma warning(disable:4996)

#include <stdio.h>

int main()
{
	int n, m;
	int a[1001], b[1001], c[2001];

	scanf("%d%d", &n, &m);
	for (int i = 0; i < n; i++) scanf("%d", &a[i]);
	for (int i = 0; i < m; i++) scanf("%d", &b[i]);

	int c_index = 0;
	int a_index = 0, b_index = 0;
	for (c_index = 0; a_index < n && b_index < m; c_index++)
		c[c_index] = (a[a_index] < b[b_index] ? a[a_index++] : b[b_index++]);
	for (; a_index < n; a_index++)
		c[c_index++] = a[a_index];
	for (; b_index < m; b_index++)
		c[c_index++] = b[b_index];

	for (int i = 0; i < n + m; i++) printf("%d ", c[i]);

	return 0;
}