#ifndef DLIB_UTILS
#define DLIB_UTILS

#include "dlib/image_processing/frontal_face_detector.h"
#include "dlib/image_processing/render_face_detections.h"
#include "dlib/image_processing.h"
#include <iostream>


namespace myu {
    void convertBytes(dlib::array2d<dlib::rgb_pixel>&, unsigned char*, int, int);
    std::vector<dlib::full_object_detection> predictLandmakars(
        unsigned char*, int, int, 
        dlib::frontal_face_detector, 
        dlib::shape_predictor&);
}


#endif //DLIB_UTILS