int main()
{
    int i{30000};
    char c = i; // chars have range -128 to 127

    std::cout << static_cast<int>(c) << '\n';

    return 0;
}
