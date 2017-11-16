/****************************************************************
 *
 *        Copyright 2013, Big Switch Networks, Inc.
 *
 * Licensed under the Eclipse Public License, Version 1.0 (the
 * "License"); you may not use this file except in compliance
 * with the License. You may obtain a copy of the License at
 *
 *        http://www.eclipse.org/legal/epl-v10.html
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
 * either express or implied. See the License for the specific
 * language governing permissions and limitations under the
 * License.
 *
 ****************************************************************/

/**************************************************************************//**
 *
 *  /module/inc/AIM/aim_config.h
 *
 * @file
 * @brief AIM Configuration Defininitions.
 *
 * @addtogroup aim-config
 * @{
 *
 *****************************************************************************/
#ifndef __AIM_CONFIG_H__
#define __AIM_CONFIG_H__

struct aim_pvs_s;

#ifdef GLOBAL_INCLUDE_CUSTOM_CONFIG
#include <global_custom_config.h>
#endif
#ifdef AIM_INCLUDE_CUSTOM_CONFIG
#include <aim_custom_config.h>
#endif


/* <auto.start.cdefs(AIM_CONFIG_HEADER).header> */
/**
 * AIM_CONFIG_INCLUDE_LOGGING
 *
 * Include or exclude logging. */


#ifndef AIM_CONFIG_INCLUDE_LOGGING
#define AIM_CONFIG_INCLUDE_LOGGING 1
#endif

/**
 * AIM_CONFIG_PORTING_STDLIB
 *
 * Default all porting macros to use the C standard libraries. */


#ifndef AIM_CONFIG_PORTING_STDLIB
#define AIM_CONFIG_PORTING_STDLIB 1
#endif

/**
 * AIM_CONFIG_PORTING_INCLUDE_STDLIB_HEADERS
 *
 * Include standard library headers for stdlib porting macros. */


#ifndef AIM_CONFIG_PORTING_INCLUDE_STDLIB_HEADERS
#define AIM_CONFIG_PORTING_INCLUDE_STDLIB_HEADERS AIM_CONFIG_PORTING_STDLIB
#endif

/**
 * AIM_CONFIG_LOG_MESSAGE_SIZE
 *
 * Maximum log message buffer. */


#ifndef AIM_CONFIG_LOG_MESSAGE_SIZE
#define AIM_CONFIG_LOG_MESSAGE_SIZE 256
#endif

/**
 * AIM_CONFIG_LOG_INCLUDE_LINUX_TIMESTAMP
 *
 * Include timestamp option for log messages under Linux. */


#ifndef AIM_CONFIG_LOG_INCLUDE_LINUX_TIMESTAMP
#define AIM_CONFIG_LOG_INCLUDE_LINUX_TIMESTAMP 1
#endif

/**
 * AIM_CONFIG_LOG_INCLUDE_ENV_VARIABLES
 *
 * Allow module log settings overrides specified through environment variables. */


#ifndef AIM_CONFIG_LOG_INCLUDE_ENV_VARIABLES
#define AIM_CONFIG_LOG_INCLUDE_ENV_VARIABLES 1
#endif

/**
 * AIM_CONFIG_PVS_INCLUDE_TTY
 *
 * Assume availability of isatty() for PVS objects. */


#ifndef AIM_CONFIG_PVS_INCLUDE_TTY
#define AIM_CONFIG_PVS_INCLUDE_TTY 1
#endif

/**
 * AIM_CONFIG_LOG_INCLUDE_TTY_COLOR
 *
 * Include colors for log messages on tty output. */


#ifndef AIM_CONFIG_LOG_INCLUDE_TTY_COLOR
#define AIM_CONFIG_LOG_INCLUDE_TTY_COLOR AIM_CONFIG_PVS_INCLUDE_TTY
#endif

/**
 * AIM_CONFIG_INCLUDE_MODULES_INIT
 *
 * Include the aim_modules_init() function. This will call all module_init functions. Must have dependmodules.x generated by the builder. */


#ifndef AIM_CONFIG_INCLUDE_MODULES_INIT
#define AIM_CONFIG_INCLUDE_MODULES_INIT 0
#endif

/**
 * AIM_CONFIG_INCLUDE_MODULES_DENIT
 *
 * Include the aim_modules_denit() function. This will call all module_denit functions. Must have dependmodules.x generated by the builder. */


#ifndef AIM_CONFIG_INCLUDE_MODULES_DENIT
#define AIM_CONFIG_INCLUDE_MODULES_DENIT 0
#endif

/**
 * AIM_CONFIG_INCLUDE_MAIN
 *
 * Define main() in the AIM library. This function will call modules_init(), aim_main(), and modules_denit(). */


#ifndef AIM_CONFIG_INCLUDE_MAIN
#define AIM_CONFIG_INCLUDE_MAIN 0
#endif

/**
 * AIM_CONFIG_AIM_MAIN_FUNCTION
 *
 * The default application main function is 'aim_main'. You can redefine it explicitly using this config define. */


#ifndef AIM_CONFIG_AIM_MAIN_FUNCTION
#define AIM_CONFIG_AIM_MAIN_FUNCTION aim_main
#endif

/**
 * AIM_CONFIG_INCLUDE_ENV_ARGV
 *
 * Support retrieval of program arguments from the environment. Requires AIM_CONFIG_INCLUDE_MAIN. */


#ifndef AIM_CONFIG_INCLUDE_ENV_ARGV
#define AIM_CONFIG_INCLUDE_ENV_ARGV AIM_CONFIG_INCLUDE_MAIN
#endif

/**
 * AIM_CONFIG_ENV_ARGV_NAME
 *
 * The name of the environment variable from which program arguments should be extracted. */


#ifndef AIM_CONFIG_ENV_ARGV_NAME
#define AIM_CONFIG_ENV_ARGV_NAME "AIM_ENV_ARGV"
#endif

/**
 * AIM_CONFIG_INCLUDE_VALGRIND
 *
 * Include valgrind compile-time macros.  */


#ifndef AIM_CONFIG_INCLUDE_VALGRIND
#define AIM_CONFIG_INCLUDE_VALGRIND 0
#endif

/**
 * AIM_CONFIG_INCLUDE_DAEMONIZE
 *
 * Include daemon and restart support. Requires AIM_CONFIG_INCLUDE_MAIN and POSIX. */


#ifndef AIM_CONFIG_INCLUDE_DAEMONIZE
#define AIM_CONFIG_INCLUDE_DAEMONIZE AIM_CONFIG_INCLUDE_MAIN
#endif

/**
 * AIM_CONFIG_INCLUDE_PVS_SYSLOG
 *
 * Include syslog pvs. */


#ifndef AIM_CONFIG_INCLUDE_PVS_SYSLOG
#define AIM_CONFIG_INCLUDE_PVS_SYSLOG 0
#endif

/**
 * AIM_CONFIG_PVS_SYSLOG_IDENT_DEFAULT
 *
 * Syslog ident string for openlog(). Must be specified. */


#ifndef AIM_CONFIG_PVS_SYSLOG_IDENT_DEFAULT
#define AIM_CONFIG_PVS_SYSLOG_IDENT_DEFAULT "AIM"
#endif

/**
 * AIM_CONFIG_PVS_SYSLOG_OPTIONS_DEFAULT
 *
 * Default options for openlog() */


#ifndef AIM_CONFIG_PVS_SYSLOG_OPTIONS_DEFAULT
#define AIM_CONFIG_PVS_SYSLOG_OPTIONS_DEFAULT LOG_PID
#endif

/**
 * AIM_CONFIG_PVS_SYSLOG_FACILITY_DEFAULT
 *
 * Default facility for openlog() */


#ifndef AIM_CONFIG_PVS_SYSLOG_FACILITY_DEFAULT
#define AIM_CONFIG_PVS_SYSLOG_FACILITY_DEFAULT LOG_DAEMON
#endif

/**
 * AIM_CONFIG_INCLUDE_OS_POSIX
 *
 * Include support for the POSIX OS abstraction. */


#ifndef AIM_CONFIG_INCLUDE_OS_POSIX
#define AIM_CONFIG_INCLUDE_OS_POSIX 1
#endif



/**
 * All compile time options can be queried or displayed
 */

/** Configuration settings structure. */
typedef struct aim_config_settings_s {
    /** name */
    const char* name;
    /** value */
    const char* value;
} aim_config_settings_t;

/** Configuration settings table. */
/** aim_config_settings table. */
extern aim_config_settings_t aim_config_settings[];

/**
 * @brief Lookup a configuration setting.
 * @param setting The name of the configuration option to lookup.
 */
const char* aim_config_lookup(const char* setting);

/**
 * @brief Show the compile-time configuration.
 * @param pvs The output stream.
 */
int aim_config_show(struct aim_pvs_s* pvs);

/* <auto.end.cdefs(AIM_CONFIG_HEADER).header> */


#if defined(AIM_CONFIG_INCLUDE_POSIX) && AIM_CONFIG_INCLUDE_POSIX == 1
    #ifndef _POSIX_C_SOURCE
        #define _POSIX_C_SOURCE 200809L
    #endif
#else
    #ifdef _POSIX_C_SOURCE
        #undef _POSIX_C_SOURCE
    #endif
#endif


#if defined(AIM_CONFIG_INCLUDE_GNU_SOURCE) && AIM_CONFIG_INCLUDE_GNU_SOURCE == 1
#define _GNU_SOURCE
#else
    #ifdef _GNU_SOURCE
        #undef _GNU_SOURCE
    #endif
#endif


#include <stdint.h>

#include "aim_porting.h"
#endif /* __AIM_CONFIG_H__ */
/*@}*/
