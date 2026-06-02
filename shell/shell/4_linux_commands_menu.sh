#!/bin/bash

display_menu() {
    echo "Select a command to execute:"
    echo "1) Display current date and time"
    echo "2) List files in current directory"
    echo "3) Show current working directory"
    echo "4) Display disk usage"
    echo "5) Show system information"
    echo "6) Display logged-in users"
    echo "7) Show memory usage"
    echo "8) Display network configuration"
    echo "9) Show running processes"
    echo "10) Exit"
}


while true; do
    display_menu
    read -p "Enter your choice (1-10): " choice
    case $choice in
        1)
            echo "Current date and time: $(date)"
            ;;
        2)
            echo "Files in current directory:"
            ls -l
            ;;
        3)
            echo "Current working directory: $(pwd)"
            ;;
        4)
            echo "Disk usage:"
            df -h
            ;;
        5)
            echo "System information:"
            uname -a
            ;;
        6)
            echo "Logged-in users:"
            who
            ;;
        7)
            echo "Memory usage:"
            free -h
            ;;
        8)
            echo "Network configuration:"
            ip link show
            ;;
        9)
            echo "Running processes:"
            ps aux
            ;;
        10)
            echo "Exiting..."
            break
            ;;
        *)
            echo "Invalid option, please select again."
            ;;
    esac
    echo "" 
done
