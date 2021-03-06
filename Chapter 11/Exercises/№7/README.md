#### Глава - 11, Задание - 7 ####

Комплексное число состоит из двух частей — вещественной и мнимой. Один из
способов записи такого числа выглядит как ```(3.0, 4.0)```. Здесь ```3.0``` —
вещественная часть, а ```4 .0``` — мнимая. Предположим, что ```а = (А, Ві)``` и ```с = (С, Di)```. Ниже
представлены некоторые операции с комплексными числами:

* сложение: а + с = (А + С, (В + D)i)
* вычитание: а - с = (А - С, (В - D)i)
* умножение: а*с = (Ах С - ВхD, (AxD + В х С)і)
* умножение (х — вещественное число): ххс = (ххС, xxDi)
* сопряжение: ~а = (А, - Ві)

Определите класс ```complex``` так, чтобы следующая программа могла использовать
его с корректными результатами:

```objectivec
int main()
{
	Complex a(3.0, 4.0); // инициализация значением (3,4і) 
	Complex c;
	
	std::cout << "Enter a complex number (q to quit) :\n";
	// Ввод комплексного числа (q для завершения)
	
	while (std::cin >> c)
	{
		std::cout << "с is " << c << '\n'; // значение с 
		std::cout << "complex conjugate is " << ~c << '\n';
		// значение сопряженного числа 
		
		std::cout << "a is " << a << '\n';
		std::cout << "a + с is " << a + c << '\n'; // значение а + с 
		std::cout << "a — с is " << a - c << '\n'; // значение а — с 
		std::cout << "a * с is " << a * c << '\n'; // значение а * с 
		std::cout << "2 * с is " << 2 * c << '\n'; // значение 2 * с 
		std::cout << "Enter a complex number (q to quit) :\n";
	}
	std::cout << "Done!\n";

	std::cin.get();
	std::cin.get();
	return 0;
}
```

He забывайте, что вы должны перегрузить операции ```<<``` и ```>>```. В стандарте C++
уже присутствует поддержка комплексных чисел — и намного более развитая,
чем в этом примере — в заголовочном файле ```complex```, поэтому во избежание
конфликтов назовите свой файл ```complexO.h```. Используйте ```const``` там, где это
оправдано.

Ниже показан пример выполнения этой программы:

```objectivec
Enter a complex number (q to quit) : 
real: 10 
imaginary: 12 
с is (10,12i) 
complex conjugate is (10,-12i) 
a is (3,4i) 
a + с is (13,16i) 
a - с is (-7,-8i) 
a * с is (-18,76i) 
2 * с is (20,24i) 
Enter a complex number (q to quit) : 
real: q 
Done!
```

Обратите внимание, что благодаря перегрузке, ```cin >> c``` теперь запрашивает
ввод вещественной и мнимой частей комплексного числа.

=================================================================================
#### Вывод ####
```objectivec
Enter a complex number (q to quit) :
real: 20
imaginary: 30
с is (20, 30i)
complex conjugate is (20, -30i)
a is (3, 4i)
a + с is (34, 23i)
a - с is (-26, -17i)
a * с is (120, 60i)
2 * с is (32, 22i)
Enter a complex number (q to quit) :
real: q
imaginary: Done!
```