

#define SIZE 25
enum record_status {
    EMPTY, DELETED, OCCUPIED
};

typedef struct {
    int st_id;
    char st_name[20];
} stu_t;

typedef struct {
    stu_t info;
    enum record_status status;
} hash_t;


int hashFunction(int key) {
    return (key % SIZE);
}

int search(int key, hash_t table[]) {
    int hashValue = hashFunction(key);
    for (int i = 0; i < SIZE; ++i) {
        if (table[(hashValue + i) % SIZE].status == EMPTY) {
            return -1;
        }

        if (table[(hashValue + i) % SIZE].info.st_id == key) {
            return (hashValue + i) % SIZE;
        }

    }
    return -1;

}

void insert(stu_t stu, hash_t table[]) {
    int hashValue = hashFunction(stu.st_id);
    for (int i = 0; i < SIZE; ++i) {
        if (table[(hashValue + i) % SIZE].status == EMPTY || table[(hashValue + i) % SIZE].status == DELETED) {
            table[(hashValue + i) % SIZE].info = stu;
            table[(hashValue + i) % SIZE].status = OCCUPIED;
            break;
        }
        if (table[(hashValue + i) % SIZE].info.st_id == stu.st_id) {
            // already exists
            break;
        }
    }
}

void delete(int key, hash_t table[]) {
    int position = search(key, table);
    if (position == -1) {
        // not exist
    } else {
        table[position].status = DELETED;
    }
}
