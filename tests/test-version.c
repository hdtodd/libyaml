#include <yaml/yaml.h>

#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

int
main(void)
{
    int major = -1;
    int minor = -1;
    int patch = -1;
    char buf[64];

    yaml_get_version(&major, &minor, &patch);
    sprintf(buf, "%d.%d.%d", major, minor, patch);
    assert(strcmp(buf, yaml_get_version_string()) == 0);

    return 0;
}