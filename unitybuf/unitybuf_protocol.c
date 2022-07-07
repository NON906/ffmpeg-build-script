#include "unitybuf.h"

const URLProtocol ff_unitybuf_protocol = {
    .name           = "unitybuf",
    .url_open       = unitybuf_open,
    .url_close      = unitybuf_close,
    .url_write      = unitybuf_write,
    .url_read       = unitybuf_read,
    .priv_data_size = sizeof(UnitybufContext),
};