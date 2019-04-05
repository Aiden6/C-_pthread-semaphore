# (c) BYD Auto Ltd.

#######################################################
#                                                     #
# AutoMatic Driving System API Library Build Targets  #
#                                                     #
#######################################################

INC_TEST_DIR = -I./include
INC_TEST_DIR += -I./../../include
SRC_TEST_DIR = ./source
#LIB_TEST_DIR = ./../../libs
LIB_TEST_DIR = -L./libs 
OBJ_TEST_DIR = ./binary

CC = gcc
CFLAGS = -g -Wall
RM = rm

TEST_SRCS = $(foreach dir, $(SRC_TEST_DIR), $(wildcard $(dir)/*.c))
TEST_LIBS = $(foreach dir, $(LIB_TEST_DIR), $(wildcard $(dir)/*.so))

APP_NAME = $(OBJ_TEST_DIR)/test_app

$(APP_NAME):$(TEST_SRCS)
	$(CC) $(CFLAGS) $^ $(INC_TEST_DIR) -o $@ -lidriving_can $(LIB_TEST_DIR) -lpthread -lusbcan -lm -lrt

.PHONY:clean
clean:
	$(RM) -rf $(OBJ_TEST_DIR)/*
