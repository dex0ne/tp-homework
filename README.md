# tp-homework-1

Чтобы начать играть в игру, нужно выбрать расу, за которую вы будете играть. Сменить расу можно будет лишь начав заново.
Всего в игре 2 расы: люди и уфосы. Отличаются они внешним видом крепости и характерными преимуществами юнитов.
В игре существуют три типа юнитов: солдат, мирный житель и волшебник. 
* мирный житель - приносит в казну кредиты, платя налоги, не умеет наносить урон вражеским юнитам, имеет меньше всего здоровья, легко уязвим для юнитов противника, создается за маленькое количество кредитов.
* солдат - воин, способный сражаться с другими юнитами противника, имеет определенное количество здоровья и брони, наносит урон вражеским юнитам(количество зависит от расы), не платит налогов, создание обходится дороже мирного жителя. 
* волшебник - юнит, способный наносить урон вражеским юнитам, имеет возможность лечить себя, солдат и мирных жителей.

В начале игры создается конкретная фабрика в зависимости от расы - HumanFactory или же UfosFactory - наследники абстрактной фабрики Factory. 
Фабрика будет производить юнитов в случае, если у игрока хватает кредитов для их создания. Она реализует методы CreatePeaceful(), CreateWizard(), CreateSoldier(),
В зависимости от выбранной расы будут созданы либо HumanPeaceful, HumanWizard, HumanSoldier либо же UfosPeaceful, UfosWizard, UfosSoldier. 
Это классы - наследники абстрактных классов Peaceful, Wizard, Soldier, которые в свою очередь являются наследниками общего класса Unit,
в котором определены методы и поля, необходимые всем юнитам. Понятно, что такая модель представляет возможность довольно просто добавлять в игру новых юнитов, 
наследников Unit'a, которые бы реализовывали некоторые особенности своего класса, добавив при этом соотвествующий метод в обстрактную фабрику. 
При этом для существующих рас мы можем как добавлять этого юнита в расу, так и нет, достаточно лишь будет определить его характеристики, 
отличающие его от представителя других рас и добавить метод создания в фабрику расы. Не возникнет проблем и в добавлении новой расы. 
Для этого достаточно будет лишь определить рассовые классы общих юнитов и добвить соотвествующую фабрику, при этом минимально изменяя уже существующий код.
![default](https://user-images.githubusercontent.com/36562069/37571297-01c4993e-2b0c-11e8-8521-b15721ee2545.png)

# tp-homework-2


## Компоновщик


Паттерн компоновщик используется для того, чтобы сгруппировать множество объектов в древовидную структуру, а затем работать с ней так, как будто это единичный объект. Этот паттерн позволит нам объединять вместе мирных жителей, волшебников и солдат. Так, например, могут появиться отряды из солдат, которые позже объединятся в армии и т.д. Мирные жители и волшебники так же объединяются в Population и MagicSquad соот-но. Понятно, что для них определены соотв. им методы: так, например, группа мирных - экземпляр класса Population тоже платит налог. Метод PayTax() вызовется от каждого жителя, находящегося в этой группе и т.д. Аналогично переопределены методы атаки и лечения для солдат и волшебников. Для удобства распознования, является ли объект составным, определена функция Get...(). 

## Структура


![composite](https://user-images.githubusercontent.com/36562069/39087291-965bf83e-45a7-11e8-862a-ccc6abf16c4c.jpg)


## Декоратор


Декоратор — паттерн проектирования, который позволяет динамически добавлять объектам новую функциональность. Этот паттерн позволит нам добавить новую функциональность, например, для метода Atack класса Wizard. Волшебники могут использовать, например, зелья, усиляющие их обычные. Таким образом пртивник теряет большее количество здоровья(WizardSuperAtack) или сам теряет силы в атаке (WizardSpellAtack).


## Структура


![dec](https://user-images.githubusercontent.com/36562069/39087301-a9e9d902-45a7-11e8-8b4e-cb9aa1406dd5.jpg)



## Адаптер


Адаптер - шаблон проектирования, предназначенный для организации использования функций объекта, недоступного для модификации, через специально созданный интерфейс. В нашем случае этот паттерн позволит нам осуществить взаимодействие интерфейса IPlayer, которым будет управлять игрок. Нужное нам действие - создание юнитов выполянет фабрика, созданная в зависимости от того, какую рассу мы выбрали. Тем не менее, игрок имеет возможноть создавать юнитов, когда у него есть необходимое количество монет. Обращаться непосредственно к фабрике ему не стоит. Адаптер - Player реализует интерфейс IPlayer, пользователь обращется к этому интерфейсу для создания объекта, а уже Player, при достаточном количестве монет, перенапрвляет обращение к Factory, которая и отдает нам юнита.


## Структура

![default](https://user-images.githubusercontent.com/36562069/39087306-b272c69c-45a7-11e8-91fa-20935548e600.jpg)

# tp-homework-3


## Наблюдатель

Наблюдатель создает механизм у класса, который позволяет получать экземпляру объекта этого класса оповещения от других объектов об изменении их состояния, тем самым наблюдая за ним. В нашей игре роль наблдаемого объекта будет играть класс Game, каждый день в игре будут происходить какие-то события. Например, у нас все мирные жители будут платить налоги, после того как налоги будут собраны - игрок должен получить их на свой счет, то есть классы Player и EnemyPlayer будут играть роль наблюдателей и по истечении очередного дня Player и EnemyPlayer как бы получают уведомления об очередных изменениях казны - увелечении coins у игроков.

## Структура

![1](https://user-images.githubusercontent.com/36562069/40270796-37a889e6-5b9c-11e8-8f84-e00a2f0d8547.jpg)

## Команда и цепочка обязанностей

Во время игры игрок хочет совершать разные действия: создавать новых юнитов или, например, атаковать юнитов противника. От пользователя приходит какой-то запрос - создание или атака. Для обработки запросов будем использовать паттерн цепочка обязанностей. В зависимости от типа запроса - создание, атака или некорректный запрос, который будет рассмотрен как ошибочный, каждое звено либо выполнит его, либо отправит дальше. Причем если звено понимает, что обрабатывать запрос нужно ему, то и выполнять его он будет по-особенному, так, например, если поступил запрос на создание, то звено спросит у пользователя что он хочет создать: мирного жителя, солдата или волшебника, или как он хочет атаковать противника: совершенно обычно или с использованием "заклятий" мага? После этого звено нашей цепи выполняет действие с использованием паттерна Команда - атака или создание юнита. Выяснив до конца, что хочет пользователь, создается нужный объект класса Command с нужными значениями атрибутов.

![2](https://user-images.githubusercontent.com/36562069/40271528-0322e15c-5ba7-11e8-9a23-ddde4c898883.jpg)




