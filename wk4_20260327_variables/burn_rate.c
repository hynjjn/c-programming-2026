#include <stdio.h>

#define INVESTMENT        50000000L  // 초기 투자금
#define TEAMMATES         3          // 팀원 수
#define MINIMUM_WAGES     10320L     // 최저시급
#define MORTGAGE          1000000L   // 월세 및 대출 상환
#define OPERATION_FEE     450000L    // 기타 운영비
#define REVENUE           200000L    // 현재 월 매출

// 주 5일 * 8시간 * 4주 = 160시간
#define MONTHLY_WORKING_HOURS 160L

int main() {
    // 1. 월 지출 및 손익 계산
    // 월 인건비 = 팀원(3명) * 시급 * 160시간
    long monthly_labor_cost = TEAMMATES * MINIMUM_WAGES * MONTHLY_WORKING_HOURS;

    // 총 월 지출 = 인건비 + 월세 + 운영비
    long total_expense = monthly_labor_cost + MORTGAGE + OPERATION_FEE;

    // 월간 적자액 = 총 지출 - 현재 매출
    long monthly_loss = total_expense - REVENUE;

    // 문제 1: 몇 개월을 버틸 수 있는가?
    // 투자금 / 월 적자액 (소수점 결과를 보기 위해 double 사용)
    double survival_months = (double)INVESTMENT / monthly_loss;

    // 문제 2: 인건비를 인당 300만원씩 받기 위한 최소 매출
    // 목표 인건비(300만 * 3명) + 고정비(월세 + 운영비)
    long target_labor_total = TEAMMATES * 3000000L;
    long required_revenue   = target_labor_total + MORTGAGE + OPERATION_FEE;

    // 결과 출력
    printf("========== 사업 분석 (일반 계산) ==========\n");
    printf("1. 한 달 총 지출액: %ld원\n", total_expense);
    printf("   - 인건비 합계: %ld원\n", monthly_labor_cost);
    printf("   - 고정비 합계: %ld원\n", MORTGAGE + OPERATION_FEE);
    printf("2. 현재 월 적자 금액: %ld원\n", monthly_loss);
    printf("------------------------------------------\n");
    printf("Q1. 현재 투자금으로 버틸 수 있는 기간: %.1f개월\n", survival_months);
    printf("Q2. 인당 300만원 수익을 위한 최소 매출: %ld원\n", required_revenue);
    printf("==========================================\n");

    return 0;
}
