# tp-homework-1

Чтобы начать играть в игру, нужно выбрать расу, за которую вы будете играть. Сменить расу можно будет лишь начав заново.
Всего в игре 2 расы: люди и уфосы. Отличаются они внешним видом крепости и характерными преимуществами юнитов.
В игре существуют три типа юнитов: солдат, мирный житель и офицер. 
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