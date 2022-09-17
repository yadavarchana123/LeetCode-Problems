class Solution
{
    public:
        int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob)
        {
            const int monthDays[12] = { 31,
                28,
                31,
                30,
                31,
                30,
                31,
                31,
                30,
                31,
                30,
                31
            };
            int Alice_arr_day = stoi(arriveAlice.substr(3, 5)), Alice_arr_month = stoi(arriveAlice.substr(0, 2)), Bob_arr_day = stoi(arriveBob.substr(3, 5)), Bob_arr_month = stoi(arriveBob.substr(0, 2));
            int Alice_leave_day = stoi(leaveAlice.substr(3, 5)), Alice_leave_month = stoi(leaveAlice.substr(0, 2)), Bob_leave_day = stoi(leaveBob.substr(3, 5)), Bob_leave_month = stoi(leaveBob.substr(0, 2));
            for (int i = 0; i < Alice_arr_month - 1; i++)
                Alice_arr_day += monthDays[i];

            for (int i = 0; i < Bob_arr_month - 1; i++)
                Bob_arr_day += monthDays[i];
            for (int i = 0; i < Alice_leave_month - 1; i++)
                Alice_leave_day += monthDays[i];

            for (int i = 0; i < Bob_leave_month - 1; i++)
                Bob_leave_day += monthDays[i];
            int arr = max(Alice_arr_day, Bob_arr_day), dep = min(Alice_leave_day, Bob_leave_day);
            if (dep < arr) return 0;
            return (dep - arr + 1);
        }
};