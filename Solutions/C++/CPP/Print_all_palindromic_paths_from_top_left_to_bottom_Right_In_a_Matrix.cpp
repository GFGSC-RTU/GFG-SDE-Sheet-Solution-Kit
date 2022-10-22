
// Print all palindromic paths from top left to bottom right in a matrix...

#include<bits/stdc++.h>
using namespace std;
#define N 4
bool isPalin(string str){
	int len = str.length() / 2;
	for (int i = 0; i < len; i++){
		if (str[i] != str[str.length() - i - 1])
			return false;
	}
	return true;
}

void palindromicPath(string str, char a[][N],int i, int j, int m, int n){
	if (j < m - 1 || i < n - 1){
		if (i < n - 1)
			palindromicPath(str + a[i][j], a, i + 1, j, m, n);
		if (j < m - 1)
			palindromicPath(str + a[i][j], a, i, j + 1, m, n);
  }
	else {
		str = str + a[n - 1][m - 1];
		if (isPalin(str))
			cout<<(str)<<endl;
	}
}

int main(){
	char arr[][N] = {{ 'a', 'a', 'b' }, { 'b', 'a', 'a' }, { 'a', 'b', 'a' }};
	string str = "";
	palindromicPath(str, arr, 0, 0, 4, 3);
	return 0;
}
