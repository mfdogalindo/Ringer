# Sistema de Timbre para Citofono con Arduino

Una solución basada en Arduino para controlar el sistema de timbre de un citófono analógico de 8 apartamentos. Este proyecto permite la personalización de melodías para cada apartamento e incluye una interfaz simple para la selección de tonos.

## Requisitos de Hardware

- Arduino Pro Mini
- Transistores MOSFET IRF520 (9x):
  - 1x para amplificación principal del audio
  - 8x para conmutación de señal de apartamentos
- Teclado matricial (2x4)
- Parlante/buzzer compatible con 12V
- Fuente de alimentación de 12V
- Resistencias y componentes electrónicos básicos

## Configuración de Pines

- **Pin 10**: Salida de audio principal (conectado a IRF520 para amplificación a 12V)
- **Pines 2-9**: Control de conmutación de apartamentos
  - Pin 2: Apartamento 201
  - Pin 3: Apartamento 202
  - Pin 4: Apartamento 301
  - Pin 5: Apartamento 302
  - Pin 6: Apartamento 401
  - Pin 7: Apartamento 402
  - Pin 8: Apartamento 501
  - Pin 9: Apartamento 502
- **Pines del Teclado**:
  - Columnas: Pines 11, 12
  - Filas: Pines A0, A1, A2, A3

## Características

- 30 melodías pre-programadas incluyendo:
  - Piezas de música clásica
  - Temas populares de videojuegos
  - Tonos estándar de notificación
- Asignación individual de melodías para cada apartamento
- Modo de configuración de melodías
- Almacenamiento en EEPROM para guardar la configuración
- Retroalimentación visual mediante indicadores LED
- Protección de tiempo límite en configuración

## Modos de Operación

### Operación Normal
1. Presione cualquier botón en el teclado para timbrar al apartamento correspondiente
2. El sistema reproducirá la melodía asignada para ese apartamento

### Modo de Configuración
1. Mantenga presionado el botón del apartamento que quiere configurar durante un período extendido (~5 segundos) para entrar en modo de configuración
2. Use los botones para navegar por las melodías disponibles:
   - Botón 8: Siguiente melodía
   - Botón 4: Melodía anterior
   - Botón 1: Guardar selección
3. El sistema saldrá automáticamente del modo de configuración después de 20 segundos de inactividad sin guardar cambios

## Melodías Disponibles

### Música Clásica
1. Für Elise
2. Sinfonía No. 5
3. Pequeña Serenata Nocturna
4. Oda a la Alegría
5. El Lago de los Cisnes
6. Las Cuatro Estaciones (Primavera)
7. En la Gruta del Rey de la Montaña
8. Obertura Guillermo Tell
9. El Danubio Azul
10. Tocata y Fuga en Re menor

### Temas Populares y de Videojuegos
11. Tema de Super Mario Bros
12. Tema de Tetris
13. Marcha Imperial de Star Wars
14. Tema Principal de Legend of Zelda
15. Smoke on the Water
16. Seven Nation Army
17. Tema de Pokemon
18. Fanfarria de Victoria de Final Fantasy
19. Sweet Child O' Mine
20. Sonic the Hedgehog - Green Hill Zone

### Tonos Utilitarios
21. Tono Clásico de Nokia
22. Notificación de Mensaje
23. Alerta de Error
24. Tono de Éxito
25. Alerta de Advertencia
26. Melodía de Timbre
27. Advertencia de Batería Baja
28. Recordatorio de Calendario
29. Alarma de Reloj
30. Tono de Teléfono Moderno

## Notas Técnicas

- El sistema utiliza la memoria EEPROM para mantener la configuración de melodías después de un corte de energía
- La amplificación de la señal de audio se realiza a través de un MOSFET IRF520 para compatibilidad con sistemas de 12V
- El sistema incluye protección contra tiempos de espera en el modo de configuración para evitar cambios accidentales
- Las melodías están almacenadas en la memoria PROGMEM para optimizar el uso de la memoria RAM
