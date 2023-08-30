# Istruzioni per scaricare il necessario

## Visual Studio Code (VS Code)
Per installarlo, basta andare a questo link: https://code.visualstudio.com/download

## Compilatore per il linguaggio C (GCC)
Per installare il compilatore del C, seguire questi passi:

**1. Scaricare MinGW-w64**

Per scaricarlo, clicca questo link: https://sourceforge.net/projects/mingw/files/latest/download

**2. Installare MinGW-w64**

Per installarlo, basta cliccare due volte sull'installer scaricato e seguire la guida.

**3. Selezionare i pacchetti richiesti per il compiler**

I pacchetti richiesti sono in ordine: MinGW32-base, MinGW32-gcc-g++, MinGW32-gcc-objc

**4. Applica le modifiche**

Dopo aver selezionato i pacchetti, vai in Installazione -> Applica modifiche e clicca su Applica modifiche.

**5. Scarica le modifiche**

Una volta cliccato su applica, partirà il download (ci potrebbe volere un po'). Fatto questo, per vedere il corretto download, aprire il prompt dei comandi e scrivere g++ --version per vedere se riconosce il comando. Se funziona, si può passare alla modifica delle variabili di ambiente.

**6. Copia il percorso di MinGW bin**

Vai nella cartella C del computer, vai nella cartella MinGW e poi nella cartella bin. A questo punto, copia il percorso dalla barra di ricerca.

**7. Set delle variabili d'ambiente**
- Cerca nel pc "Variabili di ambiente'
- Clicca su variabili di ambiente
- Vai a "Variabili di sistema" e trova la variabile "Path"
- Selezionalo e clicca su "Modifica"
- Clicca su "Nuovo" e incolla il percorso.
- Clicca su "Ok" per salvare
Per controllare che tutto sia andato bene, nel prompt dei comandi scrivi gcc --version.

## Installare i pacchetti per C in VS Code

- Apri VS Code e clicca su Estensioni (icona a sinistra, disegnata con 4 quadratini)
- Cerca "C/C++" e installa il primo pacchetto consigliato
- Installa anche il pacchetto C/C++ Extension Pack
- Intalla infine il pacchetto Code Runner
- Vai nei settings (icona della rotellina)
- Cerca nella barra di ricerca "Run code in terminal" e premi invio
- Scorri finche non trovi la scritta "Code-runner: Run In Terminal" e spunta la casella sotto
- Chiudi e riapri VSCode

## Installare l'interprete di Python
- Andare sul sito https://www.python.org/
- Cliccare su Download -> Windows
- Selezionare l'installer per il proprio sistema operativo (32 o 64 bit)
- Far partire il wizard e completare il download

## Creare un progetto Python in VS Code
- Creare una cartella dove ci sarà il progetto
- Aprire vs code e aprire la cartella
- Premere contemporaneamente i tasti Ctrl, Shift e P
- Scrivere nella barra "Python: Create Environment" e premere invio
- Selezionare venv e premere invio
- Selezionare l'interprete
- Attendere la creazione
- Per sicurezza, ricliccare Ctrl+Shift+P e scrivere "Python: Select Interpreter", premere invio e selezionare l'interprete raccomandato
- Per creare un file pyton, basta cliccare sulla icona del file con il simbolo + e scrivere il nomeFile.py, per poi premere invio.