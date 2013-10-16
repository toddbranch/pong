/*
 * main.c
 * Author: Todd Branchflower
 * Date: 11 Oct 2013
 * Description: Demonstrates functionality of the pong.h library
 */

// added a comment

#include <stdio.h>
#include "pong.h"

int main(int argc, const char *argv[])
{
    ball_t ball = createBall(400, 420, 30, 40, 10); 

    while (1)
    {
        printf("Ball x:%d, y:%d\n", ball.position.x, ball.position.y);
        sleep(1);
        ball = moveBall(ball);
    }
    return 0;
}
