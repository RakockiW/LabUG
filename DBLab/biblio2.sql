SET client_encoding='utf-8';

CREATE TABLE czytelnik
(
    nr_karty    int             PRIMARY KEY,
    imie        varchar(32)     not null,
    nazwisko    varchar(32)     not null
);

CREATE TABLE ksiazka
(
    kod         int             PRIMARY KEY,
    tytul       varchar(32)     not null,
    imie        varchar(32)     not null,
    nazwisko    varchar(32)     not null
);

CREATE TABLE wydanie
(
    id          int             PRIMARY KEY,
    rok         int             not null,
    cena        int             not null,
    wydawnictwo varchar(32)     not null,
    kod_ksiazki int             not null,
    CONSTRAINT kod_ksiazki_fk FOREIGN KEY(kod_ksiazki)
                REFERENCES ksiazka(kod)
                ON UPDATE CASCADE ON DELETE CASCADE
);

CREATE TABLE egzemplarz
(
    nr_inw      int             PRIMARY KEY,
    id_wydania  int             not null,
    data_od     date            ,
    nr_karty    int             ,
    CONSTRAINT id_wydania_fk FOREIGN KEY(id_wydania)
                REFERENCES wydanie(id)
                ON UPDATE CASCADE ON DELETE CASCADE,
    CONSTRAINT nr_karty_fk FOREIGN KEY(nr_karty)
                REFERENCES czytelnik(nr_karty)
                ON UPDATE CASCADE ON DELETE SET NULL
);

CREATE TABLE wypozyczyl
(
    data_od     date            not null,
    data_do     date            not null,
    nr_inw      int             not null,
    nr_karty    int             not null,
    CONSTRAINT nr_inw_fk FOREIGN KEY(nr_inw)
                REFERENCES egzemplarz(nr_inw)
                ON UPDATE CASCADE ON DELETE CASCADE,
    CONSTRAINT nr_karty_fk FOREIGN KEY(nr_karty)
                REFERENCES czytelnik(nr_karty)
                ON UPDATE CASCADE ON DELETE CASCADE
                
);