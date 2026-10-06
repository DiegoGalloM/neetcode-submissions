class DynamicArray {

private:
    int* arr;
    int length;
    int cap;
public:

    DynamicArray(int capacity) {
        cap = capacity;
        length = 0;
        arr = new int[cap];
    }

    int get(int i) {
        return arr[i];
    }

    void set(int i, int n) {
        arr[i] = n;
    }

    void pushback(int n) {
        //Reviso que esté con espacio
        if(cap==length){
            resize();
        }

        arr[length++] = n;
    }

    int popback() {
        if(length > 0){
            length--;
        }
            int res = arr[length];
            return res;
    }

    void resize() {
        cap = 2 * cap;

        int* newArray = new int[cap];

        for(int i = 0; i < length; i++){
            newArray[i] = arr[i];
        }

        arr = newArray;
    }

    int getSize() {
        return length;
    }

    int getCapacity(){
        return cap;
    }
};
