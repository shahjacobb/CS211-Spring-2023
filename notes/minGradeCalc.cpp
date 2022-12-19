#include <iostream>
#include <vector>
using namespace std;

int minGrade(vector<int> &grades)
{
    // calculate minimum here
    if (grades.size() == 0)
    return 0;
    else
    {
        int min = grades.begin();
        for (int i : grades)
        {
            
            if (i < min)
            min = i;
        }
        return min;
    }
}
int main()
{
    vector<int> grades;
    int x;
    do{
        cout << "Enter a grade. Enter -1 if finished or if no grades yet recieved.";
        cin >> x;
        grades.push_back(x);
    }
    while(x != -1);
    cout << "Min of grades are:" << minGrade(grades);

    
}