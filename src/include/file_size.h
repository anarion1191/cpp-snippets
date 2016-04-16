#include <stdexcept>
#include <sys/stat.h>

/***************************************************************************************************
 * Determines file size without opening the file. Compatible with Linux, Mac and Windows systems   *
 * Parameters:
 *     file_name
 ***************************************************************************************************/
long int file_size(const std::string& file_name) {
    #if defined(__unix__) || defined(__unix) || (defined(__APPLE__) && defined(__MACH__))
        #define STAT_IDENTIFIER stat //for MacOS X and other Unix-like systems
    #elif defined(_WIN32)
        #define STAT_IDENTIFIER _stat //for Windows systems, both 32bit and 64bit?
    #endif
    struct STAT_IDENTIFIER st;
    if(STAT_IDENTIFIER(file_name.c_str(), &st) == -1) {
        perror(nullptr);
        throw std::runtime_error("stat error!");
    }
    return st.st_size;
}
