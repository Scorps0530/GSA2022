// 연도별 연평균 월평균강수량 구하기

#pragma warning(disable:4996)
#include <stdio.h>

#define YEARS 3
#define MONTHS 12

int main() {
	float temp[YEARS][MONTHS] = { {-0.9,1,7.1,12.1,19.4,22.5,25.9,27.2,22.6,16.4,7.6,1.4},
								  {1.6,2.5,7.7,11.1,18,23.9,24.1,26.5,21.4,14.3,8,-0.3},
								  {-2.4,2.7,9,14.2,17.1,22.8,28.1,25.9,22.6,15.6,8.2,0.6} };

	printf("[Yearly average temperatures of %dyears]\n", YEARS);
	for (int year = 0; year < YEARS; year++) {
		float av_temp = 0;
		for (int month = 1; month <= MONTHS; month++)
			av_temp += temp[year][month - 1];
		av_temp /= MONTHS;
		printf("Year %d : average temperature = %.1f\n", year, av_temp);
	}
}