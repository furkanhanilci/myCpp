#include <iostream>


int main()
{
    
      int grades[][3] =  // grades isimli çok boyutlu bir array oluşturduk ve değerleri atadık.
      {                  // çok boyutlu array'de 2. kısma size girilmeli(3) her bir satırın kaç elemandan oluştuğunu söyler.
            {1,2,3},     // hiçbir boyut belirtmeden yazarsanız, derleyici bu dizinin boyutunu belirleyemeyeceği için hata verecektir.
            {4,5,6},     // Dolayısıyla, çok boyutlu dizilerde boyutlar her zaman doğru şekilde belirtilmelidir.
            {7,8,9}
      };
    
    for(int r = 0; r < 3; r++) // ilk başta satırlar üzerinde dolaşmak için bir for loop. 
    {
        for(int c = 0; c < 3; c++) // sonra da sütun için bir iç içe geçmiş for loop
        {
            std::cout << grades[r][c] << "\t";
        }


        std::cout << "\n";
    }

    return 0;

}