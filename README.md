# add new parameters as shown in RadarScan.msg
Header header\
uint16 radar_frame_idx\
uint16 point_id\
float32 x\
float32 y\
float32 z\
float32 range\
float32 velocity\
uint16 doppler_bin\
float32 bearing\
float32 intensity\
float32 intensity_snr_noise\
float32 noise\
string time_human\


If an error is reported, you can use the file suffixed with (copy) to build first, and then use the original file to rebuild after it can be run.
