#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifdef DEBUG
# define debug( fmt, ... ) \
        fprintf( stderr, "%s:%u: %s: " fmt "\n", \
                        __FILE__, __LINE__, __FUNCTION__, ##__VA_ARGS__ )
#else
# define debug( fmt, ... )
#endif /* DEBUG */

#define MAX_SCHEDULE_NUM 100000

struct schedule_t {
        int schedule_num;
        char schedule_data[MAX_SCHEDULE_NUM];
};

int get_schedule(struct schedule_t *schedule, FILE *fp)
{
        int i = 0;
        char buffer[MAX_SCHEDULE_NUM * 2];
        char *token;

        if( fgets(buffer, sizeof(buffer), fp) == NULL ) {
                return -1;
        }
        schedule->schedule_num = atoi(buffer);

        if( fgets(buffer, sizeof(buffer), fp) == NULL ) {
                return -1;
        }
        token = strtok(buffer, " ");
        while (token != NULL) {
                schedule->schedule_data[i] = atoi(token);
                token = strtok(NULL, " ");
                i++;
        }

        return 0;
}

void debug_schedule(struct schedule_t *schedule)
{
        char buffer[MAX_SCHEDULE_NUM * 2];
        char *p_buffer;

        p_buffer = buffer;

        for(int i = 0; i < schedule->schedule_num; i++) {
                p_buffer[0] = schedule->schedule_data[i] + '0';
                p_buffer[1] = ' ';
                p_buffer += 2;
        }
        p_buffer[0] = '\0';
        debug("%d", schedule->schedule_num);
        debug("%s", buffer);
}

int check_week(struct schedule_t *schedule, int base)
{
        int holiday_count = 0;

        if(schedule->schedule_num < (base + 7)) {
                return -1;
        }

        for(int i = base; i < (base + 7); i++) {
                if(schedule->schedule_num <= i) {
                        return -1;
                }
                if(schedule->schedule_data[i] == 0) {
                        holiday_count++;
                }
        }

        return holiday_count;
}

int get_work_days(struct schedule_t *schedule, int base)
{
        int work_days_sum = 0;
        int holiday_count;

        holiday_count = check_week(schedule, base);
        if(holiday_count < 0) {
                return work_days_sum;
        }
        if(holiday_count < 2) {
                return work_days_sum;
        }
        work_days_sum += 7;
        base++;

        do {
                holiday_count = check_week(schedule, base);
                if(holiday_count < 0) {
                        return work_days_sum;
                }
                if(holiday_count < 2) {
                        return work_days_sum;
                }
                work_days_sum++;
                base++;
        } while(1);
}

int analyze_schedule(struct schedule_t *schedule)
{
        int max_work_days = 0;
        int work_days;

        for(int i = 0; i < schedule->schedule_num; i++) {
                work_days = get_work_days(schedule, i);
                if(max_work_days < work_days) {
                        max_work_days = work_days;
                }
        }

        return max_work_days;
}

int main(void)
{
        struct schedule_t schedule;

        /* get schedule */
        if (get_schedule(&schedule, stdin) < 0 ) {
                fprintf(stderr, "get_schedule: get schedule error.");
                return 1;
        }
        debug_schedule(&schedule);
        printf("%d\n", analyze_schedule(&schedule));

        return 0;
}
