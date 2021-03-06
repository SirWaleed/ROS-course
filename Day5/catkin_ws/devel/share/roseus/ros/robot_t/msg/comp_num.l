;; Auto-generated. Do not edit!


(when (boundp 'robot_t::comp_num)
  (if (not (find-package "ROBOT_T"))
    (make-package "ROBOT_T"))
  (shadow 'comp_num (find-package "ROBOT_T")))
(unless (find-package "ROBOT_T::COMP_NUM")
  (make-package "ROBOT_T::COMP_NUM"))

(in-package "ROS")
;;//! \htmlinclude comp_num.msg.html


(defclass robot_t::comp_num
  :super ros::object
  :slots (_real _imaginary ))

(defmethod robot_t::comp_num
  (:init
   (&key
    ((:real __real) 0)
    ((:imaginary __imaginary) 0)
    )
   (send-super :init)
   (setq _real (round __real))
   (setq _imaginary (round __imaginary))
   self)
  (:real
   (&optional __real)
   (if __real (setq _real __real)) _real)
  (:imaginary
   (&optional __imaginary)
   (if __imaginary (setq _imaginary __imaginary)) _imaginary)
  (:serialization-length
   ()
   (+
    ;; int32 _real
    4
    ;; int32 _imaginary
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; int32 _real
       (write-long _real s)
     ;; int32 _imaginary
       (write-long _imaginary s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; int32 _real
     (setq _real (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; int32 _imaginary
     (setq _imaginary (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;;
   self)
  )

(setf (get robot_t::comp_num :md5sum-) "29494601c99dbe58165af75a7e636359")
(setf (get robot_t::comp_num :datatype-) "robot_t/comp_num")
(setf (get robot_t::comp_num :definition-)
      "int32 real
int32 imaginary

")



(provide :robot_t/comp_num "29494601c99dbe58165af75a7e636359")


