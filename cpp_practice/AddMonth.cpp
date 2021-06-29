#include <iostream> // standard input, output

class Date {
  int year_;
  int month_;
  int day_;

 public:
  void SetDate(int year, int month, int date){
      year_ = year;
      month_ = month;
      day_ = date;
  }

  void RoundUp_month(void)
  {
            day_ = 1;
            AddMonth(1);
  }
  void AddDay(int inc){
        if (inc <= 0)
            return ;
        else if (month_ == 2 && day_ == 28)
            RoundUp_month();
        else if (((month_ < 8 && month_ % 2) || (month_ > 7 && !(month_ % 2))) && (day_ == 31))
            RoundUp_month();
        else if (((month_ < 8 && !(month_ % 2)) || (month_ > 7 && month_ % 2)) && (day_ == 30))
            RoundUp_month();
        else
            day_++;
        AddDay(--inc);
  }
  void AddMonth(int inc){
        if (inc <= 0)
            return ;
        if (month_ == 12)
        {
            month_ = 1;
            AddYear(1);
        }
        else
        {
            month_ ++;
        }
        AddMonth(--inc);
  }
  void AddYear(int inc){
        if (inc <= 0)
            return ;
        year_ = year_ + inc;
  }
  void ShowDate(){
      std::cout << year_ << " 년 " << month_ << " 월 " << day_ << " 일" << std::endl;
  }
};

int
    main(void)
{
    Date date;

    date.SetDate(2021, 06, 21);
    date.AddDay(10);
    date.ShowDate();
}