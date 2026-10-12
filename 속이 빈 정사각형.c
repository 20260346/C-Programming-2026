  {
      int n;

      printf("--- 3번 문제: 속이 빈 정사각형 ---\n");
      printf("1~9 사이의 정수 n을 입력하세요: ");
      scanf("%d", &n);

      printf("[결과]\n");
      for (int i = 0; i < n; i++) {
          for (int j = 0; j < n; j++) {
              if (i == 0 || i == n - 1 || j == 0 || j == n - 1) {
                  printf("* ");
              }
              else {
                  printf("  ");
              }
          }
          printf("\n");
      }
    }

  return 0;
}