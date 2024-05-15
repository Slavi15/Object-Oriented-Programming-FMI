## Задача 0
 Направете си базов абстрактен клас `Employee` със член данна `name` и `salary`. Да се направи `operator<<` и чисто виртуална функция `calculateSalary()`

 Напрaвете неговите наследници:

 * `HourlyEmployee` с член данна `overtime`, която показва колко часа над работното време е работил. Заплатата се счита, че е за час.
 Да се имплементира `calculateSalary()` като се определя чрез формулата `40 * 4 * salary + salary * 0.5 * overtime`

 * `CommisionEmployee` с член данна `commision`, което показва какъв допълнителен процент получава. Заплатата се счита, че е за месеца.
 Да се имплементира `calculateSalary()` като се определя чрез формулата `salary + salary * commision`

`calculateSalary()` трябва да връща каква сума се изкарава за месец!

Направете функция `Employee* createEmployee(istream& is)`, която създава даден служител. Създаването става като се приеме символ от входа и необходимите данни за създаването на обекта.

* `h <name> <salary> <overtime>`
* `c <name> <salary> <commision>`


Да се имплементират следните функционалности:
* Сортиране по заплата на хетерогенен контейнер от служители
* Намиране на максималната/минималната заплата
* Намиране на служителя с най-близка заплата до средната.

## Задача 1

Трябва да разработите програма за управление на различни типове устройства в система за "умни домове". Системата поддържа устройства като Smart Light, Smart Thermostat и Smart Speaker. Всеки тип устройство има специфични атрибути и поведение.

Изисквания:
Абстрактен базов клас Device със следните pure virtual функции:
* `turnOn()`
* `turnOff()`

Освен тях, базовият клас има име и производител (низ).

Класът `Device` има следните 3 наследници:


*   `SmartLight` : има атрибут brightnessLevel, отговарящ за светимостта.
*   `SmartThermostat`: има атрибути за настояща температура и желана температура.
*   `SmartSpeaker`: има допълнително поле за сила на звука.

Презапишете функциите `turnOn`, `turnOff` и `printDetails` за всеки от класовете, така че да изписват на конзолата конкретно съобщение за вида смарт устройство

Всеки от класовете да има функция `printDetails()`, която принтира на конзолата име, производител и всички допълнителни атрибути на класа

Създайте и клас `SmartHome`, който представлява масив с до **10** смарт устройства. 
Направете метод за добавяне и премахване на устройство.