# ft_printf
Because ft_putnbr and ft_putstr aren’t enough.  The goal of this projectis pretty straight forward. I will recode printf.  Using unknown numbers of argument for ft_printf paramater. How cool is that?

You need to have libft repository too. When you clone the repository libft folder comes empty. in order to call ft_printf function makefile needs source files from libft and libft folder must be updated with libft repository.

The code consists of several functions, including ft_putchar, ft_putstr, ft_adress, ft_write, ft_printf, ft_len, and ft_itoa_base.

The ft_putchar function takes an integer as an argument and writes the character representation of that integer to the standard output stream. It returns 1 to indicate that it wrote a single character.

The ft_putstr function takes a string as an argument and writes that string to the standard output stream. It returns the number of characters written.

The ft_adress function takes a list of arguments (a va_list) as an argument and writes the hexadecimal representation of a pointer to the standard output stream. It returns the number of characters written.

The ft_write function takes a string and a list of arguments as arguments and writes a formatted string to the standard output stream based on the format specifiers in the string. It returns the number of characters written.

The ft_printf function takes a format string and a variable number of arguments as arguments, and writes a formatted string to the standard output stream based on the format specifiers in the string. It returns the number of characters written.

The ft_len function takes an integer and a base as arguments and returns the number of digits in the base representation of the integer.

The ft_itoa_base function takes an integer, a base, and a format character as arguments and returns a string representation of the integer in the specified base. The format character is used to determine whether to use uppercase or lowercase letters for bases greater than 10.
The ft_write function appears to be used to write a string representation of an integer to the standard output stream. It takes a string and a length as arguments, and writes the string to the standard output stream. It returns the number of characters written.

The ft_itoa_base function is used to convert an integer to a string representation in a specific base. It takes an integer, a base, and a format character as arguments. It first calculates the number of digits in the base representation of the integer using the ft_len function. It then allocates a string large enough to hold the base representation of the integer, and converts the integer to the specified base, storing the result in the string. It returns the string representation of the integer.

The ft_printf function is the main function of this code. It takes a format string and a variable number of arguments as arguments. It iterates through the characters in the format string, and when it encounters a percent sign ('%'), it looks at the next character to determine what type of argument it should expect. It then calls the ft_write function to write a formatted string to the standard output stream based on the type of argument and any format specifiers. It returns the total number of characters written to the standard output stream.


******TURKCE******
Bu kod, "ft_printf" adında bir fonksiyon içerir. Bu fonksiyon, bir "printf" gibi çalışır, ancak daha sınırlı bir çıktı sunar. "ft_printf" fonksiyonu, bir dizi veri türünü yazdırır ve yazdırılan veri türüne göre farklı işlemler yapar. Örneğin, eğer yazdırılacak veri bir karakterse, "ft_putchar" fonksiyonu kullanılır ve eğer bir dizi karakterse, "ft_putstr" fonksiyonu kullanılır. Ayrıca, yazdırılacak veri bir adresse, "ft_adress" fonksiyonu kullanılır.

Bu kod ayrıca, "ft_itoa_base" adında bir fonksiyon içerir. Bu fonksiyon, verilen bir tamsayıyı belirli bir tabana çevirir ve dönüştürülmüş sayıyı yazdırır. "ft_len" adında bir fonksiyon da bulunur, bu fonksiyon verilen bir tamsayının tabana çevrilmiş hali için gerekli olan karakter sayısını hesaplar. "ft_write" adında bir fonksiyon da mevcuttur, bu fonksiyon verilen bir dizi karakteri yazdırır ve yazdırılan karakter sayısını döndürür.
"ft_printf" fonksiyonu, bir "va_list" türünde bir değişken olan "list" ile çağrılır. Bu değişken, "va_start" fonksiyonu ile başlatılır ve daha sonra, "va_arg" fonksiyonu kullanılarak "list" değişkeninden yazdırılacak veri çekilir. "va_arg" fonksiyonu, bir veri türü verilerek, "list" değişkeninden bu veri türüne uygun bir veri çeker.

"ft_printf" fonksiyonu, bir döngü içerisinde "src" adında bir dizi karakter taraması yapar. Eğer taranan karakter '%' ise, o karakterin hemen sonrasındaki karakter incelenir ve bu karaktere göre farklı bir işlem yapılır. Örneğin, eğer karakter 'c' ise, "ft_putchar" fonksiyonu çağrılır ve eğer karakter 's' ise, "ft_putstr" fonksiyonu çağrılır. Eğer taranan karakter '%' değilse, o karakter ekrana yazdırılır.

Döngü sonunda, "va_end" fonksiyonu ile "list" değişkeni sonlandırılır ve "ft_printf" fonksiyonu, yazdırılan veri türlerinin sayısını döndürür.
"ft_itoa_base" fonksiyonu, verilen bir tamsayıyı belirli bir tabana çevirir ve çevirilmiş sayıyı yazdırır. Önce, "ft_len" fonksiyonu kullanılarak çevirilecek tamsayının tabana çevrilmiş hali için gerekli olan karakter sayısı hesaplanır. Daha sonra, "malloc" fonksiyonu kullanılarak, gerekli karakter sayısı kadar yer ayrılır ve bu yer içine çevirilecek tamsayının tabana çevrilmiş hali yazılır. Son olarak, "ft_write" fonksiyonu kullanılarak, çevirilmiş tamsayı ekrana yazdırılır ve yazdırılan karakter sayısı döndürülür.

"ft_len" fonksiyonu, verilen bir tamsayının tabana çevrilmiş hali için gerekli olan karakter sayısını hesaplar. Bu işlem, verilen tamsayının belirli bir tabana bölünmesi ile gerçekleştirilir. Bölme işlemi devam ettiği sürece, karakter sayısı bir arttırılır ve tamsayı sıfıra ulaşınca döngü sona erer ve gerekli olan karakter sayısı döndürülür.

"ft_write" fonksiyonu, verilen bir dizi karakteri ekrana yazdırır ve yazdırılan karakter sayısını döndürür. Bu işlem, bir döngü ile gerçekleştirilir ve döngü sırasında her bir karakter ekrana yazdırılır. Döngü sona ettiğinde, yazdırılan karakter sayısı döndürülür ve verilen dizi karakteri için ayrılan yer "free" fonksiyonu ile liberasyon edilir.
Ek olarak, bu kod ayrıca "ft_putchar" ve "ft_putstr" adında iki fonksiyon içerir. "ft_putchar" fonksiyonu, verilen bir karakteri ekrana yazdırır ve yazdırılan karakter sayısını döndürür. Bu işlem, "write" sistem çağrısı kullanılarak gerçekleştirilir. "ft_putstr" fonksiyonu ise, verilen bir dizi karakteri ekrana yazdırır ve yazdırılan karakter sayısını döndürür. Bu fonksiyon da bir döngü ile gerçekleştirilir ve döngü sırasında her bir karakter ekrana yazdırılır. Eğer verilen dizi karakter "null" ise, "(null)" yazdırılır ve yazdırılan karakter sayısı 6 olarak döndürülür.
