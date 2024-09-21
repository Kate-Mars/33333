<h1 align="center">Практика по Технологиям программирования</h1>
<h1 align="center">Выполнила Марисова Екатерина 24КНТ-9</h1>
<h3 align="center">! Прочитать issues</h3>
При выполнении заданий были случайно перепутаны местами 10 и 11 задания😅, надеюсь подойдет иной порядок

<h2>Значения коммитов:</h2>

1. ___Первый коммит___: Создание удаленного репозитория, выгрузка локального репозитория в удаленный, создание файла Help.txt в branch-е Marisova-E-O, создание ветки master
   <img width="688" alt="image" src="https://github.com/user-attachments/assets/441acc19-ca90-4db6-ba42-4cb4fc7e93cb">
3. ___Второй коммит___: Создание проекта VS(С++) в локальном репозитории и выгрузка его в удаленный со всеми необходимыми файлами проекта

   <img width="632" alt="image" src="https://github.com/user-attachments/assets/0dfdb472-a7a4-4e77-81ff-384a92451664">
5. ___Третий коммит___: Добавление в проект VS простейшего кода ввода 2 целых чисел с приглашением и выгрузка файлов в удаленный репозиторий

   <img width="682" alt="image" src="https://github.com/user-attachments/assets/0777919a-b1a1-41c9-916f-2fb62ca4497d">
<h3 align="center">Далее не буду писать про выгрузку файла в удаленный репозиторий, тк это и так подразумевается</h3>

4. ___Четвертый коммит___: Добавления файла .gitignore для бинарных файлов проекта VS
   <img width="476" alt="image" src="https://github.com/user-attachments/assets/35ae1e1a-c758-43f8-954b-eae71f5e0fe4">

6. ___Пятый коммит___: Изменения проекта VS в локальном репозитории - добавление вывода суммы двух чисел
   <img width="587" alt="image" src="https://github.com/user-attachments/assets/8fddbe9a-6632-479f-b452-d1d3b9973d29">
8. Просмотр истории изменения файлов через git log и git diff  с указанием хешов коммитов
9. ___Шестой коммит___: изменения файла через GitHub - изменение операции + на - в файле SumAB, и синхронизация локального репозитория с удаленным

   <img width="559" alt="image" src="https://github.com/user-attachments/assets/572c7d84-c2f6-47c6-bca0-8a14fb94cab1">
11. ___Седьмой коммит___: перенос изменений в ветку master с ветки Marisova-E-O через pull request и разрешение конфликтов
    <img width="809" alt="image" src="https://github.com/user-attachments/assets/2ff2b3cf-9899-4edd-b4e4-77076cb7dcfc">
13. ___Восьмой коммит___: переход на ветку master и удаление ветки Marisova-E-O
    <img width="598" alt="image" src="https://github.com/user-attachments/assets/099c80d3-9f3c-4219-9038-374a5d57cdf6">
<h2 align="center">Девятое задание</h2>

10. ___Девятый коммит___: Разделение заданий - начало девятого задания, создание ветки test и переход на нее
12. ___Первый коммит в ветке test___
13. ___Второй коммит в ветке test___
14. ___Десятый коммит___ : Слияние веток test и master в новый коммит
    <img width="605" alt="image" src="https://github.com/user-attachments/assets/9a2634ed-cd2d-422e-8a1e-1ef4281938a3">
<h3>Далее проделываются те же операции для того, чтобы было видно какие были сделаны изменения из a) -> b) </h3>


14. ___Тринадцатый коммит___: Rebase из ветки test на ветку master

<h2 align="center">Рассматриваются аналогично ситуации без конфликтов</h2>

<img width="653" alt="image" src="https://github.com/user-attachments/assets/02aca212-e09a-44d5-bc99-90654a624886">


<h1 align="centre">Одиннадцатое задание</h1>
Было чуть-чуть перепутано с 10, поэтому называется как 10😅

15. __Девятнадацатый коммит__: Подготовка к выполнению заданий
  <img width="824" alt="image" src="https://github.com/user-attachments/assets/6acb5d30-b101-44f8-aada-572fcf7d525d">

16. ___Последующие коммиты до 29___: Создание схемы:

    <img width="455" alt="image" src="https://github.com/user-attachments/assets/5b7f3129-590a-4951-a6c7-2f5117afc951">
Перенос изменений с ветки client в ветку master с помощью 
```
git rebase --onto master client~2 client
```
<img width="466" alt="image" src="https://github.com/user-attachments/assets/568c6802-dfed-4c83-b019-443bd312248c">

Аналогичные действия с server
```
git rebase --onto master server~3 server
```
17. ___Двадцать девятый commit___
    Приведение к виду:

    <img width="529" alt="image" src="https://github.com/user-attachments/assets/ca912e97-9c8b-475c-8c1c-72d13e229d27">

    <img width="197" alt="image" src="https://github.com/user-attachments/assets/63f79631-4728-471c-a773-ae97cd3999b1">

<h2 align="center">Десятое задание</h2>

1. ___Первый коммит___: Подготовка к заданию, очистка файлов
2. ___Последующие коммиты__: Создание ветки for_task_10 и повторение схемы, аналогичной 9 заданию
   Добавление двух изменений с3 и с3_1 в ветке for_task_10

   <img width="581" alt="image" src="https://github.com/user-attachments/assets/524019de-5052-468c-bcf7-4917ea32b8bf">

   Добавление редактора Sublime Text для Git
   ```
   git config --global core.editor "C:\Program Files\Sublime Text\subl.exe"
   ```

   Соединение и rebase с3 и с3_1 с помощью
   ```
    git rebase -i HEAD~2
   ```
  __pick c3_1__
  
  __squash c3__
  
  (условно)

  Изменение комментария для изменения на "Squash c3_1 and c3"

  Добавление изменения и завершение схемы.

  <img width="926" alt="image" src="https://github.com/user-attachments/assets/0f68657c-5dc0-43ce-a700-44f35cdf60f9">




