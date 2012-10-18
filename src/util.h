#ifndef HY_UTIL_H
#define HY_UTIL_H

#ifdef __cplusplus
extern "C" {
#endif

void *hy_free(void *mem);
const char *chksum_name(int chksum_type);
int chksum_type(const char *chksum_name);
char *chksum_str(const unsigned char *chksum, int type);

int hy_split_nevra(const char *nevra, char **name, long int *epoch,
		   char **version, char **release, char **arch);

#ifdef __cplusplus
}
#endif

#endif /* HY_UTIL_H */