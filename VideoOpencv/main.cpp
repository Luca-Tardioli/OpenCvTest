#include <opencv4/opencv2/opencv.hpp>
#include <iostream>

int main()
{
    // Open the video file
    cv::VideoCapture cap("C:/Users/ssabb/Downloads/Hashira.mp4");

    // Check if the video was opened successfully
    if (!cap.isOpened()) {
        std::cout << "Error: Could not open video file." << std::endl;
        return -1;
    }
    else {
        std::cout << "Video file opened successfully!" << std::endl;
    }

    // Read the first frame to confirm reading
    cv::Mat frame;
    bool ret = cap.read(frame);

    if (ret) {

        // Display the frame using imshow
        cv::imshow("First Frame", frame);
        cv::waitKey(0);  // Wait for a key press to close the window
        cv::destroyAllWindows();  // Close the window
    }
    else {
        std::cout << "Error: Could not read the frame." << std::endl;
    }

    // Release the video capture object
    cap.release();
    return 0;
}