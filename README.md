# C++ GameDev Journey

Личный учебный проект по C++ и разработке игр. Упражнения выполняются самостоятельно; конспекты и команды помогают повторить пройденное.

## Учебный путь

### Этап 0. Среда разработки и инструменты

**Пройденные темы:** компилятор и линкер, структура C++-проекта, предупреждения, CMake и библиотеки, Debug и Release, тесты и основы отладки.

- [Конспект этапа 0 и команды](notes/stage-00-tooling/README.md)
- [Упражнения этапа 0](exercises/)
- [Итоговый проект: инвентарь](exercises/06-inventory-project/)

В итоговом проекте созданы библиотека, программа и тест; изучались сборки Debug и Release. Контрольную часть с **намеренным падением и его отладкой** ещё предстоит выполнить.

### Этап 1. Фундамент C++

**Следующий этап.** Новые темы будем изучать последовательно, с объяснениями и самостоятельными заданиями.

- [Заметки этапа 1](notes/stage-01-fundamentals/README.md)
- [Упражнения этапа 1](exercises/stage-01-fundamentals/README.md)

## Навигация

```text
cpp-gamedev-journey/
├── README.md                       — учебный путь и быстрый старт
├── CMakeLists.txt                  — общая сборка упражнений 01–03
├── exercises/
│   ├── 01-hello-cpp/ … 06-inventory-project/  — работы этапа 0
│   └── stage-01-fundamentals/     — будущие упражнения этапа 1
└── notes/
    ├── stage-00-tooling/          — пройденные темы и инструкции
    └── stage-01-fundamentals/     — заметки следующего этапа
```

Проекты `04-player-project` и `06-inventory-project` имеют собственные `CMakeLists.txt`; их настраивают отдельно. Папки `build/` создаются при сборке и не попадают в Git.

## Быстрый старт

В терминале VS Code откройте корень репозитория. Для упражнений с общим CMake:

```bash
cmake -S . -B build -DCMAKE_BUILD_TYPE=Debug
cmake --build build
./build/hello_cpp
ctest --test-dir build --output-on-failure
```

Для итогового проекта этапа 0:

```bash
cmake -S exercises/06-inventory-project -B exercises/06-inventory-project/build/debug -DCMAKE_BUILD_TYPE=Debug
cmake --build exercises/06-inventory-project/build/debug
./exercises/06-inventory-project/build/debug/inventory_app
ctest --test-dir exercises/06-inventory-project/build/debug --output-on-failure
```

Подробные пояснения, Release и работа с отладчиком — в [конспекте этапа 0](notes/stage-00-tooling/README.md).
