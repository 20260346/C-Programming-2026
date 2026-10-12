 {
     int current;
     int prev = -1;
     int consecutive = 0;
     int total_count = 0;

     printf("--- 2번 문제: 같은 숫자 세 번 연속 ---\n");
     printf("1~9 사이의 정수를 연속해서 입력하세요.\n");

     while (1) {
         printf("입력: ");
         scanf("%d", &current);

         total_count++;

         if (current == prev) {
             consecutive++;
         }
         else {
             prev = current;
             consecutive = 1;
         }

         if (consecutive == 3) {
             printf("[결과] 숫자 %d가 3번 연속 -> 전체 %d회 입력됨\n\n", current, total_count);
             break;
         }
     }
    }