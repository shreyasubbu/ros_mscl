#include <iostream>
#include "ros/ros.h"
#include "std_msgs/String.h"

using namespace std;

#include "mscl/mscl.h"

#include "ros_mscl/getCurrentConfig.h"
#include "ros_mscl/parseData.h"
#include "ros_mscl/setCurrentConfig.h"
#include "ros_mscl/startSampling.h"
#include "ros_mscl/setToIdle.h"

int main(int argc, char **argv)
{
    ros::init(argc, argv, "mscl_node_test");

    //TODO: change these constants to match your setup
    const string COM_PORT = "/dev/ttyACM0";
    ROS_INFO("1");

    mscl::Connection connection = mscl::Connection::Serial(COM_PORT);

    //create an InertialNode with the connection
    mscl::InertialNode node(connection);
    /*try
    {
        //create a SerialConnection with the COM port


        cout << "Node Information: " << endl;
        cout << "Model Name: " << node.modelName() << endl;
        cout << "Model Number: " << node.modelNumber() << endl;
        cout << "Serial: " << node.serialNumber() << endl;
        cout << "Firmware: " << node.firmwareVersion().str() << endl << endl;

        ROS_INFO("1");


        ROS_INFO("2");
        //ros::NodeHandle n;
        //ros::Publisher test_pub = n.advertise<std_msgs::String>("test", 100);

        //TODO: Uncomment the lines below to run the examples

        //Example: Get Configuration
        //getCurrentConfig(node);

        //Example: Set Configuration
        //setCurrentConfig(node);       //Warning: this example changes settings on your Node!

        //Example: Start Sampling
        //startSampling(node);

        //Example: Set to Idle
        //setToIdle(node);

        //Example: Parse Data
        //parseData(node);
    }
    catch(mscl::Error& e)
    {
        cout << "Error: " << e.what() << endl;
    }

    system("pause");*/
    return 0;
}
