# include <iostream>
# include <string>
using namespace std;

int main(){

    string hate="I hate ";
    string love="I love ";
    string that="that ";
    string it="it";

    int number;

    cin>>number;

    int counter;
    
    counter=1;

    string answer_string;

    while (counter<=number){

    if (counter%2==1)
    {
        answer_string+=hate;
    }
    else if (counter%2==0)
    {
        answer_string+=love;
    }
    
    if (counter==number){
        answer_string+=it;
    }
    else
    {
        answer_string+=that;
    }

        counter++;
    }
    cout<<answer_string;
    return 0;
}