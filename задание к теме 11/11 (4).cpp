// 11 (4).cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

int main()
{

    int x, y;
    cout << "Enter point coordinates,not lying on the coordinate axes OX and OY" << endl;
    cin >> x >> y;

    if ((x > 0) and (y > 0))
    {
        cout << "First quarter";
    }
    else if ((x < 0) and (y > 0))
    {
        cout << "Second quarter";
    }
    else if ((x < 0) and (y < 0))
    {
        cout << "Third quarter";
    }
    else if ((x > 0) and (y < 0))
    {
        cout << "Fourth quarter";
    }
    else
        cout << "the point lies on the axes Ox and Oy, which does not correspond to the condition";
}