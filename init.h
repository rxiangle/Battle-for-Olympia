#ifndef tipebentukan_H
#define tipebentukan_H

#include "boolean.h"

#include "point.h"
#include "listdp.h"


/*
typedef struct {
	float X; // absis
	float Y; // ordinat
} Point; //Ini udah ada di adt point.
*/


//untuk tipe infotype dan address disesuaikan nanti queue mau dipake di bagian mana
typedef int infotype;
typedef int address;   /* indeks tabel */
/* Contoh deklarasi variabel bertype Queue : */
/* Versi I : tabel dinamik, Head dan Tail eksplisit, ukuran disimpan */
typedef struct { infotype * T;   /* tabel penyimpan elemen */
                 address HEAD;  /* alamat penghapusan */
                 address TAIL;  /* alamat penambahan */
                 int MaxEl;     /* Max elemen queue */
               } Queue;
/* Jika Q adalah Queue, maka akses elemen : */
#define Head(Q) (Q).HEAD
#define Tail(Q) (Q).TAIL
#define InfoHead(Q) (Q).T[(Q).HEAD]
#define InfoTail(Q) (Q).T[(Q).TAIL]
#define MaxEl(Q) (Q).MaxEl


//untuk mesin kata
typedef struct {
	char TabKata[30+1]; /* container penyimpan kata, indeks yang dipakai [1..30] */
    int Length;
} Kata;



typedef struct {
    //Maha
} Map;

typedef struct {
    //string Name *antisipasi kalo recruit 2 atau lebih unit dengan tipe sama
    int MaxHealth;
    int Health;
    int Attack;
    int Defense; //ada di contoh?
    int MaxMove;
    int Move;
    char AttackType; //'m' untuk melee, 'r' untuk ranged
    boolean Hit; //kesempatan serangan, true bila belum menyerang, false bila sudah menyerang
    Point Location;
    int Harga;
} TypeUnit;


/*
MASIH RAGU. takut 2 list ini bentrok pas pemanggilan Info(P), Next(P), First(L)nya.
*/

typedef struct tElmtlist *addressU;
typedef struct tElmtlist {
	TypeUnit info;
	addressU next;
} ElmtListU;
typedef struct {
	addressU First;
} ListUnit;

typedef struct t1Elmtlist *addressV;
typedef struct t1Elmtlist {
	Building info;
	addressV next;
} ElmtListV;
typedef struct {
	addressV First;
} ListVillages;

#define Info(P) (P)->info
#define Next(P) (P)->next
#define First(L) (L).First


typedef struct {
    //kepemilikan, gold, tipe
    char * Owner;
    int Gold;
    char * Type;
} Building;

typedef struct {
    //income, upkeep, gold, warna, dst
    int Gold
    ListUnit Unit;
    ListVillages Villages;
    int Income;
    int Upkeep;
    //Warna
    //aing gatau warna pake tipe apa lul
} Player;

#endif
