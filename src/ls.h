/* the Music Player Daemon (MPD)
 * Copyright (C) 2003-2007 by Warren Dukes (warren.dukes@gmail.com)
 * This project's homepage is: http://www.musicpd.org
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#ifndef LS_H
#define LS_H

#include "decoder_list.h"

int lsPlaylists(int fd, const char *utf8path);

const char *getSuffix(const char *utf8file);

int isValidRemoteUtf8Url(const char *utf8url);

int isRemoteUrl(const char *url);

int myStat(const char *utf8file, struct stat *st);

int isDir(const char *utf8name);

int isPlaylist(const char *utf8file);

struct decoder_plugin *hasMusicSuffix(const char *utf8file, unsigned int next);

struct decoder_plugin *isMusic(const char *utf8file, time_t * mtime,
			       unsigned int next);

int printRemoteUrlHandlers(int fd);

int isFile(const char *utf8file, time_t * mtime);

#endif
