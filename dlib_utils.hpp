#ifndef DLIB_UTILS
#define DLIB_UTILS

#include "dlib/image_processing/frontal_face_detector.h"
#include "dlib/image_processing/render_face_detections.h"
#include "dlib/image_processing.h"
#include <iostream>

#define DETECTOR_FILE "./shape_predictor_68_face_landmarks_GTX.dat"

namespace myu {
    dlib::frontal_face_detector detector = dlib::get_frontal_face_detector();
    dlib::shape_predictor sp;
    void setShapePredictor();
    void convertBytes(dlib::array2d<dlib::rgb_pixel>&, unsigned char*, int, int);
    std::vector<dlib::full_object_detection> predictLandmakars(unsigned char*, int, int);
}


#endif //DLIB_UTILS