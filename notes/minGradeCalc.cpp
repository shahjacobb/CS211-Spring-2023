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
        int min = grades[0];
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
    while(true){
        cout << "Enter a grade. Enter -1 if finished or if no grades yet recieved.";
        cin >> x;
        if (x == -1)
        break;
        grades.push_back(x);
    }
    
    cout << "Min of grades are:" << minGrade(grades);

    
}