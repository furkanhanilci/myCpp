math: math_stuff.o math_utils.o     
	g++ math_stuff.o math_utils.o -o math

math_stuff.o: math_stuff.cpp
	g++ -c math_stuff.cpp

math_utils.o: math_utils.cpp
	g++ -c math_utils.cpp

clean:
	rm *.o math




// Bu, basit bir Makefile dosyasıdır ve iki C++ kaynak dosyasını (math_stuff.cpp ve math_utils.cpp) derlemek ve bağlamak için kullanılır ve sonuç olarak math adlı bir yürütülebilir dosya oluşturur.

// Makefile'ın ilk kuralı math adlı hedefi tanımlar ve bu hedef, math_stuff.o ve math_utils.o dosyalarının birleştirilmesiyle oluşturulur. Bu hedefin oluşturulması için g++ derleyicisi kullanılır ve -o parametresi ile oluşturulacak dosya adı belirtilir.

// İkinci ve üçüncü kurallar, math_stuff.o ve math_utils.o adlı hedefleri tanımlar. Bu hedefler, sırasıyla math_stuff.cpp ve math_utils.cpp adlı kaynak dosyalarından oluşturulurlar. Her bir hedefin oluşturulması için -c parametresi kullanılarak derleme yapılır.

// Son olarak, clean adlı bir hedef tanımlanır ve bu hedef, *.o ve math adlı dosyaları silmek için kullanılır. Bu kural, temizleme işlemi yapmak için kullanılabilir.