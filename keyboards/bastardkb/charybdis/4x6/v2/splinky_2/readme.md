# Charybdis 4x6 v2 (Splinky 2) Vial Keymap

Конфигурация прошивки Vial для Charybdis 4x6 v2 на контроллере Splinky 2 (RP2040).

## Особенности
- Полная поддержка Vial с динамическими слоями
- Трекбол PMW3360 на правой половине (MASTER_RIGHT)
- Split-соединение через UART (GP1)
- Эмуляция EEPROM через RP2040 Flash Wear Leveling
- Double-tap reset для входа в bootloader

## Сборка
```bash
qmk compile -kb bastardkb/charybdis/4x6/v2/splinky_2 -km vial
