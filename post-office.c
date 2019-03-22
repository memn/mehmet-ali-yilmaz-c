#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define MAX_STRING_LENGTH 6

struct package {
    char *id;
    int weight;
};

typedef struct package package;

struct post_office {
    int min_weight;
    int max_weight;
    package *packages;
    int packages_count;
};

typedef struct post_office post_office;

struct town {
    char *name;
    post_office *offices;
    int offices_count;
};

bool targetCanCarry(int target_min, int target_max, int sending) {
    return sending <= target_max && sending >= target_min;
}


typedef struct town town;

void print_all_packs_in(post_office office) {
    for (int i = 0; i < office.packages_count; ++i) {
        printf("\t\t%s\n", office.packages[i]);
    }
}

void print_all_packages(town t) {
    printf("%s:\n", t.name);
    for (int i = 0; i < t.offices_count; ++i) {
        printf("\t%d:\n", i);
        print_all_packs_in(t.offices[i]);
    }

}

void send_package_to(post_office *office, package pack) {
    package *new_queue = malloc(sizeof(package) * (office->packages_count + 1));
    for (int i = 0; i < office->packages_count; ++i) {
        new_queue[i] = office->packages[i];
    }
    new_queue[office->packages_count] = pack;
//    free(office->packages);
    office->packages = new_queue;
    office->packages_count++;

}

void send_all_acceptable_packages(town *source, int source_office_index, town *target, int target_office_index) {
    int target_max = target->offices[target_office_index].max_weight;
    int target_min = target->offices[target_office_index].min_weight;
    int remaning_count = 0;
    for (int i = 0; i < source->offices[source_office_index].packages_count; ++i) {
        package sending = source->offices[source_office_index].packages[i];
        if (targetCanCarry(target_min, target_max, sending.weight)) {
            send_package_to(&target->offices[target_office_index], sending);
            sending.weight = -1;

        } else {
            remaning_count++;
        }
    }
    // tekrar kalanlari siraya koy
    package *remanings = malloc(sizeof(package) * remaning_count);
    for (int j = 0, i = 0; j < source->offices[source_office_index].packages_count; ++j) {
        if (source->offices[source_office_index].packages[j].weight != -1) {
            remanings[i++] = source->offices[source_office_index].packages[j];
        }
    }
    // eskileri sil
//    free(source->offices[source_office_index].packages);
    source->offices[source_office_index].packages = remanings;
    source->offices[source_office_index].packages_count = remaning_count;

}

int packs_in(town town) {
    int pack_count = 0;
    for (int i = 0; i < town.offices_count; ++i) {
        pack_count += town.offices[i].packages_count;
    }
    return pack_count;
}

town town_with_most_packages(town *towns, int towns_count) {
    town max_town = towns[0];
    int max = -1;
    for (int i = 0; i < towns_count; ++i) {
        int pack_count_in_town = packs_in(towns[i]);
        if (max < pack_count_in_town) {
            max = pack_count_in_town;
            max_town = towns[i];
        }
    }
    return max_town;

}

town *find_town(town *towns, int towns_count, char *name) {
    for (int i = 0; i < towns_count; i++) {
        if (strcmp(towns[i].name, name) == 0) {
            return &towns[i];
        }
    }
    return towns;
}

int main1() {
    int towns_count;
    scanf("%d", &towns_count);
    town *towns = malloc(sizeof(town) * towns_count);
    for (int i = 0; i < towns_count; i++) {
        towns[i].name = malloc(sizeof(char) * MAX_STRING_LENGTH);
        scanf("%s", towns[i].name);
        scanf("%d", &towns[i].offices_count);
        towns[i].offices = malloc(sizeof(post_office) * towns[i].offices_count);
        for (int j = 0; j < towns[i].offices_count; j++) {
            scanf("%d%d%d", &towns[i].offices[j].packages_count, &towns[i].offices[j].min_weight,
                  &towns[i].offices[j].max_weight);
            towns[i].offices[j].packages = malloc(sizeof(package) * towns[i].offices[j].packages_count);
            for (int k = 0; k < towns[i].offices[j].packages_count; k++) {
                towns[i].offices[j].packages[k].id = malloc(sizeof(char) * MAX_STRING_LENGTH);
                scanf("%s", towns[i].offices[j].packages[k].id);
                scanf("%d", &towns[i].offices[j].packages[k].weight);
            }
        }
    }
    int queries;
    scanf("%d", &queries);
    char town_name[MAX_STRING_LENGTH];
    while (queries--) {
        int type;
        scanf("%d", &type);
        switch (type) {
            case 1:
                scanf("%s", town_name);
                town *t = find_town(towns, towns_count, town_name);
                print_all_packages(*t);
                break;
            case 2:
                scanf("%s", town_name);
                town *source = find_town(towns, towns_count, town_name);
                int source_index;
                scanf("%d", &source_index);
                scanf("%s", town_name);
                town *target = find_town(towns, towns_count, town_name);
                int target_index;
                scanf("%d", &target_index);
                send_all_acceptable_packages(source, source_index, target, target_index);
                break;
            case 3:
                printf("Town with the most number of packages is %s\n",
                       town_with_most_packages(towns, towns_count).name);
                break;
        }
    }
    return 0;
}

