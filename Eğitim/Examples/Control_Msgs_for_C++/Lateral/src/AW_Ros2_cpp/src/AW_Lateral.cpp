#include <memory>
#include "rclcpp/rclcpp.hpp"
#include <string>
//#include <iostream>





#include "autoware_auto_control_msgs/msg/ackermann_control_command.hpp"

//#include "autoware_auto_control_msgs/msg/longitudinal_command.hpp"



using namespace std;
using std::placeholders::_1; // Represent the argument "this" can take

class MinimalSubscriber : public rclcpp::Node
{
  public:
    MinimalSubscriber() // Constructor
    : Node("AW_ROS2_subscriber") // Initalizer list, Give the name of the node
    {
      //subscriber_ = this->create_subscription<autoware_auto_control_msgs::msg::LongitudinalCommand>("/control/command/control_cmd", 10, std::bind(&MinimalSubscriber::subscribe_message, this, _1));
      subscriber_ = this->create_subscription<autoware_auto_control_msgs::msg::AckermannControlCommand>("/control/command/control_cmd", 10, std::bind(&MinimalSubscriber::subscribe_message, this, _1));
    
    }

   
    void subscribe_message(const autoware_auto_control_msgs::msg::AckermannControlCommand::SharedPtr message) const
    {
      RCLCPP_INFO(this->get_logger(), "Recieved - Steering_tire_angle : '%f', Steering_tire_rotation_rate : '%f'", message->lateral.steering_tire_angle, message->lateral.steering_tire_rotation_rate);
     
      
    }
    
    
    rclcpp::Subscription<autoware_auto_control_msgs::msg::AckermannControlCommand>::SharedPtr subscriber_; // Storing the shared pointer to the existing subscription object created by the create_subscription function
   
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<MinimalSubscriber>());
  rclcpp::shutdown();
  return 0;
}


