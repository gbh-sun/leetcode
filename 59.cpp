//Êı×é_ÂİĞı¾ØÕó_59
#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> generateMatrix(int n) {
	vector<vector<int>> result(n,vector<int>(n,0));
	int loop = n / 2 + n % 2;
	int x = 0, y = 0,unit=n-1;
	int current = 1;
	while (loop > 0 && unit >=0) {
		if (unit == 0) {
			result[x][y] = current;
			break;
		}

		for (int i = 0; i < 4; i++) {
			int num = unit;
			if (i == 0) {
				while (num--) {
					result[x][y++] = current++;
				}
			}else if(i == 1) {
				while (num--) {
					result[x++][y] = current++;
				}
			}else if (i == 2) {
				while (num--) {
					result[x][y--] = current++;
				}
			}else{
				while (num--) {
					result[x--][y] = current++;
				}
			}
		}
		loop--;
		unit =unit-2;
		y++; x++;
	}
	return result;

}
//
//int main() {
//	int n = 6;
//	vector<vector<int>> result = generateMatrix(n);
//		for (int i = 0; i < n; i++) {
//			for (int j = 0; j < n; j++) {
//				cout << result[i][j]<<"    ";
//			}
//			cout << endl;
//		}
//
//	return 0;
//}