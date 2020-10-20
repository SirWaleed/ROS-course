;; Auto-generated. Do not edit!


(when (boundp 'robot_t::num_words)
  (if (not (find-package "ROBOT_T"))
    (make-package "ROBOT_T"))
  (shadow 'num_words (find-package "ROBOT_T")))
(unless (find-package "ROBOT_T::NUM_WORDS")
  (make-package "ROBOT_T::NUM_WORDS"))
(unless (find-package "ROBOT_T::NUM_WORDSREQUEST")
  (make-package "ROBOT_T::NUM_WORDSREQUEST"))
(unless (find-package "ROBOT_T::NUM_WORDSRESPONSE")
  (make-package "ROBOT_T::NUM_WORDSRESPONSE"))

(in-package "ROS")





(defclass robot_t::num_wordsRequest
  :super ros::object
  :slots (_mystring ))

(defmethod robot_t::num_wordsRequest
  (:init
   (&key
    ((:mystring __mystring) "")
    )
   (send-super :init)
   (setq _mystring (string __mystring))
   self)
  (:mystring
   (&optional __mystring)
   (if __mystring (setq _mystring __mystring)) _mystring)
  (:serialization-length
   ()
   (+
    ;; string _mystring
    4 (length _mystring)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; string _mystring
       (write-long (length _mystring) s) (princ _mystring s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; string _mystring
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _mystring (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;;
   self)
  )

(defclass robot_t::num_wordsResponse
  :super ros::object
  :slots (_count ))

(defmethod robot_t::num_wordsResponse
  (:init
   (&key
    ((:count __count) 0)
    )
   (send-super :init)
   (setq _count (round __count))
   self)
  (:count
   (&optional __count)
   (if __count (setq _count __count)) _count)
  (:serialization-length
   ()
   (+
    ;; int32 _count
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; int32 _count
       (write-long _count s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; int32 _count
     (setq _count (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;;
   self)
  )

(defclass robot_t::num_words
  :super ros::object
  :slots ())

(setf (get robot_t::num_words :md5sum-) "b4834320f090e9235da913886638fb4e")
(setf (get robot_t::num_words :datatype-) "robot_t/num_words")
(setf (get robot_t::num_words :request) robot_t::num_wordsRequest)
(setf (get robot_t::num_words :response) robot_t::num_wordsResponse)

(defmethod robot_t::num_wordsRequest
  (:response () (instance robot_t::num_wordsResponse :init)))

(setf (get robot_t::num_wordsRequest :md5sum-) "b4834320f090e9235da913886638fb4e")
(setf (get robot_t::num_wordsRequest :datatype-) "robot_t/num_wordsRequest")
(setf (get robot_t::num_wordsRequest :definition-)
      "string mystring

---

int32 count

")

(setf (get robot_t::num_wordsResponse :md5sum-) "b4834320f090e9235da913886638fb4e")
(setf (get robot_t::num_wordsResponse :datatype-) "robot_t/num_wordsResponse")
(setf (get robot_t::num_wordsResponse :definition-)
      "string mystring

---

int32 count

")



(provide :robot_t/num_words "b4834320f090e9235da913886638fb4e")


