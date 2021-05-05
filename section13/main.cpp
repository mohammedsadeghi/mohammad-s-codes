#include <iostream>
#include <string>
#include <vector>


using namespace std;
class Movies{
private:
    string name;
    int watched;
    int rating;
    vector <Movies> movies;
public:
    bool add_movies(string nam,int rate,int watch);
    bool increment (string nam);
    string get_name()const {
    return name;
    }
    void display()const{
    cout<<name<<"  "<<rating<<"  "<<watched<<endl;
    }
    Movies(string nam,int rate,int watch):name{nam},rating{rate},watched{watch}{};

};
bool Movies::add_movies(string nam,int rate,int watch){
    for (Movies movie:movies){
        if (movie.name==nam){
            return false;
        }
    Movies temp {nam,rate,watched};
    movies.push_back(temp);
    return true;
}
}
int main()
{

    return 0;
}
