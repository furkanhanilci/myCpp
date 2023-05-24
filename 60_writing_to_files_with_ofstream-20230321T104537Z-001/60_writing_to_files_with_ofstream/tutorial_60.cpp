#include <iostream> // Girdi/Çıktı işlemleri için standart giriş/çıkış kütüphanesi
#include <fstream>  // Dosya işlemleri için dosya giriş/çıkış kütüphanesi
#include <vector>   // Dinamik boyutlu bir dizi için veri yapıları kütüphanesi
#include <array>
#include <string>


int main()
{
    std::string filename; // filename isimli bir string türünden değişken oluşturuldu.
    std::cout << "Enter File Name: ";
    std::cin >> filename; // filename için input alıyoruz
    std::ofstream file (filename, std::ios::app); // Program, dosyayı "append" modunda açar. Yani, eğer dosya varsa, yeni verileri var olan dosyaya ekler. Eğer dosya yoksa, dosyayı oluşturur ve açar. 

    if(file.is_open())                    // Dosya açılırsa
    {
        std::cout << " success n00b\n";   // Başarılı bir şekilde dosya açıldığı ekrana yazdırılır
    }
    
    
    std::vector<std::string>names;     // Bir isim listesi tutacak std::vector oluşturulur
    names.push_back("Furkan");          // Liste sırasıyla 3 isim ile doldurulur
    names.push_back("Hamza");
    names.push_back("Yck");


    for(std::string name : names)   // for döngüsüsü ile, names vektöründeki her isim, file adlı dosyaya yazdırılır.
    {
            file << name << std::endl;
    }

    file.close();                   // İşlem tamamlandığında, dosya kapatılır ve program sonlandırılır.

    return 0;
}