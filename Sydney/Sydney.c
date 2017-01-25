//
//  Sydney.c
//  Sydney
//
//  Created by Sydney Erickson on 1/24/17.
//  Copyright © 2017 Sydney Erickson. All rights reserved.
//

#include <mach/mach_types.h>

kern_return_t Sydney_start(kmod_info_t * ki, void *d);
kern_return_t Sydney_stop(kmod_info_t *ki, void *d);

kern_return_t Sydney_start(kmod_info_t * ki, void *d)
{
    printf("   _____           _                                        _                    \n");
    printf("  / ____|         | |                                      | |                   \n");
    printf(" | (___  _   _  __| |_ __   ___ _   _  __      ____ _ ___  | |__   ___ _ __ ___  \n");
    printf("  \___ \| | | |/ _` | '_ \ / _ \ | | | \ \ /\ / / _` / __| | '_ \ / _ \ '__/ _ \ \n");
    printf("  ____) | |_| | (_| | | | |  __/ |_| |  \ V  V / (_| \__ \ | | | |  __/ | |  __/ \n");
    printf(" |_____/ \__, |\__,_|_| |_|\___|\__, |   \_/\_/ \__,_|___/ |_| |_|\___|_|  \___| \n");
    printf("          __/ |                  __/ |                                           \n");
    printf("         |___/                  |___/                                            \n");
    printf("");
    printf("");
    printf("");
    return KERN_SUCCESS;
}

kern_return_t Sydney_stop(kmod_info_t *ki, void *d)
{
    return KERN_SUCCESS;
}
