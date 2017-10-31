#ifndef _IMAGEPROCESSWORKER_H_
#define _IMAGEPROCESSWORKER_H_

#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/opencv.hpp>

#include <QTextEdit>

#include <ImageProcessModule.h>

// Class ImageProcessWorker inherits from QObject
// because it provides the slots and signals.
class ImageProcessWorker : public QObject , public ImageProcessModule
{

    Q_OBJECT

public:
    ImageProcessWorker(QObject *parent);
    ~ImageProcessWorker();




    signals:
        void sendFrame(cv::Mat *Image);
        void connectStatusHasChanged(QString);
        void lostConnection();
        void cantConnectToCamera();
        void cantGrabImage();
        void frameHasGrabbed();

    public slots:
        void grabImageFromCamera();
        void changeSetup(int CameraIndex);
        void changeThresholdValue(int value);

};




#endif