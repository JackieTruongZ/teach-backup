
students = [
    "Nguyễn Văn A",
    "Trần Thị B",
    "Lê Văn Linh",
    "Phạm Thị D",
    "Đỗ Văn E",
    "Nguyễn Thị Linh"
]
students = [student for student in students if "Linh" not in student]

for i in range(len(students)):
    if students[i].startswith("N"):
        students[i] = students[i].upper()

print(students)
