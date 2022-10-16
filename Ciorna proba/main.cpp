#include <iostream>
using namespace std;

int mt[10][10], ok_line, ok_column, line_1, line_2, line_3, line_4, line_5, line_6, line_7, line_8, line_9;
int column_1, column_2, column_3, column_4, column_5, column_6, column_7, column_8, column_9;
int main () {
    for (int i = 1; i <= 9; ++i) {
        for (int j = 1; j <= 9; ++j) {
            cin >> mt[i][j];
            if (mt[i][j] == 1) {
                ++line_1;
            }
            else if (mt[i][j] == 2) {
                ++line_2;
            }
            else if (mt[i][j] == 3) {
                ++line_3;
            }
            else if (mt[i][j] == 4) {
                ++line_4;
            }
            else if (mt[i][j] == 5) {
                ++line_5;
            }
            else if (mt[i][j] == 6) {
                ++line_6;
            }
            else if (mt[i][j] == 7) {
                ++line_7;
            }
            else if (mt[i][j] == 8) {
                ++line_8;
            }
            else if (mt[i][j] == 9) {
                ++line_9;
            }
        }
    }
    for (int i = 1; i <= 3; ++i) {
        for (int j = 1; j <= 3; ++j) {
            cout << mt[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "\n";
     for (int i = 4; i <= 6; ++i) {
        for (int j = 1; j <= 3; ++j) {
            cout << mt[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "\n";
     for (int i = 7; i <= 9; ++i) {
        for (int j = 1; j <= 3; ++j) {
            cout << mt[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "\n";
     for (int i = 1; i <= 3; ++i) {
        for (int j = 4; j <= 6; ++j) {
            cout << mt[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "\n";
     for (int i = 4; i <= 6; ++i) {
        for (int j = 4; j <= 6; ++j) {
            cout << mt[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "\n";
     for (int i = 7; i <= 9; ++i) {
        for (int j = 4; j <= 6; ++j) {
            cout << mt[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "\n";
     for (int i = 1; i <= 3; ++i) {
        for (int j = 7; j <= 9; ++j) {
            cout << mt[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "\n";
     for (int i = 4; i <= 6; ++i) {
        for (int j = 7; j <= 9; ++j) {
            cout << mt[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "\n";
     for (int i = 7; i <= 9; ++i) {
        for (int j = 7; j <= 9; ++j) {
            cout << mt[i][j] << " ";
        }
        cout << "\n";
    }
   /* if (line_1 && line_2 == 9 && line_3 == 9 && line_4 == 9 && line_5 == 9 && line_6 == 9 && line_7 == 9 && line_8 == 9 && line_9 == 9) {
        ok_line = 1;
    }
    for (int j = 1; j <= 9; ++j) {
        for (int i = 1;i <= 9; ++i) {
            if (mt[i][j] == 1) {
                ++column_1;
            }
            else if (mt[i][j] == 2) {
                ++column_2;
            }
            else if (mt[i][j] == 3) {
                ++column_3;
            }
            else if (mt[i][j] == 4) {
                ++column_4;
            }
            else if (mt[i][j] == 5) {
                ++column_5;
            }
            else if (mt[i][j] == 6) {
                ++column_6;
            }
            else if (mt[i][j] == 7) {
                ++column_7;
            }
            else if (mt[i][j] == 8) {
                ++column_8;
            }
            else if (mt[i][j] == 9) {
                ++column_9;
            }
        }
    }
    if (column_1 == 9 && column_2 == 9 && column_3 == 9 && column_4 == 9 && column_5 == 9 && column_6 == 9 && column_7 == 9 && column_8 == 9 && column_9 == 9) {
        ok_column = 1;
    }
    if (ok_line == 1 && ok_column == 1) {
        cout << "corect";
    } else {
        cout << "incorect";
    }*/
return 0;
}
