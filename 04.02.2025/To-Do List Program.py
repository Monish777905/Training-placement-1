def todo_list():
    tasks = []
    
    while True:
        print("\nTo-Do List")
        print("1. Add task")
        print("2. View tasks")
        print("3. Delete task")
        print("4. Exit")
        
        choice = input("Choose an option: ")
        
        if choice == '1':
            task = input("Enter the task: ")
            tasks.append(task)
            print("Task added!")
        elif choice == '2':
            if tasks:
                print("\nTasks:")
                for i, task in enumerate(tasks, start=1):
                    print(f"{i}. {task}")
            else:
                print("No tasks to display.")
        elif choice == '3':
            if tasks:
                print("\nTasks:")
                for i, task in enumerate(tasks, start=1):
                    print(f"{i}. {task}")
                task_num = int(input("Enter task number to delete: "))
                if 1 <= task_num <= len(tasks):
                    tasks.pop(task_num - 1)
                    print("Task deleted!")
                else:
                    print("Invalid task number.")
            else:
                print("No tasks to delete.")
        elif choice == '4':
            print("Exiting the to-do list program.")
            break
        else:
            print("Invalid option. Please try again.")

todo_list()
