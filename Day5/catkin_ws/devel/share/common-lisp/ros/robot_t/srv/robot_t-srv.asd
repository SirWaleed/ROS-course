
(cl:in-package :asdf)

(defsystem "robot_t-srv"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "num_words" :depends-on ("_package_num_words"))
    (:file "_package_num_words" :depends-on ("_package"))
  ))