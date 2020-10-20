#!/usr/bin/python

from robot_t.srv import num_words
from robot_t.srv import num_wordsRequest
from robot_t.srv import num_wordsResponse
import rospy

def handle_count(req):
	print ("Returning the num of words in %s" %req.mystring)
	return num_wordsResponse(len(req.mystring.split()))


def count_server():
	rospy.init_node("node_4")
	i = rospy.Service("count", num_words, handle_count)
	print "ready to count words"
	rospy.spin()


if __name__ == "__main__":
	count_server()
