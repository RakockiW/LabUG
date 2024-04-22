CREATE TABLE kraj
(
    id                  serial          ,
    nazwa               varchar(32)     NOT NULL,
    CONSTRAINT          kraj_id_pk PRIMARY KEY(id)
);

CREATE TABLE lokalizacja
(
    id                  serial          ,
    stan_wojewodztwo    varchar(32)     NOT NULL,
    kod_pocztowy        char(6)         NOT NULL,
    miasto              varchar(32)     NOT NULL,
    ulica               varchar(32)     NOT NULL,
    nr_budynku          char(6)         NOT NULL,
    CONSTRAINT          lokalizacja_id_pk PRIMARY KEY(id)
);

CREATE TABLE dzial
(
    id                  serial          ,
    nazwa               varchar(32)     NOT NULL,
    CONSTRAINT          dzial_id_pk PRIMARY KEY(id)
);