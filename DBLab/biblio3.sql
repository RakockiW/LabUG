SET client_encoding='utf-8';

CREATE TABLE czytelnik
(
    nr_karty    int             PRIMARY KEY,
    imie        varchar(32)     not null,
    nazwisko    varchar(32)     not null
);

CREATE TABLE ksiazka
(
    kod      int             PRIMARY KEY,
    tytul       varchar(32)     not null,
    wydawnictwo varchar(32)     not null,
    rok         int             not null,
    cena        int             not null
);

CREATE TABLE autor
(
    imie        varchar(32)     not null,
    nazwisko    varchar(32)     not null,
    kod_ksiazki int             not null,
    CONSTRAINT kod_ksiazki_fk FOREIGN KEY(kod_ksiazki)
                REFERENCES ksiazka(kod)
                ON UPDATE CASCADE ON DELETE SET NULL
);

CREATE TABLE egzemplarz
(
    nr_inw      int             PRIMARY KEY,
    kod_ksiazki  int            not null,
    data        date            ,
    nr_karty    int             ,
    CONSTRAINT kod_ksiazki_fk FOREIGN KEY(kod_ksiazki)
                REFERENCES ksiazka(kod)
                ON UPDATE CASCADE ON DELETE CASCADE,
    CONSTRAINT nr_karty_fk FOREIGN KEY(nr_karty)
                REFERENCES czytelnik(nr_karty)
                ON UPDATE CASCADE ON DELETE SET NULL
);


