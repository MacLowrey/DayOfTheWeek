/* Jon Lowrey
 Programming I
 Due: January 27, 2011
 Day of the Week
 This program will input a month, day and a year, then
 output the Day of the Week.
 */

#include <iostream>
using namespace std;
int main(int argc, const char * argv[])
{
    int day, month, year,t, dotw;
    int te = -1;
    
    cout << "Enter Month Day And Year, for instance, June 18th 2009 as  '6 18 2009' and the day of the week will be returned for that day. \n";
 //The following table is used to calculate the day of the week.
    /*Jan   1
    Feb   4
    Mar   4
    Apr   0
    May   2
    Jun   5
    Jul   0
    Aug   3
    Sept  6
    Oct   1
    Nov   4
    Dec   6
    */
    cin >>month>>day>>year;
    
    
   switch (month) {
        case 1:
            te=1;
            break;
        case 2:
            te=4;
            break;
        case 3:
            te=4;
            break;
        case 4:
            te=0;
            break;
        case 5:
            te=2;
            break;
        case 6:
            te=5;
            break;
        case 7:
            te=0;
            break;
        case 8:
            te=3;
            break;
        case 9:
            te=6;
            break;
        case 10:
            te=1;
            break;
        case 11:
            te=4;
            break;
        case 12:
            te=6;
            break;
       default:break;}
    
            t = te + day + year + 6;
            t = t + year / 4 - year / 100 + year / 400;
            
            /* leap year adjustment */
            if ((year % 400 == 0) && (month <= 2)) t = t - 1;
                else if (year % 100 == 0) {}; /* not a leap year */
            if ((year % 4 == 0) && (month <= 2))
                    t = t - 1;
            
            
            dotw = t%7;
            if (dotw == 0) cout << "Saturday" << endl;
            if (dotw == 1) cout<<"Sunday"<<endl;
            if (dotw == 2) cout<<"Monday"<<endl;
            if (dotw == 3) cout<<"Tuesday"<<endl;
            if (dotw == 4) cout<<"Wednesday"<<endl;
            if (dotw == 5) cout<<"Thursday"<<endl;
            if (dotw == 6) cout<<"Friday"<<endl;
            
    }


