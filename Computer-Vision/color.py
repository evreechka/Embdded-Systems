import numpy as np
import cv2

colors_border = {'red': (0, 9, 171, 180), 'orange': (10, 25), 'yellow': (26, 32), 'green': (33, 71),
                 'blue': (80, 92), 'dark-blue': (93, 132), 'purple': (133, 149), 'pink': (150, 170)}


def gstreamer_pipeline(
        capture_width=1280,
        capture_height=720,
        display_width=1280,
        display_height=720,
        framerate=30,
        flip_method=0,
):
    return (
            "nvarguscamerasrc ! "
            "video/x-raw(memory:NVMM), "
            "width=(int)%d, height=(int)%d, "
            "format=(string)NV12, framerate=(fraction)%d/1 ! "
            "nvvidconv flip-method=%d ! "
            "video/x-raw, width=(int)%d, height=(int)%d, format=(string)BGRx ! "
            "videoconvert ! "
            "video/x-raw, format=(string)BGR ! appsink max-buffers=1 drop=true"
            % (
                capture_width,
                capture_height,
                framerate,
                flip_method,
                display_width,
                display_height,
            )
    )


def define_color(mask_frame, rect_size):
    s_h = 255
    v_h = 255
    s_l = 50
    v_l = 50
    for color in colors_border.keys():
        color_upper = np.array([colors_border.get(color)[1], s_h, v_h])
        color_lower = np.array([colors_border.get(color)[0], s_l, v_l])
        mask_color = cv2.inRange(mask_frame, color_lower, color_upper)
        color_rate = np.count_nonzero(mask_color) / (rect_size * rect_size)
        if color_rate > 0.85:
            return color, color_rate
        if color == 'red':
            color_upper = np.array([colors_border.get(color)[3], s_h, v_h])
            color_lower = np.array([colors_border.get(color)[2], s_l, v_l])
            mask_color = cv2.inRange(mask_frame, color_lower, color_upper)
            color_rate = np.count_nonzero(mask_color) / (rect_size * rect_size)
            if color_rate > 0.85:
                return color, color_rate
    return 'unknown color', 1
# height / 2, width / 8 - first window's location
# height / 2, width / 2 - second window's location
# height / 2, 7 * width / 8 - third window's location


def area():
    rect_size = 100
    height, width, channels = frame.shape
    global area_num
    global k
    if k == ord('n'):
        area_num = (area_num + 1)%3

    start_point = [(int(width / 8 - rect_size / 2), int(height / 2 - rect_size / 2)),
                   (int(width / 2 - rect_size / 2), int(height / 2 - rect_size / 2)),
                   (int(7 * width / 8 - rect_size / 2), int(height / 2 - rect_size / 2))]
    end_point = [(int(width / 8 + rect_size / 2), int(height / 2 + rect_size / 2)),
                 (int(width / 2 + rect_size / 2), int(height / 2 + rect_size / 2)),
                 (int(7 * width / 8 + rect_size / 2), int(height / 2 + rect_size / 2))]


    return start_point[area_num], end_point[area_num]


def process(frame):
    rect_size = 100
    start_point, end_point = area()

    color = (0, 0, 0)
    thickness = 2

    rect = cv2.rectangle(frame, start_point, end_point, color, thickness)

    hsv_frame = cv2.cvtColor(frame, cv2.COLOR_BGR2HSV)
    mask_frame = hsv_frame[start_point[1]:end_point[1] + 1, start_point[0]:end_point[0] + 1]

    org = (end_point[0] - int(rect_size + area_num*30), end_point[1] + 25)
    font = cv2.FONT_HERSHEY_SIMPLEX
    fontScale = 0.7
    color_text, color_rate = define_color(mask_frame, rect_size)
    text = cv2.putText(rect, ' ' + color_text, org, font, fontScale, color, thickness, cv2.LINE_AA)

    av_hue = np.average(mask_frame[:, :, 0])
    av_sat = np.average(mask_frame[:, :, 1])
    av_val = np.average(mask_frame[:, :, 2])
    average = [int(av_hue), int(av_sat), int(av_val)]

    text = cv2.putText(rect, str(average) + " " + str(color_rate), (10, 50), font, fontScale, color, thickness,
                       cv2.LINE_AA)
    frame = text
    return frame


print('Press 4 to Quit the Application\n')
print('Press \'n\' to Change the Area\n')

# Open Default Camera
cap = cv2.VideoCapture(0)  # gstreamer_pipeline(flip_method=4), cv2.CAP_GSTREAMER)

area_num = 0
while (cap.isOpened()):
    # Take each Frame
    ret, frame = cap.read()
    # Flip Video vertically (180 Degrees)
    frame = cv2.flip(frame, 180)

    k = cv2.waitKey(1)
    # Show video
    cv2.imshow('Cam', process(frame))

    # Exit if "4" is pressed
    if k == 52:  # ord 4
        # Quit
        print('Good Bye!')
        break

# Release the Cap and Video
cap.release()
cv2.destroyAllWindows()
