#ifdef MCP_SUPPORT

#ifndef _MCPPKG_H
#define _MCPPKG_H

void show_mcp_error(McpFrame * mfr, char *topic, char *text);
void mcppkg_simpleedit(McpFrame * mfr, McpMesg * msg, McpVer ver, void *context);

#endif /* _MCPPKG_H */

#endif
