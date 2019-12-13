class sortingAlghoritms
{
private:
    int numberOfElements;
    int* tab = new int[numberOfElements];

public:
    //constructors

    sortingAlghoritms(){
    }

    sortingAlghoritms(int numberOfElements, int* tab)
    {
        this->numberOfElements = numberOfElements;
        this->tab = tab;
    }

    //functions
    void Bubbles_Sort(int *tab, int numberOfElements);
    void Quick_Sort(int *tab, int left, int right);
    void Merge_Sort(int *tab, int low, int high);
    void Insertion_Sort (int *tab, int numberOfElements);
};


