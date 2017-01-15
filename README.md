Image Resampling Library
=======

This is a simple yet flexible image resampling library that supports the following image samplers:

* Nearest
* Average
* Bilinear
* Gaussian
* Bicubic
* Catmull-Rom
* Mitchell-Netravali
* Cardinal
* B-Spline
* Spline
* Lanczos
* Lanczos-2
* Lanczos-3
* Lanczos-4
* Lanczos-5
* Coverage

This library supports each separable sampler in both a two-pass 1D and 2D flavor. All resampling operations also support  
size constraints (e.g. symmetric or pow-2 dimensions) and pad-filling. For more information about these filters, 
visit [this blog post](http://bertolami.com/index.php?engine=blog&content=posts&detail=inside-imagine-kernels).

# Supported Formats

Supported image formats may select between the following parameters:

* Fixed or Float
* Up to 4 channels
* Up to 32 bits per channel
* Small or big endian
* Signed or unsigned

The library uses a descriptive image format system, making it trivial to add new formats simply by inserting a valid new descriptor into the format list.

The following image formats are supported out of the box:

* R8
* R16
* D16
* R24
* D32
* R32
* R3G3B2
* R5G6B5
* R5G5B5A1
* R4G4B4A4
* R8G8B8
* R16G16B16
* R32G32B32
* R8G8B8A8
* R10G10B10A2
* R16G16B16A16
* R32G32B32A32
* R8S
* R16S
* R32S
* R8G8B8S
* R16G16B16S
* R32G32B32S
* R16F
* R32F
* R32G32F
* R16G16B16F
* R32G32B32F
* R16G16B16A16F
* R32G32B32A32F

# Usage

(Taken from Tutorial.cpp in the \Source folder):

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

# More Information

For more information about this library or the larger Imagine Framework, visit [bertolami.com](http://bertolami.com/index.php?engine=portfolio&content=graphics&detail=imagine-framework).
