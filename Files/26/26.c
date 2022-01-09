#include <stdio.h>

int main(){
    FILE *fileP;
    FILE *filePtr;
    int count, size;
    fileP = fopen("giris.txt", "r");
    filePtr = fopen("casus.txt", "w");
    if (fileP == NULL || filePtr == NULL)
        return 1;
    fseek(fileP, -11L, SEEK_END);//dosyanin son elemanin basini buluruz
    size = ftell(fileP);
    count = (size / 13) + 1;//sayilar 11 haneli her hane 1 byte ve \n 2 byte
    fseek(fileP, 0L, SEEK_SET);
    double kimlik[count];
    for (int i = 0; i < count; i++)
        fscanf(fileP, "%lf", &kimlik[i]);
    for (int i = 0; i < count; i++){
        double x = 0;
        for (int j = i+1; j < count; j++){
            if (kimlik[i] == kimlik[j]){
                x = kimlik[i];
                fprintf(filePtr, "%0.0lf\n", x);
                break;
            } 
        }
        if (x != 0)
            break;
    }
    printf("\n  *****  Dosyalar basarili bir sekilde yuklendi  ******\n");
    fclose(fileP);
    fclose(filePtr);
    return 0;
}