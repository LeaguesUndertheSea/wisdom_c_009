// ������
//#include <stdio.h>
//#include <stdint.h>
//#include <inttypes.h>
//#include <windows.h>
//
//int main(void)
//{
//	const uint32_t total_steps = 50;
//
//	puts("�����У����Ժ�");
//
//	for (uint32_t i = 0; i <= total_steps; i++) {
//		printf("\r[");
//
//		// ��ӡ����������������
//		for (uint32_t j = 0; j < i; j++) {
//			printf("#");
//		}
//
//		for (uint32_t j = i; j < total_steps; j++) {
//			printf(" ");
//		}
//
//		printf("] %" PRIu32 "%%", (i * 100) / total_steps);
//		// ���Ѿ������������ / �ļ��ܴ�С�� * 100%
//
//		fflush(stdout); // ȷ����������ʱ��ʾ
//
//		Sleep(10);
//	}
//
//	puts("\nִ����ϣ�");
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdint.h>
//#include <inttypes.h>
//#include <windows.h>
//
//int main(void)
//{
//	const uint32_t total_steps = 50;
//
//	puts("�����У����Ժ�");
//
//	for (uint32_t i = 0; i <= total_steps; i++) {
//		printf("\r[");
//
//		for (uint32_t j = 0; j < i; j++) {
//			printf("*");
//		}
//
//		for (uint32_t j = i; j < total_steps; j++) {
//			printf(" ");
//		}
//
//		printf("] %" PRIu32 "%%", (i * 100) / total_steps);
//
//		fflush(stdout);
//
//		Sleep(10);
//	}
//
//	puts("\nִ����ϣ�");
//
//	return 0;
//}

// ���������ϣ�ѡ��
//#include <stdio.h>
//#include <stdint.h>
//#include <inttypes.h>
//#include <stdbool.h>
//#include <windows.h>
//#include <math.h>
//#include <time.h>
//
//// ģ������Ľ�����鹦��
//bool check_component_health(uint32_t component_id);
//
//
//int main(void)
//{
//	const uint32_t total_components = 5;// ϵͳ��5�����
//
//	srand(time(NULL));
//
//	puts("��ʼ�������...\n");
//
//	for (uint32_t i = 0; i < total_components; i++) {
//		printf("������ %" PRIu32 "...\n", i + 1);
//
//		if (check_component_health(i + 1)) {
//			printf("��� %" PRIu32 " ״̬����.\n", i + 1);
//		}
//
//		else {
//			printf("��� %" PRIu32 " ���ֹ���.\n", i + 1);
//		}
//
//		//��ʵ��Ӧ��������ᴦ����󣬱��羯�棡�����ǳ����޸�����
//		//�������о��޸���������ѡ��
//	}
//
//	puts("�����������ɣ�\n");
//
//	return 0;
//}
//
//bool check_component_health(uint32_t component_id) {
//	// ��ʵ��Ӧ���У�������Ŀ��ܻᷢ���������������ִ�м��ĸ��Ӳ���
//	// ��������ͼ�ģ��һ�£��������е����ż�������й���
//	if (rand() % 10 < 2) { // 20%
//		return false;
//	}
//}

//#include <stdio.h>
//#include <stdbool.h>
//#include <inttypes.h>
//#include <stdint.h>
//
//int main(void)
//{
//	const int NUM_TABLES = 3;// �����������������
//
//	const int SEAT_PER_TABLE = 4;// ����ÿ��������4����λ
//
//	// ������ѭ�� ÿ������
//	for (int table_num = 1; table_num <= NUM_TABLES; table_num++) {
//		
//		printf("���ӱ�ţ� %d\n", table_num);
//
//		// �ڲ����ѭ�� ��ǰ���ӵ�ÿ����λ
//		for (int seat_num = 1; seat_num <= SEAT_PER_TABLE; seat_num++) {
//			printf("\t��λ��ţ� %d\n", seat_num);
//
//			// ������ִ�о������λ�������
//			printf("\t\t�����У����� %d, ��λ %d\n", table_num, seat_num);
//		}
//
//		
//	}
//
//	return 0;
//}


//#include <stdio.h>
//#include <stdint.h>
//#include <inttypes.h>
//
//int main(void)
//{
//	uint32_t numbers[10] = { 100, 200, 300, 400, 500, 600, 700, 800, 900, 1000 };
//
//	numbers[1] = 3000; // �±�
//
//	for (uint32_t index = 0; index < 10; index++) {
//		printf("%" PRIu32 "\n", numbers[index]);
//	}
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdint.h>
//#include <inttypes.h>
//
//int main(void)
//{
//	uint32_t numbers[10] = { 100, 200, 300, 400, 500, 600, 700, 800, 900, 1000 };
//
//	numbers[2] = 3000;
//
//	for (uint32_t index = 0; index < 10; index++) {
//		printf("%" PRIu32 "\n", numbers[index]);
//	}
//	return 0;
//}

//#include <stdio.h>
//#include <stdint.h>
//#include <inttypes.h>
//
//int main(void)
//{
//
//	// ��ʬ���
//	uint32_t regular_zombie = 1;
//
//	uint32_t conehead_zombie = 2;
//
//	uint32_t bucket_zombie = 3;
//
//	uint32_t flag_zombie = 4;
//
//	uint32_t newspaper_zombie = 5;
//
//	uint32_t sun_flower = 6;
//
//	// ����һ��������ͬ���͵Ľ�ʬ����
//	uint32_t zombies[10] = { regular_zombie, conehead_zombie,
//	bucket_zombie, flag_zombie, newspaper_zombie, regular_zombie, conehead_zombie,
//	bucket_zombie, flag_zombie, newspaper_zombie };
//
//	uint32_t battle_plants[5] = { 6, 7, 8, 9, 10 }; // ������6-10Ҳ���ض�ֲ��
//
//	// ��������ֲ���ǿ�ѡֲ���ID
//	uint32_t available_plants[10] = { 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };
//
//	printf("Zombies in the game (Type ids):\n");
//	for (uint32_t i = 0; i < 5; i++) {
//		printf("%" PRIu32 "\n", zombies[i]);
//		}
//
//	printf("\nPlants selected for the battle (Type ids):\n");
//
//	for (uint32_t i = 0; i < 5	; i++) {
//		printf("%" PRIu32 "\n", battle_plants[i]);
//	}
//
//	printf("\nAvailable plants selected in the game (Type ids):");
//
//	for (uint32_t i = 0; i < 10; i++) {
//		printf("%" PRIu32 "\n", available_plants[i]);
//	}
//
//	return 0;
//}

// ����
//#include <stdio.h>
//#include <stdint.h>
//#include <inttypes.h>
//# define STUDENT_COUNT 5
//
//int main(void)
//{
//	/*
//		�������������ѧ���ĳɼ���������Ҫ�ҳ�ƽ���ɼ���߳ɼ�����ͳɼ�������
// */
//	uint32_t grades[STUDENT_COUNT] = { 85, 92, 88, 96, 79 };
//
//	uint32_t sum = 0;
//
//	uint32_t max_grade = grades[0];
//
//	uint32_t min_grade = grades[0];
//
//	puts("�����˵ĳɼ����£�");
//
//	for (uint32_t index = 0; index < STUDENT_COUNT; index++) {
//		printf("ѧ��%" PRIu32 "�ĳɼ���%" PRIu32 "\n", index + 1, grades[index]);
//
//		sum += grades[index];
//
//		if (grades[index] > max_grade) {
//			max_grade = grades[index];
//		}
//
//		if (grades[index < min_grade]) {
//			min_grade = grades[index];
//		}
//	}
//
//	double average = (double)sum / STUDENT_COUNT;
//
//	printf("5��ѧ���ĳɼ��ܺͣ�%d\n", sum);
//
//	printf("ƽ���ɼ���%.2f\n", average);
//
//	printf("��߳ɼ�:%d\n", max_grade);
//
//	printf("��ͳɼ�:%d\n", min_grade);
//
//	return 0;
//}


//����
//#include <stdio.h>
//#include <stdint.h>
//#include <inttypes.h>
//# define DAYS_IN_WEEK 7
//
//int main(void)
//{
//	uint32_t daily_temperatures[DAYS_IN_WEEK] = { 22, 24, 19, 16, 24, 17, 18 };
//
//	uint32_t sum = 0;
//
//	uint32_t max_temp = daily_temperatures[0];
//
//	uint32_t min_temp = daily_temperatures[0];
//
//	puts("һ���ڵ��¶������");
//
//	for (uint32_t index = 0; index < DAYS_IN_WEEK; index++) {
//		printf("��%" PRIu32 "�죺%" PRIu32 "��C\n", index, daily_temperatures[index]);
//
//		sum += daily_temperatures[index];
//
//		if (daily_temperatures[index] > max_temp) {
//			max_temp = daily_temperatures[index];
//		}
//
//		if (daily_temperatures[index] < min_temp) {
//			min_temp = daily_temperatures[index];
//		}
//
//	}
//
//	double ave = (double)sum / DAYS_IN_WEEK;
//
//	printf("\nƽ���¶ȣ�%.2f��C\n", ave);
//
//	printf("���ȵ��죺%d��C\n", max_temp);
//
//	printf("������죺%d��C\n", min_temp);
//
//	return 0;
//}


// �˻����
//#include <stdio.h>
//#include <stdint.h>
//#include <inttypes.h>
//# define ACCOUNT_COUNT 3
//
//int main(void)
//{
//	int64_t account_balances[ACCOUNT_COUNT] = { 10000, 15000, 20000 };
//
//	int64_t total_assets = 0;
//	
//	puts("��ʼ�˻���");
//
//	for (uint8_t index = 0; index < ACCOUNT_COUNT; index++) {
//		printf("�˻� %d:%" PRId64 "Ԫ\n", index + 1, account_balances[index]);
//	}
//
//	account_balances[0] += 5000;
//
//	account_balances[1] -= 2500;
//
//	puts("\n���д���ȡ�����˻���");
//
//	for (uint8_t index = 0; index < ACCOUNT_COUNT; index++) {
//		printf("�˻� %d:%" PRId64 "Ԫ\n", index + 1, account_balances[index]);
//
//		total_assets += account_balances[index];
//	}
//
//	printf("\n���ʲ���%" PRId64 "\n", total_assets);
//
//	return 0;
//}
// ͶƱ
//#include <stdio.h>
//#include <stdint.h>
//#include <inttypes.h>
//# define CANDIDATE_COUNT 4
//
//int main(void)
//{
//	uint32_t votes[CANDIDATE_COUNT] = { 0 };
//
//	uint32_t total_votes = 0;
//
//	uint32_t max_votes = 0;
//
//	uint32_t winner = 0; // ��ѡ�˵�index�±�����
//
//	votes[0] += 150;
//	votes[1] += 200;
//	votes[2] += 180;
//	votes[3] += 190;
//
//	for (uint32_t index = 0; index < CANDIDATE_COUNT; index++) {
//		total_votes += votes[index];
//
//		if (votes[index] > max_votes) {
//			max_votes = votes[index];
//			winner = index;			// ���º�ѡ�˵�index�������±꣩ 
//		}
//	}
//
//	puts("������ѡ�˵ĵ�Ʊ����");
//
//	for (uint32_t index = 0; index < CANDIDATE_COUNT; index++) {
//		printf("��ѡ�� %d: %dƱ\n", index + 1, votes[index]);
//	}
//
//	printf("\n��Ʊ����%d\n", total_votes);
//
//	printf("��ʤ��ѡ�ˣ���ѡ�� %d,��Ʊ����%d\n", winner + 1, max_votes);
//
//	return 0;
//}


// ��ĸ����
//#include <stdio.h>
//#include <stdint.h>
//#include <inttypes.h>
//#include <ctype.h>
//#define LETTER_COUNT 26
//
//int main(void)
//{
//	uint32_t frequency[LETTER_COUNT] = { 0 };
//
//	char text[] = "Example text for frequency analysis.";
//
//	// ͳ��ÿ����ĸ���ֵĴ���
//
//	for (uint32_t i = 0; text[i] != '\0'; i++)
//	{
//		char ch = tolower(text[i]); // ת����Сд
//
//		if (ch >= 'a' && ch <= 'z') {
//			frequency[ch - 'a']++;// ������ĸ���ֵ�Ƶ��
//		}
//	}
//
//	puts("��ĸƵ�ʣ�");
//
//	for (uint32_t i = 0; i < LETTER_COUNT; i++) {
//		if (frequency[i] > 0) {
//			printf("%c: %d\n", 'a' + i, frequency[i]);
//		}
//	}
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdint.h>
//#include <inttypes.h>
//
//int main(void)
//{
//
//	//  ��ά����
//	uint32_t numbers_arr[5][5] = {
//	{1,2,3,4,5},
//	{2,3,4,5,6},
//	{3,4,5,6,7},
//	{4,5,6,7,8},
//	{5,6,7,8,9}
//	};
//
//
//	for (uint32_t i = 0; i < 5; i++) {
//		for (uint32_t j = 0; j < 5; j++) {
//			printf("%" PRIu32 " ", numbers_arr[i][j]);
//		}
//		printf("\n");
//	}
//
//
//	return 0;
//}

// ������
//#include <stdio.h>
//#include <stdint.h>
//#include <inttypes.h>
//#define BOARD_SIZE 15
//
//int main(void)
//{
//	char board[BOARD_SIZE][BOARD_SIZE];		// 15 x 15
//											// ����
//	uint8_t x, y;
//
//	for (uint8_t i = 0; i < BOARD_SIZE; i++) {
//		for (uint8_t j = 0; j < BOARD_SIZE; j++) {
//			board[i][j] = '.';
//			/*printf("%c ", board[i][j]);*/
//		}
//
//		/*printf("\n");*/
//	}
//
//	char cont = 'y';			// �û��Ƿ��Ѿ����Ǻ�׼�����ӣ�y����yes
//
//	while (cont == 'y' || cont == 'Y')
//	{
//
//		for (uint8_t i = 0; i < BOARD_SIZE; i++)
//		{
//			for (uint8_t j = 0; j < BOARD_SIZE; j++)
//			{
//				printf("%c ", board[i][j]);
//			}
//
//			printf("\n");
//		}
//
//		printf("���������ӵ��кź��кţ�0-%d���� �ÿո����:\n", BOARD_SIZE - 1);
//
//		scanf_s("%" SCNu8 " %" SCNu8, &x, &y);
//
//		// check
//
//		if (x < BOARD_SIZE && y < BOARD_SIZE && board[x][y] == '.') {
//			board[x][y] = 'X'; // �������Ϸ�һ������
//		}
//
//		else {
//			puts("��Ч������߸�λ���Ѿ��������ˣ�");
//		}
//		puts("�Ƿ�������壿��y/n��");
//
//		scanf_s(" %c", &cont, 1);
//
//		printf("\033[H\033[J");
//	}
//
//	printf("GAME OVER��\n");
//
//	return 0;
//}

