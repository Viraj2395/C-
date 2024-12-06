// Abstract Base Class & Pure Virtual Functions in C++
#include <iostream>
#include <cstring>
using namespace std;

class CWH{
    protected:
        string title;
        float rating;
    public:
        CWH(string s , float r){
            title = s;
            rating = r;
        }

        virtual void display() = 0;
        
};

class CWHVideo :public CWH{
    protected:
        float VideoLenth;
    public:
        CWHVideo(string s, float r, float Vl): CWH(s,r){
            VideoLenth = Vl;
        }
        void display(){
            cout<<"Title of this video is : "<< title << endl;
            cout<<"This video has ratings of the "<< rating <<" Out of 5" <<endl;
            cout<<"The lenth of this video is : "<< VideoLenth << " Minutes"<<endl;
        }
};

class CWHText :public CWH{
    protected:
        int words;
    public:
        CWHText(string s, float r, int wc): CWH(s,r){
            words = wc;
        }
        void display(){
            cout<<"Title of this Text tutorial  is : "<< title << endl;
            cout<<"This Text tutorial has ratings of the "<< rating <<" Out of 5" <<endl;
            cout<<"The word count of this video is : "<< words << " Numbers"<<endl;
        }
};

int main(){
    string title;
    int words;
    float rating, VideoLenth;

    title = "Viraj Video";
    rating = 4.9;
    VideoLenth = 23.26;
    CWHVideo djvideo(title,rating,VideoLenth);
    
    title = "Viraj Website";
    rating = 4.7;
    words = 235;
    CWHText djtext(title,rating,words);

    CWH *tuts[2];
    tuts[0] = &djvideo;
    tuts[1] = &djtext;

    tuts[0] ->display();
    tuts[1] ->display();


    return 0;
}