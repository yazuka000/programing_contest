#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifdef DEBUG
# define debug( fmt, ... ) \
        fprintf( stderr, "%s:%u: %s: " fmt "\n", \
                        __FILE__, __LINE__, __FUNCTION__, ##__VA_ARGS__ )
#else
# define debug( fmt, ... )
#endif /* DEBUG */


/*
 * block
 */

struct block_t {
        int height;
        int width;
        int pos_x;
};

int make_block(struct block_t* block, char *input_str)
{
        int height;
        int width;
        int pos_x;
        char *token;

        token = strtok(input_str, " ");
        if (token != NULL) {
                height = atoi(token);
        } else {
                return -1;
        }

        token = strtok(NULL, " ");
        if (token != NULL) {
                width = atoi(token);
        } else {
                return -1;
        }

        token = strtok(NULL, " ");
        if (token != NULL) {
                pos_x = atoi(token);
        } else {
                return -1;
        }

        block->height = height;
        block->width = width;
        block->pos_x = pos_x;

        return 0;
}

void debug_block(struct block_t* block)
{
        debug("height: %d", block->height);
        debug("width: %d", block->width);
        debug("pos_x: %d", block->pos_x);
}


/*
 * field
 */

struct field_t {
        int height;
        int width;
        int block_num;
        unsigned char *data;
};

#define FIELD_ELEMENT_NONE (0x00)
#define FIELD_ELEMENT_EXIST (0xFF)

int make_field(struct field_t* field, char *input_str)
{
        int height;
        int width;
        int block_num;
        char *token;

        token = strtok(input_str, " ");
        if (token != NULL) {
                height = atoi(token);
        } else {
                return -1;
        }

        token = strtok(NULL, " ");
        if (token != NULL) {
                width = atoi(token);
        } else {
                return -1;
        }

        token = strtok(NULL, " ");
        if (token != NULL) {
                block_num = atoi(token);
        } else {
                return -1;
        }

        field->height = height;
        field->width = width;
        field->block_num = block_num;
        field->data = (unsigned char*)malloc(height * width);
        if (field->data == NULL) {
                return -1;
        }
        memset(field->data, FIELD_ELEMENT_NONE, height * width);

        return 0;
}

void print_field(struct field_t *field)
{
        unsigned char elem;
        for (int i = 0; i < field->height; i++) {
                for (int j = 0; j < field->width; j++) {
                        elem = *(field->data + (i * field->width) + j);
                        if ( elem == FIELD_ELEMENT_NONE ) {
                                printf(".");
                        } else if ( elem == FIELD_ELEMENT_EXIST ) {
                                printf("#");
                        }
                }
                puts("");
        }
}

void put_field(struct field_t *field, struct block_t *block)
{
        int i;
        int j;
        int put_pos_y;
        unsigned char elem;

        /* check */
        for (i = 0; i < field->height; i++) {
                for (j = block->pos_x; j < (block->pos_x + block->width); j++) {
                        elem = *(field->data + (i * field->width) + j);
                        if (elem == FIELD_ELEMENT_EXIST) {
                                goto check_end;
                        }
                }
        }
check_end:
        put_pos_y = i - block->height;

        /* put */
        for (i = put_pos_y; i < (put_pos_y + block->height); i++) {
                for (j = block->pos_x; j < (block->pos_x + block->width); j++) {
                        *(field->data + (i * field->width) + j) = FIELD_ELEMENT_EXIST;
                }
        }
}

void debug_field(struct field_t* field)
{
        debug("height: %d", field->height);
        debug("width: %d", field->width);
        debug("block_num: %d", field->block_num);
}


/*
 * main
 */

int main(void)
{
        char input[32];
        struct field_t field;
        struct block_t block;

        /* field input */
        fgets(input, sizeof(input), stdin);
        if (make_field(&field, input) < 0 ) {
                fprintf(stderr, "make_field: input error.");
                return 1;
        }
        debug_field(&field);

        /* block input */
        for (int i = 0; i < field.block_num; i++) {
                fgets(input, sizeof(input), stdin);

                if (make_block(&block, input) < 0) {
                        fprintf(stderr, "make_block: input error.");
                        return 1;
                }
                debug_block(&block);
                put_field(&field, &block);
        }

        /* print field */
        print_field(&field);

        return 0;
}
