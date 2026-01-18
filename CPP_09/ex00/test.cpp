#include <string>

bool    controlDate(std::string date)
{
    std::string yearStr;
    std::string monthStr;
    std::string dayStr;
    
    int year;
    int month;
    int day;
    int i = 0;
    int j = 0;
    int flag = 0;
    int len = 0;
    while (date[i])
    {
        if (date[i] == '-' || !date[i + 1])
        {
            if (flag == 0)
            {
                std::string yearStr = date.substr(0, len);
            }
            else if (flag == 1)
            {
                std::string monthStr = date.substr(i - len , len);
            }
            else if (flag == 2)
                std::string dayStr = date.substr(i - len, len);
            flag++;
            len = 0;
        }
        i++;
        len++;
    }
}