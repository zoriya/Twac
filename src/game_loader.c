/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** game_loader
*/

#include "engine.h"
#include "runner.h"

int start_game(void)
{
    gc_engine *engine = engine_create("Runner");

    if (!engine)
        return (ERROR);
    if (create_game_scene(engine) < 0)
        return (ERROR);
    while (engine->is_open(engine)) {
        engine->game_loop(engine);
    }
    return (0);
}