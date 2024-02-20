// 进度条
//#include <stdio.h>
//#include <stdint.h>
//#include <inttypes.h>
//#include <windows.h>
//
//int main(void)
//{
//	const uint32_t total_steps = 50;
//
//	puts("处理中，请稍后：");
//
//	for (uint32_t i = 0; i <= total_steps; i++) {
//		printf("\r[");
//
//		// 打印进度条的完整部分
//		for (uint32_t j = 0; j < i; j++) {
//			printf("#");
//		}
//
//		for (uint32_t j = i; j < total_steps; j++) {
//			printf(" ");
//		}
//
//		printf("] %" PRIu32 "%%", (i * 100) / total_steps);
//		// （已经传输的数据量 / 文件总大小） * 100%
//
//		fflush(stdout); // 确保进度条及时显示
//
//		Sleep(10);
//	}
//
//	puts("\n执行完毕！");
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
//	puts("处理中，请稍后：");
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
//	puts("\n执行完毕！");
//
//	return 0;
//}

// 检查组件故障（选）
//#include <stdio.h>
//#include <stdint.h>
//#include <inttypes.h>
//#include <stdbool.h>
//#include <windows.h>
//#include <math.h>
//#include <time.h>
//
//// 模拟组件的健康检查功能
//bool check_component_health(uint32_t component_id);
//
//
//int main(void)
//{
//	const uint32_t total_components = 5;// 系统有5个组件
//
//	srand(time(NULL));
//
//	puts("开始健康检查...\n");
//
//	for (uint32_t i = 0; i < total_components; i++) {
//		printf("检查组件 %" PRIu32 "...\n", i + 1);
//
//		if (check_component_health(i + 1)) {
//			printf("组件 %" PRIu32 " 状态良好.\n", i + 1);
//		}
//
//		else {
//			printf("组件 %" PRIu32 " 出现故障.\n", i + 1);
//		}
//
//		//在实际应用中这里会处理错误，比如警告！或者是尝试修复方案
//		//，或还是列举修复方案进行选择
//	}
//
//	puts("健康检查已完成！\n");
//
//	return 0;
//}
//
//bool check_component_health(uint32_t component_id) {
//	// 在实际应用中，这里真的可能会发行网络请求或者是执行检查的复杂操作
//	// 我们这里就简单模拟一下，假设所有的组件偶尔都会有故障
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
//	const int NUM_TABLES = 3;// 假设餐厅有三个桌子
//
//	const int SEAT_PER_TABLE = 4;// 假设每个桌子有4个座位
//
//	// 外层遍历循环 每个桌子
//	for (int table_num = 1; table_num <= NUM_TABLES; table_num++) {
//		
//		printf("桌子编号： %d\n", table_num);
//
//		// 内层遍历循环 当前桌子的每个座位
//		for (int seat_num = 1; seat_num <= SEAT_PER_TABLE; seat_num++) {
//			printf("\t座位编号： %d\n", seat_num);
//
//			// 在这里执行具体的座位分配操作
//			printf("\t\t处理中：桌子 %d, 座位 %d\n", table_num, seat_num);
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
//	numbers[1] = 3000; // 下标
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
//	// 僵尸类别
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
//	// 定义一个包含不同类型的僵尸数组
//	uint32_t zombies[10] = { regular_zombie, conehead_zombie,
//	bucket_zombie, flag_zombie, newspaper_zombie, regular_zombie, conehead_zombie,
//	bucket_zombie, flag_zombie, newspaper_zombie };
//
//	uint32_t battle_plants[5] = { 6, 7, 8, 9, 10 }; // 假如标号6-10也是特定植物
//
//	// 假如以下植物是可选植物的ID
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

// 分数
//#include <stdio.h>
//#include <stdint.h>
//#include <inttypes.h>
//# define STUDENT_COUNT 5
//
//int main(void)
//{
//	/*
//		加入我们有五个学生的成绩，我们需要找出平均成绩最高成绩，最低成绩，排序。
// */
//	uint32_t grades[STUDENT_COUNT] = { 85, 92, 88, 96, 79 };
//
//	uint32_t sum = 0;
//
//	uint32_t max_grade = grades[0];
//
//	uint32_t min_grade = grades[0];
//
//	puts("所有人的成绩如下：");
//
//	for (uint32_t index = 0; index < STUDENT_COUNT; index++) {
//		printf("学生%" PRIu32 "的成绩：%" PRIu32 "\n", index + 1, grades[index]);
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
//	printf("5个学生的成绩总和：%d\n", sum);
//
//	printf("平均成绩：%.2f\n", average);
//
//	printf("最高成绩:%d\n", max_grade);
//
//	printf("最低成绩:%d\n", min_grade);
//
//	return 0;
//}


//天气
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
//	puts("一周内的温度情况：");
//
//	for (uint32_t index = 0; index < DAYS_IN_WEEK; index++) {
//		printf("第%" PRIu32 "天：%" PRIu32 "°C\n", index, daily_temperatures[index]);
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
//	printf("\n平均温度：%.2f°C\n", ave);
//
//	printf("最热的天：%d°C\n", max_temp);
//
//	printf("最冷的天：%d°C\n", min_temp);
//
//	return 0;
//}


// 账户存款
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
//	puts("初始账户余额：");
//
//	for (uint8_t index = 0; index < ACCOUNT_COUNT; index++) {
//		printf("账户 %d:%" PRId64 "元\n", index + 1, account_balances[index]);
//	}
//
//	account_balances[0] += 5000;
//
//	account_balances[1] -= 2500;
//
//	puts("\n进行存款和取款后的账户余额：");
//
//	for (uint8_t index = 0; index < ACCOUNT_COUNT; index++) {
//		printf("账户 %d:%" PRId64 "元\n", index + 1, account_balances[index]);
//
//		total_assets += account_balances[index];
//	}
//
//	printf("\n总资产：%" PRId64 "\n", total_assets);
//
//	return 0;
//}
// 投票
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
//	uint32_t winner = 0; // 候选人的index下标索引
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
//			winner = index;			// 更新候选人的index索引（下标） 
//		}
//	}
//
//	puts("各个候选人的得票数：");
//
//	for (uint32_t index = 0; index < CANDIDATE_COUNT; index++) {
//		printf("候选人 %d: %d票\n", index + 1, votes[index]);
//	}
//
//	printf("\n总票数：%d\n", total_votes);
//
//	printf("获胜候选人：候选人 %d,得票数：%d\n", winner + 1, max_votes);
//
//	return 0;
//}


// 字母次数
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
//	// 统计每个字母出现的次数
//
//	for (uint32_t i = 0; text[i] != '\0'; i++)
//	{
//		char ch = tolower(text[i]); // 转化成小写
//
//		if (ch >= 'a' && ch <= 'z') {
//			frequency[ch - 'a']++;// 更新字母出现的频率
//		}
//	}
//
//	puts("字母频率：");
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
//	//  二维数组
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

// 五子棋
//#include <stdio.h>
//#include <stdint.h>
//#include <inttypes.h>
//#define BOARD_SIZE 15
//
//int main(void)
//{
//	char board[BOARD_SIZE][BOARD_SIZE];		// 15 x 15
//											// 坐标
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
//	char cont = 'y';			// 用户是否已经考虑好准备落子？y就是yes
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
//		printf("请输入棋子的行号和列号（0-%d）， 用空格隔开:\n", BOARD_SIZE - 1);
//
//		scanf_s("%" SCNu8 " %" SCNu8, &x, &y);
//
//		// check
//
//		if (x < BOARD_SIZE && y < BOARD_SIZE && board[x][y] == '.') {
//			board[x][y] = 'X'; // 在棋盘上放一个棋子
//		}
//
//		else {
//			puts("无效坐标或者该位置已经有棋子了！");
//		}
//		puts("是否继续下棋？（y/n）");
//
//		scanf_s(" %c", &cont, 1);
//
//		printf("\033[H\033[J");
//	}
//
//	printf("GAME OVER！\n");
//
//	return 0;
//}

