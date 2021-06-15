#include "dlib_utils.hpp"


std::vector<dlib::full_object_detection> myu::predictLandmakars(
    unsigned char* yuv, int w, int h,
    dlib::shape_predictor& sp
    ) {
    
    dlib::array2d<dlib::rgb_pixel> img;
    convertBytes(img, yuv, w, h);
    dlib::pyramid_up(img);
    
    std::vector<dlib::rectangle> dets = detector(img);
    std::vector<dlib::full_object_detection> shapes;
    
    for (unsigned long j = 0; j < dets.size(); ++j) {
        dlib::full_object_detection shape = sp(img, dets[j]);
        shapes.push_back(shape);
    }

    return shapes;
}