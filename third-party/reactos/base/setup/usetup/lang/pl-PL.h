/*
 *      translated by Caemyr (Jan-Feb, Apr, 2008)
 *      Use forum PM or IRC to contact me
 *      https://greenteaos.github.io/
 *      IRC: irc.freenode.net #reactos-pl;
 *      Updated by Wojo664 (July, 2014)
 *      Updated by Saibamen (July, 2015)
 */

#pragma once

MUI_LAYOUTS plPLLayouts[] =
{
    { L"0415", L"00000415" },
    { L"0415", L"00010415" },
    { L"0409", L"00000409" },
    { NULL, NULL }
};

static MUI_ENTRY plPLLanguagePageEntries[] =
{
    {
        4,
        3,
        " Instalator Greentea " KERNEL_VERSION_STR " ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        8,
        "Wyb�r j�zyka",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        10,
        "\x07  Prosz� wybra� j�zyk dla procesu instalacji systemu",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        11,
        "   i nacisn�� ENTER.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        13,
        "\x07  Wybrany j�zyk b�dzie domy�lnym dla zainstalowanego systemu.",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "ENTER = Kontynuacja  F3 = Wyj�cie",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY plPLWelcomePageEntries[] =
{
    {
        4,
        3,
        " Instalator Greentea " KERNEL_VERSION_STR " ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        8,
        "Witamy w programie instalacyjnym systemu Greentea",
        TEXT_STYLE_HIGHLIGHT
    },
    {
        6,
        11,
        " Na tym etapie, instalator skopiuje niezb�dne pliki systemu operacyjnego",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        12,
        "na tw�j komputer i rozpocznie kolejny etap procesu instalacji.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        15,
        "\x07  Naci�nij ENTER, aby zainstalowa� system Greentea.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        17,
        "\x07  Naci�nij R, aby naprawi� zainstalowany system Greentea.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        19,
        "\x07  Naci�nij L, aby zapozna� si� z licencj� Greentea",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        21,
        "\x07  Naci�nij F3, aby wyj�� bez instalacji systemu Greentea.",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        23,
        "Wi�cej informacji o systemie Greentea mo�na znale�� na stronie:",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        24,
        "https://greenteaos.github.io/",
        TEXT_STYLE_HIGHLIGHT
    },
    {
        0,
        0,
        "ENTER = Kontynuacja  R = Naprawa F3 = Wyj�cie",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY plPLIntroPageEntries[] =
{
    {
        4,
        3,
        " Instalator Greentea " KERNEL_VERSION_STR " ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        8,
        "Instalator Greentea wci�� jest we wczesnej fazie rozwoju. Nadal nie",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        9,
        "obs�uguje wszystkich funkcji, niezb�dnych dla programu instalacyjnego.",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        12,
        "Najwa�niejsze ograniczenia:",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        13,
        "- Instalator obs�uguje jedynie system plik�w FAT.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        14,
        "- Brakuje sprawdzenia poprawno�ci systemu plik�w.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        23,
        "\x07  Naci�nij ENTER, aby zainstalowa� system Greentea.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        25,
        "\x07  Naci�nij F3, aby wyj�� bez instalacji systemu Greentea.",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "ENTER = Kontynuacja   F3 = Wyj�cie",
        TEXT_TYPE_STATUS| TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY plPLLicensePageEntries[] =
{
    {
        4,
        3,
        " Instalator Greentea " KERNEL_VERSION_STR " ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        6,
        "Licencja:",
        TEXT_STYLE_HIGHLIGHT
    },
    {
        8,
        8,
        "System Greentea jest licencjonowany na warunkach licencji",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        9,
        "GNU GPL z elementami kodu pochodz�cego z kompatybilnych",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        10,
        "licencji, takich jak X11 czy BSD albo GNU LGPL. Ca�e",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        11,
        "oprogramowanie, b�d�ce cz��ci� systemu Greentea podlega wi�c",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        12,
        "licencji GNU GPL jak i odpowiedniej licencji oryginalnej.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        13,
        "To oprogramowanie wydawane jest BEZ JAKIEJKOLWIEK gwarancji",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        15,
        "czy te� ogranicze� w u�yciu, poza przepisami prawa lokalnego",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        16,
        "b�d� mi�dzynarodowego. Licencja systemu Greentea",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        17,
        "reguluje wy��cznie zasady dystrybucji dla os�b trzecich.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        18,
        "Je�li z jakiego� powodu nie otrzyma�e� kopii licencji",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        19,
        "GNU GPL wraz z systemem Greentea, prosimy odwiedzi� stron�:",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        20,
        "http://www.gnu.org/licenses/licenses.html",
        TEXT_STYLE_HIGHLIGHT
    },
    {
        8,
        22,
        "Gwarancja:",
        TEXT_STYLE_HIGHLIGHT
    },
    {
        8,
        24,
        "Niniejszy program jest wolnym oprogramowaniem; szczeg��y",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        25,
        "dotycz�ce kopiowania w �r�d�ach. Nie ma �ADNEJ gwarancji",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        26,
        "PRZYDATNO�CI HANDLOWEJ LUB DO OKRE�LONYCH ZASTOSOWA�",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "ENTER = Powr�t",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY plPLDevicePageEntries[] =
{
    {
        4,
        3,
        " Instalator Greentea " KERNEL_VERSION_STR " ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        8,
        "Poni�sza lista zawiera obecne ustawienia sprz�tu.",
        TEXT_STYLE_NORMAL
    },
    {
        24,
        11,
        "Komputer:",
        TEXT_STYLE_NORMAL | TEXT_ALIGN_RIGHT
    },
    {
        24,
        12,
        "Ekran:",
        TEXT_STYLE_NORMAL | TEXT_ALIGN_RIGHT
    },
    {
        24,
        13,
        "Klawiatura:",
        TEXT_STYLE_NORMAL | TEXT_ALIGN_RIGHT
    },
    {
        24,
        14,
        "Uk�. klawiatury:",
        TEXT_STYLE_NORMAL | TEXT_ALIGN_RIGHT
    },
    {
        24,
        16,
        "Zapisz:",
        TEXT_STYLE_NORMAL | TEXT_ALIGN_RIGHT
    },
    {
        25,
        16, "Akceptuj ustawienia sprz�tu",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        19,
        "Mo�esz zmieni� poszczeg�lne ustawienia za pomoc� klawiszy G�RA i D�,",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        20,
        "aby wybra� kategori�. Potem naci�nij ENTER, by przej�� do menu z ",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        21,
        "ustawieniami szczeg��owymi do wyboru.",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        23,
        "Gdy wszystkie ustawienia s� poprawne, wybierz: ",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        24,
        "\"Akceptuj ustawienia sprz�tu\" i naci�nij ENTER.",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "ENTER = Kontynuacja   F3 = Wyj�cie",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY plPLRepairPageEntries[] =
{
    {
        4,
        3,
        " Instalator Greentea " KERNEL_VERSION_STR " ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        8,
        "Instalator Greentea wci�� jest we wczesnej fazie rozwoju. Nadal nie",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        9,
        "obs�uguje wszystkich funkcji, niezb�dnych dla programu instalacyjnego.",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        12,
        "Naprawa istniej�cej instalacji systemu nie jest jeszcze mo�liwa.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        15,
        "\x07  Naci�nij U �eby uaktualni� system.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        17,
        "\x07  Naci�nij R, by uruchomi� Konsol� Odtwarzania.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        19,
        "\x07  Naci�nij ESC, by powr�ci� do g��wnego menu.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        21,
        "\x07  Naci�nij ENTER, by zrestartowa� komputer.",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "ESC = Menu g��wne  ENTER = Restart",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY plPLComputerPageEntries[] =
{
    {
        4,
        3,
        " Instalator Greentea " KERNEL_VERSION_STR " ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        8,
        "Aby zmieni� typ komputera, na kt�rym chcesz zainstalowa� Greentea",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        10,
        "\x07  Naci�nij klawisz G�RA albo D�, by wybra� odpowiedni typ komputera.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        11,
        "   a nast�pnie naci�nij ENTER.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        13,
        "\x07  Naci�nij klawisz ESC, aby powr�ci� do poprzedniej strony bez zmiany",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        14,
        "   typu komputera.",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "ENTER = Kontynuacja   ESC = Anulowanie   F3 = Wyj�cie",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY plPLFlushPageEntries[] =
{
    {
        4,
        3,
        " Instalator Greentea " KERNEL_VERSION_STR " ",
        TEXT_STYLE_UNDERLINE
    },
    {
        10,
        6,
        "System obecnie sprawdza czy dane s� poprawnie zapisane na dysku",
        TEXT_STYLE_NORMAL
    },
    {
        10,
        8,
        "To mo�e zaj�� minut�.",
        TEXT_STYLE_NORMAL
    },
    {
        10,
        9,
        "Po zako�czeniu, system zrestartuje komputer automatycznie.",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "Czyszczenie pami�ci Cache",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY plPLQuitPageEntries[] =
{
    {
        4,
        3,
        " Instalator Greentea " KERNEL_VERSION_STR " ",
        TEXT_STYLE_UNDERLINE
    },
    {
        10,
        6,
        "Greentea zosta� ju� poprawnie zainstalowany",
        TEXT_STYLE_NORMAL
    },
    {
        10,
        8,
        "Upewnij si� �e w Nap�dzie A: nie ma dyskietki i",
        TEXT_STYLE_NORMAL
    },
    {
        10,
        9,
        "w nap�dach optycznych - �adnych CD-ROM�w.",
        TEXT_STYLE_NORMAL
    },
    {
        10,
        11,
        "Naci�nij ENTER, by zrestartowa� komputer.",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "Prosz� czeka� ...",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG,
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY plPLDisplayPageEntries[] =
{
    {
        4,
        3,
        " Instalator Greentea " KERNEL_VERSION_STR " ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        8,
        "Chcesz zmieni� rozdzielczo�� ekranu.",
        TEXT_STYLE_NORMAL
    },
    {   8,
        10,
         "\x07  Naci�nij klawisz G�RA albo D�, by wybra� rozdzielczo�� i liczb�",
         TEXT_STYLE_NORMAL
    },
    {
        8,
        11,
        "   kolor�w, a nast�pnie naci�nij ENTER.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        13,
        "\x07  Naci�nij ESC, aby powr�ci� do poprzedniej strony bez zmiany",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        14,
        "   rozdzielczo�ci czy ilo�ci kolor�w.",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "ENTER = Kontynuacja   ESC = Anulowanie   F3 = Wyj�cie",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY plPLSuccessPageEntries[] =
{
    {
        4,
        3,
        " Instalator Greentea " KERNEL_VERSION_STR " ",
        TEXT_STYLE_UNDERLINE
    },
    {
        10,
        6,
        "Podstawowe sk�adniki systemu Greentea zosta�y zainstalowane.",
        TEXT_STYLE_NORMAL
    },
    {
        10,
        8,
        "Upewnij si� �e w Nap�dzie A: nie ma dyskietki i",
        TEXT_STYLE_NORMAL
    },
    {
        10,
        9,
        "w nap�dach optycznych - �adnych CD-ROM�w.",
        TEXT_STYLE_NORMAL
    },
    {
        10,
        11,
        "Naci�nij ENTER, by zrestartowa� komputer.",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "ENTER = Restart komputera",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY plPLBootPageEntries[] =
{
    {
        4,
        3,
        " Instalator Greentea " KERNEL_VERSION_STR " ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        8,
        "Instalator Greentea nie mo�e wgra� bootloadera na tw�j",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        9,
        "dysk twardy",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        13,
        "Prosz� umie�ci� sformatowan� dyskietk� w nap�dzie A:",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        14,
        "i nacisn�� klawisz ENTER.",
        TEXT_STYLE_NORMAL,
    },
    {
        0,
        0,
        "ENTER = Kontynuacja   F3 = Wyj�cie",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    }

};

static MUI_ENTRY plPLSelectPartitionEntries[] =
{
    {
        4,
        3,
        " Instalator Greentea " KERNEL_VERSION_STR " ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        8,
        "Poni�sza lista pokazuje istniej�ce partycje i puste",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        9,
        "miejsce na nowe partycje.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        11,
        "\x07  Naci�nij G�RA lub D�, by wybra� pozycj� z listy.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        13,
        "\x07  Naci�nij ENTER, by zainstalowa� Greentea na wybranej partycji.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        15,
        "\x07  Naci�nij P, by stworzy� partycj� podstawow�.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        17,
        "\x07  Naci�nij E, by stworzy� partycj� rozszerzon�.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        19,
        "\x07  Naci�nij L, by stworzy� partycj� logiczn�.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        21,
        "\x07  Naci�nij D, by skasowa� istniej�c� partycj�.",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "Prosz� czeka�...",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY plPLConfirmDeleteSystemPartitionEntries[] =
{
    {
        4,
        3,
        " Instalator Greentea " KERNEL_VERSION_STR " ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        8,
        "You have chosen to delete the system partition.",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        10,
        "System partitions can contain diagnostic programs, hardware configuration",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        11,
        "programs, programs to start an operating system (like Greentea) or other",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        12,
        "programs provided by the hardware manufacturer.",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        14,
        "Delete a system partition only when you are sure that there are no such",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        15,
        "programs on the partition, or when you are sure you want to delete them.",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        16,
        "When you delete the partition, you might not be able to boot the",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        17,
        "computer from the harddisk until you finished the Greentea Setup.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        20,
        "\x07  Press ENTER to delete the system partition. You will be asked",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        21,
        "   to confirm the deletion of the partition again later.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        24,
        "\x07  Press ESC to return to the previous page. The partition will",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        25,
        "   not be deleted.",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "ENTER=Continue  ESC=Cancel",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY plPLFormatPartitionEntries[] =
{
    {
        4,
        3,
        " Instalator Greentea " KERNEL_VERSION_STR " ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        8,
        "Formatowanie partycji",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        10,
        "Instalator sformatuje teraz partycj�. Naci�nij ENTER, aby kontynuowa�.",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "ENTER = Kontynuacja   F3 = Wyj�cie",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        TEXT_STYLE_NORMAL
    }
};

static MUI_ENTRY plPLInstallDirectoryEntries[] =
{
    {
        4,
        3,
        " Instalator Greentea " KERNEL_VERSION_STR " ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        8,
        "Instalator przegra pliki systemu na wybran� partycj�. Wybierz",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        9,
        "katalog, do kt�rego chcesz zainstalowa� system Greentea:",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        14,
        "Aby zmieni� domy�lny katalog, u�yj klawisza BACKSPACE, by skasowa�",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        15,
        "a nast�pnie wprowad� now� �cie�k� do katalogu, do kt�rego system",
        TEXT_STYLE_NORMAL
    },
    {
        6,
        16,
        "ma zosta� zainstalowany.",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "ENTER = Kontynuacja   F3 = Wyj�cie",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY plPLFileCopyEntries[] =
{
    {
        4,
        3,
        " Instalator Greentea " KERNEL_VERSION_STR " ",
        TEXT_STYLE_UNDERLINE
    },
    {
        11,
        12,
        "Prosz� czeka�, Instalator Greentea kopiuje pliki do wybranego",
        TEXT_STYLE_NORMAL | TEXT_ALIGN_CENTER
    },
    {
        30,
        13,
        "katalogu.",
        TEXT_STYLE_NORMAL | TEXT_ALIGN_CENTER
    },
    {
        20,
        14,
        "To mo�e zaj�� kilka minut.",
        TEXT_STYLE_NORMAL | TEXT_ALIGN_CENTER
    },
    {
        50,
        0,
        "\xB3 Prosz� czeka�...    ",
        TEXT_TYPE_STATUS
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY plPLBootLoaderEntries[] =
{
    {
        4,
        3,
        " Instalator Greentea " KERNEL_VERSION_STR " ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        8,
        "Instalator musi teraz wgra� bootloader",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        12,
        "Wgraj bootloader na dysk twardy (MBR i VBR).",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        13,
        "Wgraj bootloader na dysk twardy (tylko VBR).",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        14,
        "Wgraj bootloader na dyskietk�.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        15,
        "Pomi� wgrywanie bootloadera.",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "ENTER = Kontynuacja   F3 = Wyj�cie",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY plPLKeyboardSettingsEntries[] =
{
    {
        4,
        3,
        " Instalator Greentea " KERNEL_VERSION_STR " ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        8,
        "Chcesz zmieni� typ klawiatury, jaki ma by� zainstalowany.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        10,
        "\x07  Naci�nij klawisz G�RA albo D�, by wybra� odpowiedni typ klawiatury.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        11,
        "   a nast�pnie naci�nij ENTER.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        13,
        "\x07  Naci�nij ESC, aby powr�ci� do poprzedniej strony bez zmiany",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        14,
        "   typu klawiatury.",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "ENTER = Kontynuacja   ESC = Anulowanie   F3 = Wyj�cie",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY plPLLayoutSettingsEntries[] =
{
    {
        4,
        3,
        " Instalator Greentea " KERNEL_VERSION_STR " ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        8,
        "Prosz� wybra� domy�lnie instalowany uk�ad klawiatury.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        10,
        "\x07  Naci�nij klawisz G�RA albo D�, by wybra� odpowiedni uk�ad",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        11,
        "   klawiatury. Nast�pnie naci�nij ENTER.",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        13,
        "\x07  Naci�nij ESC, aby powr�ci� do poprzedniej strony bez zmiany",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        14,
        "   uk�adu klawiatury.",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "ENTER = Kontynuacja   ESC = Anulowanie   F3 = Wyj�cie",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    },

};

static MUI_ENTRY plPLPrepareCopyEntries[] =
{
    {
        4,
        3,
        " Instalator Greentea " KERNEL_VERSION_STR " ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        8,
        "Instalator przygotuje tw�j komputer do skopiowania plik�w systemu. ",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "Tworzenie listy plik�w do skopiowania...",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    },

};

static MUI_ENTRY plPLSelectFSEntries[] =
{
    {
        4,
        3,
        " Instalator Greentea " KERNEL_VERSION_STR " ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        17,
        "Wybierz system plik�w z listy poni�ej.",
        0
    },
    {
        8,
        19,
        "\x07  Naci�nij klawisz G�RA alub D�, by wybra� system plik�w.",
        0
    },
    {
        8,
        21,
        "\x07  Naci�nij ENTER, aby sformatowa� partycj�.",
        0
    },
    {
        8,
        23,
        "\x07  Naci�nij ESC, aby wybra� inn� partycj�.",
        0
    },
    {
        0,
        0,
        "ENTER = Kontynuacja   ESC = Anulowanie   F3 = Wyj�cie",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },

    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY plPLDeletePartitionEntries[] =
{
    {
        4,
        3,
        " Instalator Greentea " KERNEL_VERSION_STR " ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        8,
        "Chcesz skasowa� wybran� partycj�",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        18,
        "\x07  Naci�nij D, by skasowa� partycj�.",
        TEXT_STYLE_NORMAL
    },
    {
        11,
        19,
        "UWAGA: Wszystkie dane, zapisane na tej partycji zostan� skasowane!",
        TEXT_STYLE_NORMAL
    },
    {
        8,
        21,
        "\x07  Naci�nij ESC, aby anulowa�.",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "D = Skasowanie partycji   ESC = Anulowanie   F3 = Wyj�cie",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY plPLRegistryEntries[] =
{
    {
        4,
        3,
        " Instalator Greentea " KERNEL_VERSION_STR " ",
        TEXT_STYLE_UNDERLINE
    },
    {
        6,
        8,
        "Instalator uaktualnia w�a�nie konfiguracj� systemu. ",
        TEXT_STYLE_NORMAL
    },
    {
        0,
        0,
        "Tworzenie ga��zi rejestru...",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG
    },
    {
        0,
        0,
        NULL,
        0
    },

};

MUI_ERROR plPLErrorEntries[] =
{
    {
        // NOT_AN_ERROR
        "Sukces\n"
    },
    {
        //ERROR_NOT_INSTALLED
        "Greentea nie zosta� w pe�ni zainstalowany na twoim\n"
        "komputerze. Je�li wyjdziesz teraz, trzeba b�dzie\n"
        "ponownie uruchomi� instalator, by zainstalowa� Greentea.\n"
        "\n"
        "  \x07  Naci�nij ENTER, aby kontynuowa� instalacj�.\n"
        "  \x07  Naci�nij F3, aby wyj�� z instalatora.",
        "F3 = Wyj�cie  ENTER = Kontynuacja"
    },
    {
        //ERROR_NO_HDD
        "Instalator nie znalaz� �adnego dysku twardego.\n",
        "ENTER = Restart komputera"
    },
    {
        //ERROR_NO_SOURCE_DRIVE
        "Instalator nie znalaz� nap�du �r�d�owego.\n",
        "ENTER = Restart komputera"
    },
    {
        //ERROR_LOAD_TXTSETUPSIF
        "Instalator nie m�g� za�adowa� pliku TXTSETUP.SIF.\n",
        "ENTER = Restart komputera"
    },
    {
        //ERROR_CORRUPT_TXTSETUPSIF
        "Instalator znalaz� uszkodzony plik TXTSETUP.SIF.\n",
        "ENTER = Restart komputera"
    },
    {
        //ERROR_SIGNATURE_TXTSETUPSIF,
        "Instalator znalaz� nieprawid�owy wpis w TXTSETUP.SIF.\n",
        "ENTER = Restart komputera"
    },
    {
        //ERROR_DRIVE_INFORMATION
        "Instalator nie m�g� odczyta� informacji o nap�dzie.\n",
        "ENTER = Restart komputera"
    },
    {
        //ERROR_WRITE_BOOT,
        "Nieudane zapisanie FAT bootcode na partycji systemowej.",
        "ENTER = Restart komputera"
    },
    {
        //ERROR_LOAD_COMPUTER,
        "Instalator nie m�g� za�adowa� listy typ�w komputera.\n",
        "ENTER = Restart komputera"
    },
    {
        //ERROR_LOAD_DISPLAY,
        "Instalator nie m�g� za�adowa� listy ustawie� ekranu.\n",
        "ENTER = Restart komputera"
    },
    {
        //ERROR_LOAD_KEYBOARD,
        "Instalator nie m�g� za�adowa� listy typ�w klawiatury.\n",
        "ENTER = Restart komputera"
    },
    {
        //ERROR_LOAD_KBLAYOUT,
        "Instalator nie m�g� za�adowa� listy uk�ad�w klawiatury.\n",
        "ENTER = Restart komputera"
    },
    {
        //ERROR_WARN_PARTITION,
        "Instalator wykry�, �e co najmniej jeden dysk twardy zawiera niekompatybiln� \n"
        "tablic� partycji, kt�ra nie b�dzie poprawnie obs�ugiwana!\n"
        "\n"
        "Tworzenie lub kasowanie partycji mo�e zniszczy� ca�� tablic� partycji.\n"
        "\n"
        "  \x07  Naci�nij F3, aby wyj�� z instalatora.\n"
        "  \x07  Naci�nij ENTER, aby kontynuowa�.",
        "F3 = Wyj�cie  ENTER = Kontynuacja"
    },
    {
        //ERROR_NEW_PARTITION,
        "Nie mo�esz stworzy� nowej partycji w miejscu ju�\n"
        "istniej�cej!\n"
        "\n"
        "  * Naci�nij dowolny klawisz, aby kontynuowa�.",
        NULL
    },
    {
        //ERROR_DELETE_SPACE,
        "Nie mo�esz skasowa� pustej przestrzeni, gdzie nie ma �adnej partycji!\n"
        "\n"
        "  * Naci�nij dowolny klawisz, aby kontynuowa�.",
        NULL
    },
    {
        //ERROR_INSTALL_BOOTCODE,
        "Nieudana instalacja FAT bootcode na partycji systemowej.",
        "ENTER = Restart komputera"
    },
    {
        //ERROR_NO_FLOPPY,
        "Brak dyskietki w nap�dzie A:.",
        "ENTER = Kontynuacja"
    },
    {
        //ERROR_UPDATE_KBSETTINGS,
        "Instalator nie m�g� zmieni� uk�adu klawiatury.",
        "ENTER = Restart komputera"
    },
    {
        //ERROR_UPDATE_DISPLAY_SETTINGS,
        "Instalator nie m�g� zmieni� ustawie� ekranu w rejestrze.",
        "ENTER = Restart komputera"
    },
    {
        //ERROR_IMPORT_HIVE,
        "Instalator nie by� w stanie zaimportowa� pliku ga��zi rejestru.",
        "ENTER = Restart komputera"
    },
    {
        //ERROR_FIND_REGISTRY
        "Instalator nie by� w stanie znale�� plik�w z danymi rejestru.",
        "ENTER = Restart komputera"
    },
    {
        //ERROR_CREATE_HIVE,
        "Instalator nie m�g� stworzy� ga��zi rejestru.",
        "ENTER = Restart komputera"
    },
    {
        //ERROR_INITIALIZE_REGISTRY,
        "Instalator nie by� w stanie ustawi� inicjalizacji rejestru.",
        "ENTER = Restart komputera"
    },
    {
        //ERROR_INVALID_CABINET_INF,
        "Cabinet nie zawiera prawid�owego pliku inf.\n",
        "ENTER = Restart komputera"
    },
    {
        //ERROR_CABINET_MISSING,
        "Cabinet nie zosta� znaleziony.\n",
        "ENTER = Restart komputera"
    },
    {
        //ERROR_CABINET_SCRIPT,
        "Cabinet nie zawiera skryptu instalacji.\n",
        "ENTER = Restart komputera"
    },
    {
        //ERROR_COPY_QUEUE,
        "Instalator nie by� w stanie otworzy� kolejki kopiowania pliku.\n",
        "ENTER = Restart komputera"
    },
    {
        //ERROR_CREATE_DIR,
        "Instalator nie m�g� stworzy� katalog�w.",
        "ENTER = Restart komputera"
    },
    {
        //ERROR_TXTSETUP_SECTION,
        "Instalator nie by� w stanie znale�� sekcji 'Directories'\n"
        "w pliku TXTSETUP.SIF.\n",
        "ENTER = Restart komputera"
    },
    {
        //ERROR_CABINET_SECTION,
        "Instalator nie by� w stanie znale�� sekcji 'Directories'\n"
        "w pliku cabinet.\n",
        "ENTER = Restart komputera"
    },
    {
        //ERROR_CREATE_INSTALL_DIR
        "Instalator nie m�g� stworzy� katalogu instalacji.",
        "ENTER = Restart komputera"
    },
    {
        //ERROR_FIND_SETUPDATA,
        "Instalator nie by� w stanie znale�� sekcji 'SetupData'\n"
        "w pliku TXTSETUP.SIF.\n",
        "ENTER = Restart komputera"
    },
    {
        //ERROR_WRITE_PTABLE,
        "Instalator nie m�g� zapisa� zmian w tablicy partycji.\n"
        "ENTER = Restart komputera"
    },
    {
        //ERROR_ADDING_CODEPAGE,
        "Instalator nie m�g� doda� strony kodowania do rejestru.\n"
        "ENTER = Restart komputera"
    },
    {
        //ERROR_UPDATE_LOCALESETTINGS,
        "Instalator nie m�g� ustawi� wersji j�zykowej.\n"
        "ENTER = Restart komputera"
    },
    {
        //ERROR_ADDING_KBLAYOUTS,
        "Instalator nie m�g� doda� uk�ad�w klawiatury do rejestru.\n"
        "ENTER = Restart komputera"
    },
    {
        //ERROR_UPDATE_GEOID,
        "Instalator nie m�g� ustawi� lokalizacji geograficznej.\n"
        "ENTER = Restart komputera"
    },
    {
        //ERROR_DIRECTORY_NAME,
        "Nieprawid�owa nazwa katalogu.\n"
        "\n"
        "  * Naci�nij dowolny klawisz, aby kontynuowa�."
    },
    {
        //ERROR_INSUFFICIENT_PARTITION_SIZE,
        "Wybrana partycja nie jest wystarczaj�co du�a, aby zainstalowa� Greentea.\n"
        "Instalacyjna partycja musi mie� rozmiar co najmniej %lu MB.\n"
        "\n"
        "  * Naci�nij dowolny klawisz, aby kontynuowa�.",
        NULL
    },
    {
        //ERROR_PARTITION_TABLE_FULL,
        "Nie mo�na utworzy� na tym dysku partycji podstawowej lub\n" // FIXME
        "rozszerzonej, poniewa� tabela partycji jest pe�na.\n"
        "\n"
        "  * Naci�nij dowolny klawisz, aby kontynuowa�."
    },
    {
        //ERROR_ONLY_ONE_EXTENDED,
        "Nie mo�esz utworzy� wi�cej ni� jednej partycji rozszerzonej na dysku.\n"
        "\n"
        "  * Naci�nij dowolny klawisz, aby kontynuowa�."
    },
    {
        //ERROR_FORMATTING_PARTITION,
        "Instalator nie m�g� sformatowa� partycji:\n"
        " %S\n"
        "\n"
        "ENTER = Restart komputera"
    },
    {
        NULL,
        NULL
    }
};

MUI_PAGE plPLPages[] =
{
    {
        LANGUAGE_PAGE,
        plPLLanguagePageEntries
    },
    {
        START_PAGE,
        plPLWelcomePageEntries
    },
    {
        INSTALL_INTRO_PAGE,
        plPLIntroPageEntries
    },
    {
        LICENSE_PAGE,
        plPLLicensePageEntries
    },
    {
        DEVICE_SETTINGS_PAGE,
        plPLDevicePageEntries
    },
    {
        REPAIR_INTRO_PAGE,
        plPLRepairPageEntries
    },
    {
        COMPUTER_SETTINGS_PAGE,
        plPLComputerPageEntries
    },
    {
        DISPLAY_SETTINGS_PAGE,
        plPLDisplayPageEntries
    },
    {
        FLUSH_PAGE,
        plPLFlushPageEntries
    },
    {
        SELECT_PARTITION_PAGE,
        plPLSelectPartitionEntries
    },
    {
        CONFIRM_DELETE_SYSTEM_PARTITION_PAGE,
        plPLConfirmDeleteSystemPartitionEntries
    },
    {
        SELECT_FILE_SYSTEM_PAGE,
        plPLSelectFSEntries
    },
    {
        FORMAT_PARTITION_PAGE,
        plPLFormatPartitionEntries
    },
    {
        DELETE_PARTITION_PAGE,
        plPLDeletePartitionEntries
    },
    {
        INSTALL_DIRECTORY_PAGE,
        plPLInstallDirectoryEntries
    },
    {
        PREPARE_COPY_PAGE,
        plPLPrepareCopyEntries
    },
    {
        FILE_COPY_PAGE,
        plPLFileCopyEntries
    },
    {
        KEYBOARD_SETTINGS_PAGE,
        plPLKeyboardSettingsEntries
    },
    {
        BOOT_LOADER_PAGE,
        plPLBootLoaderEntries
    },
    {
        LAYOUT_SETTINGS_PAGE,
        plPLLayoutSettingsEntries
    },
    {
        QUIT_PAGE,
        plPLQuitPageEntries
    },
    {
        SUCCESS_PAGE,
        plPLSuccessPageEntries
    },
    {
        BOOT_LOADER_FLOPPY_PAGE,
        plPLBootPageEntries
    },
    {
        REGISTRY_PAGE,
        plPLRegistryEntries
    },
    {
        -1,
        NULL
    }
};

MUI_STRING plPLStrings[] =
{
    {STRING_PLEASEWAIT,
     "   Prosz� czeka�..."},
    {STRING_INSTALLCREATEPARTITION,
     "  ENTER = Instalacja   P = Partycja Podstawowa   E = Rozszerzona   F3 = Wyj�cie"},
    {STRING_INSTALLCREATELOGICAL,
     "   ENTER = Instalacja   L = Utworzenie Partycji Logicznej   F3 = Wyj�cie"},
    {STRING_INSTALLDELETEPARTITION,
     "   ENTER = Instalacja   D = Skasowanie Partycji   F3 = Wyj�cie"},
    {STRING_DELETEPARTITION,
     "   D = Skasowanie Partycji   F3 = Wyj�cie"},
    {STRING_PARTITIONSIZE,
     "Rozmiar nowej partycji:"},
    {STRING_CHOOSENEWPARTITION,
     "Wybrane: utworzenie nowej partycji podstawowej na"},
    {STRING_CHOOSE_NEW_EXTENDED_PARTITION,
     "Wybrane: utworzenie nowej partycji rozszerzonej na"},
    {STRING_CHOOSE_NEW_LOGICAL_PARTITION,
     "Wybrane: utworzenie nowej partycji logicznej na"},
    {STRING_HDDSIZE,
    "Prosz� wprowadzi� rozmiar nowej partycji w megabajtach."},
    {STRING_CREATEPARTITION,
     "   ENTER = Utworzenie Partycji   ESC = Anulowanie   F3 = Wyj�cie"},
    {STRING_PARTFORMAT,
    "Nast�puj�ca partycja zostanie sformatowana."},
    {STRING_NONFORMATTEDPART,
    "Mo�esz zainstalowa� Greentea na nowej lub niesformatowanej partycji."},
    {STRING_NONFORMATTEDSYSTEMPART,
    "Partycja systemowa nie jest jeszcze sformatowana."},
    {STRING_NONFORMATTEDOTHERPART,
    "Nowa partycja nie jest jeszcze sformatowana."},
    {STRING_INSTALLONPART,
    "Instalator kopiuje pliki systemu na wybran� partycj�."},
    {STRING_CHECKINGPART,
    "Instalator sprawdza wybran� partycj�."},
    {STRING_CONTINUE,
    "ENTER = Kontynuacja"},
    {STRING_QUITCONTINUE,
    "F3 = Wyj�cie  ENTER = Kontynuacja"},
    {STRING_REBOOTCOMPUTER,
    "ENTER = Restart komputera"},
    {STRING_TXTSETUPFAILED,
    "Instalator nie by� w stanie odnale�� sekcji '%S'\nw pliku TXTSETUP.SIF.\n"},
    {STRING_COPYING,
     "   Kopiowanie plik�w: %S"},
    {STRING_SETUPCOPYINGFILES,
     "Instalator kopiuje pliki..."},
    {STRING_REGHIVEUPDATE,
    "   Uaktualnianie..."},
    {STRING_IMPORTFILE,
    "   Importowanie %S..."},
    {STRING_DISPLAYETTINGSUPDATE,
    "   Zmiana ustawie� ekranu w rejestrze..."},
    {STRING_LOCALESETTINGSUPDATE,
    "   Zmiana wersji j�zykowej..."},
    {STRING_KEYBOARDSETTINGSUPDATE,
    "   Zmiana uk�adu klawiatury..."},
    {STRING_CODEPAGEINFOUPDATE,
    "   Dodawanie informacji o stronie kodowej do rejestru..."},
    {STRING_DONE,
    "   Uko�czone..."},
    {STRING_REBOOTCOMPUTER2,
    "   ENTER = Restart komputera"},
    {STRING_CONSOLEFAIL1,
    "Otwarcie konsoli nieudane\r\n\r\n"},
    {STRING_CONSOLEFAIL2,
    "Najcz�stsz� tego przyczyn� jest u�ycie klawiatury USB.\r\n"},
    {STRING_CONSOLEFAIL3,
    "Nie s� obecnie w pe�ni obs�ugiwane.\r\n"},
    {STRING_FORMATTINGDISK,
    "Instalator formatuje tw�j dysk"},
    {STRING_CHECKINGDISK,
    "Instalator sprawdza tw�j dysk"},
    {STRING_FORMATDISK1,
    " Sformatuj partycj� z systemem plik�w %S (szybkie formatowanie) "},
    {STRING_FORMATDISK2,
    " Sformatuj partycj� z systemem plik�w %S "},
    {STRING_KEEPFORMAT,
    " Zachowaj obecny system plik�w (bez zmian) "},
    {STRING_HDINFOPARTCREATE,
    "%I64u %s  Dysku Twardym %lu  (Port=%hu, Szyna=%hu, Id=%hu) na %wZ."},
    {STRING_HDDINFOUNK1,
    "%I64u %s  Dysk 02 Twardy %lu  (Port=%hu, Szyna=%hu, Id=%hu)."},
    {STRING_HDDINFOUNK2,
    "   %c%c  03Typ 0x%02X    %I64u %s"},
    {STRING_HDINFOPARTDELETE,
    "na %I64u %s  Dysku Twardym %lu  (Port=%hu, Szyna=%hu, Id=%hu) na %wZ."},
    {STRING_HDDINFOUNK3,
    "na %I64u %s  Dysku 05 Twardym %lu  (Port=%hu, Szyna=%hu, Id=%hu)."},
    {STRING_HDINFOPARTZEROED,
    "Dysk Twardy %lu (%I64u %s), Port=%hu, Szyna=%hu, Id=%hu (%wZ)."},
    {STRING_HDDINFOUNK4,
    "%c%c  07Typ 0x%02X    %I64u %s"},
    {STRING_HDINFOPARTEXISTS,
    "na Dysku Twardym %lu (%I64u %s), Port=%hu, Szyna=%hu, Id=%hu (%wZ)."},
    {STRING_HDDINFOUNK5,
    "%c%c %c %s09Typ %-3u%s                      %6lu %s"},
    {STRING_HDINFOPARTSELECT,
    "%6lu %s  Dysk Twardy %lu  (Port=%hu, Szyna=%hu, Id=%hu) na %S"},
    {STRING_HDDINFOUNK6,
    "%6lu %s  Dysk11 Twardy %lu  (Port=%hu, Szyna=%hu, Id=%hu)"},
    {STRING_NEWPARTITION,
    "Instalator utworzy� now� partycj�"},
    {STRING_UNPSPACE,
    "    %sMiejsce poza partycjami%s            %6lu %s"},
    {STRING_MAXSIZE,
    "MB (maks. %lu MB)"},
    {STRING_EXTENDED_PARTITION,
    "Partycja Rozszerzona"},
    {STRING_UNFORMATTED,
    "Nowa (Niesformatowana)"},
    {STRING_FORMATUNUSED,
    "Nieu�yte"},
    {STRING_FORMATUNKNOWN,
    "Nieznane"},
    {STRING_KB,
    "KB"},
    {STRING_MB,
    "MB"},
    {STRING_GB,
    "GB"},
    {STRING_ADDKBLAYOUTS,
    "Dodawanie uk�ad�w klawiatury"},
    {0, 0}
};
