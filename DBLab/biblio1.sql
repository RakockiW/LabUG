SET client_encoding='utf-8';

CREATE TABLE czytelnik
(
    nr_karty    int             PRIMARY KEY,
    imie        varchar(32)     not null,
    nazwisko    varchar(32)     not null
);

CREATE TABLE ksiazka
(
    nr_inw      int             PRIMARY KEY,
    tytul       varchar(32)     not null,
    wydawnictwo varchar(32)     not null,
    rok         int             not null,
    cena        int             not null,
    imie        varchar(32)     not null,
    nazwisko    varchar(32)     not null,
    data        date            ,
    nr_karty    int             ,
    CONSTRAINT  ksiazka_nr_karty_fk FOREIGN KEY(nr_karty)
                    REFERENCES czytelnik(nr_karty)
                    ON UPDATE CASCADE ON DELETE SET NULL
);


