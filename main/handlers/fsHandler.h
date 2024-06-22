String filenames[100];
int pointer = 0;
int maxp = 10;

// extern void createFS(int max){
//     filenames[0] == "";
//     maxp = max;
// }

extern int createFile(String filename){
    if (pointer < maxp)
    {
        filenames[pointer] += filename;
        pointer++;
        return 0;
    }
    return 1;
}
extern void printAllFileNames(){
    for (int i = 0; i < pointer; i++)
    {
        Serial.println(filenames[i]);
    }
}
