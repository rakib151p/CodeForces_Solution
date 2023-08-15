#include<bits/stdc++.h>
using namespace std;
int main(){
    int number_of_sub,temp,total_credit=0;
    double grade_sum=0,previous_credit,previous_grade;
    cout<<"How many credit you completed far: ";
    cin>>previous_credit;
    cout<<"What is the current CGPA: ";
    cin>>previous_grade;
    cout<<"Type here how many subject you attended till now:";
    cin>>number_of_sub;
    temp=number_of_sub;
    while(temp--){
        string obtained_grade;
        int credit;
        double grade=-1;
        cout<<"Number of credit:";
        cin>>credit;
        cout<<"Grade obtained: ";
        cin>>obtained_grade;
        total_credit+=credit;
        if(obtained_grade=="A")grade=4.00;
        if(obtained_grade=="A-")grade=3.67;
        if(obtained_grade=="B+")grade=3.33;
        if(obtained_grade=="B")grade=3.00;
        if(obtained_grade=="B-")grade=2.67;
        if(obtained_grade=="C+")grade=2.33;
        if(obtained_grade=="C")grade=2.00;
        if(obtained_grade=="C-")grade=1.67;
        if(obtained_grade=="D+")grade=1.33;
        if(obtained_grade=="D")grade=1.00;
        if(obtained_grade=="F")grade=0.00;
        grade_sum+=(grade*credit);
    }
    cout<<"Your obtaing CGPA is:"<<(grade_sum+(previous_grade*previous_credit))/(total_credit+previous_credit)<<endl;
}