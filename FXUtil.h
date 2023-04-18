//******************************************************************************
// FXUTIL.H -- FlasherX utility functions
//******************************************************************************
#ifndef FXUTIL_H_
#define FXUTIL_H_

void read_ascii_line( Stream *serial, char *line, int maxbytes );
uint32_t update_firmware( Stream *in, Stream *out, uint32_t buffer_addr, uint32_t buffer_size );

#endif
