
#include "vnImagine.h"

int main(int argc, char **argv)
{
    CVImage source_image;
    CVImage resampled_image;

    if ( VN_FAILED( vnCreateImage( VN_IMAGE_FORMAT_R8G8B8, 
                                   640, 
                                   480, 
                                   &source_image ) ) )
    {
        printf( "Error! Unable to create the source image.");
        return -1;
    }

    // TODO(you): Copy 640x480 RGB image data into source_image->QueryData(). 

    if ( VN_FAILED( vnResizeImage( source_image, 
                                   VN_IMAGE_KERNEL_BILINEAR, 
                                   320, 
                                   240, 
                                   0, 
                                   &resampled_image ) ) )
    {
        printf( "Error! Unable to resample the source image.");
        return -1;
    }

    // TODO(you): The image is resampled! Go party with 'resampled_image'.

    return 0;
}