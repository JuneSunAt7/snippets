#!/bin/bash

read -p "Введите имя папки: " user_folder_name
folder_name="${user_folder_name}_snippets"
mkdir $folder_name
cd $folder_name 
echo "# Example for ${user_folder_name} and compile with g++ " > README.md
mkdir "src"
cd "src"
echo "#include <iostream>  int main(){}" > main.cpp

if [ $? -eq 0 ]; then echo "Папка успешно создана" 
else echo "Ошибка при создании папки" fi