#include <iostream>
#include<string.h>

using namespace std;
    
int main()
{
    cout<<"enter the word\n";
    char word[20];
    cin>>word;
    int array_size;
    array_size=strlen(word);
    for(int i=0;i<array_size;i++){
        if(word[i] != word[array_size-(i+1)]){
        cout<<word;
        cout <<" is not palindrom!\n";
            
        }
    }
    cout<<word;
    cout<<" is palindrom!\n";
    
    
    
        
    
    

    return 0;
}
