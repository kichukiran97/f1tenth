#!/bin/bash

session="lane_following"

# Start a new tmux session in detached mode
tmux new-session -d -s $session

# Enable mouse mode
tmux setw -g mouse on

# Rename the default window to 'test1'
tmux rename-window -t $session:0 'test1'

# Send commands to the first pane in the first window
tmux send-keys -t $session:0 'ros2 launch f1tenth_stack bringup_launch_2.py' C-m

# Split the window into panes and send commands
tmux split-window -v -t $session:0
tmux send-keys -t $session:0.1 'ros2 run camera_subscriber_pkg camera_subscriber_raw' C-m

tmux split-window -v -t $session:0.1
tmux send-keys -t $session:0.2 'ros2 run birds_eye_view start_birds_eye_view.py' C-m

tmux split-window -v -t $session:0.2
tmux send-keys -t $session:0.3 'ros2 run camera_subscriber_pkg camera_subscriber' C-m

tmux split-window -h -t $session:0.3
tmux send-keys -t $session:0.4 'ros2 run lane_following follow_lanes.py' C-m

tmux split-window -h -t $session:0.4
tmux send-keys -t $session:0.5 'ros2 run lane_pure_pursuit pure_pursuit_node' C-m

# Attach to the tmux session
tmux attach-session -t $session
