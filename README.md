<h1 style="font-family: 'Academy Engraved LET', sans-serif;">Vape Shop Management System</h1>

<p>Этот проект представляет собой простую систему управления магазином, предназначенную для работы с продавцами и товарами в магазине. Программа позволяет добавлять и удалять продавцов и товары, а также просматривать информацию о них.</p>

<h2 style="font-family: 'Academy Engraved LET', sans-serif;">Функционал</h2>

<ul>
  <li><strong>Отображение информации о магазине:</strong>
    <ul>
      <li>Отображает информацию о всех продавцах и товарах в магазине.</li>
      <li>Можно получить информацию как для обычного пользователя, так и для администратора.</li>
    </ul>
  </li>
  <li><strong>Добавление продавца:</strong> Позволяет добавить нового продавца в магазин.</li>
  <li><strong>Удаление продавца:</strong> Позволяет удалить продавца из магазина по его имени.</li>
  <li><strong>Добавление товара:</strong> Позволяет добавить новый товар в ассортимент магазина.</li>
  <li><strong>Удаление товара:</strong> Позволяет удалить товар из магазина по его названию.</li>
</ul>

<h2 style="font-family: 'Academy Engraved LET', sans-serif;">Структура проекта</h2>

<p>Проект разделен на следующие файлы:</p>

<ul>
  <li><strong>Product.h и Product.cpp:</strong> Определение и реализация класса <code>Product</code>, который управляет товарами в магазине. Включает информацию о названии товара, розничной и оптовой цене, а также количестве на складе.</li>
  <li><strong>Seller.h и Seller.cpp:</strong> Определение и реализация класса <code>Seller</code>, который представляет продавца магазина. Содержит данные о имени продавца, его зарплате и статусе администратора.</li>
  <li><strong>Shop.h и Shop.cpp:</strong> Определение и реализация класса <code>Shop</code>, который управляет продавцами и товарами. Реализует функции добавления, удаления и отображения информации о магазине.</li>
  <li><strong>main.cpp:</strong> Основной файл программы, содержащий цикл меню для взаимодействия с пользователем. Пользователь может выбрать различные действия через числовое меню, такие как просмотр информации о магазине, удаление продавцов или товаров.</li>
</ul>

<h2 style="font-family: 'Academy Engraved LET', sans-serif;">Использование</h2>

<ol>
  <li>Скомпилируйте проект с помощью вашего компилятора C++.</li>
  <li>Запустите полученную исполняемую программу.</li>
  <li>Следуйте инструкциям в консоли, выбирая различные действия через меню:
    <ul>
      <li>Выберите действие, введя соответствующую цифру.</li>
      <li>Для удаления продавца или товара введите имя или название, когда программа запросит это.</li>
    </ul>
  </li>
</ol>

<h2 style="font-family: 'Academy Engraved LET', sans-serif;">Требования</h2>

<ul>
  <li><strong>C++20</strong> или новее.</li>
</ul>

<h2 style="font-family: 'Academy Engraved LET', sans-serif;">Ссылка на Sonar</h2>

<p><a href="https://sonarcloud.io/project/overview?id=kamat0shi_yaskevich_PonLHL">SonarCloud Overview</a></p>
