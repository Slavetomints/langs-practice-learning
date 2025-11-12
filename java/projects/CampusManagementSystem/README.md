# Structure

```
CampusManagementSystem/
├── src/
│   ├── edu/university/campus/
│   │
│   │── academics/
│   │   ├── Course.java
│   │   ├── Assignment.java
│   │   ├── Exam.java
│   │   ├── Grade.java
│   │   ├── Schedule.java
│   │   ├── ScheduleEntry.java
│   │   └── Transcript.java
│   │
│   │── administration/
│   │   ├── Department.java
│   │   ├── Registrar.java
│   │   ├── University.java
│   │   ├── Role.java
│   │   └── Policy.java
│   │
│   │── finance/
│   │   ├── BillingAccount.java
│   │   ├── Payment.java
│   │   ├── Scholarship.java
│   │   └── AuditLog.java ?
│   │
│   │── people/
│   │   ├── Person.java
│   │   ├── Student.java
│   │   ├── Professor.java
│   │   └── Staff.java
│   │
│   │── communication/
│   │   ├── Announcement.java
│   │   ├── Notification.java
│   │   ├── MessageThread.java
│   │   ├── CommunicationSystem.java
│   │   └── AttendanceRecord.java ?
│   │
│   │── security/
│   │   ├── UserAccount.java
│   │   ├── Authenticator.java
│   │   └── Permission.java
│   │
│   │── io/
│   │   ├── Interface.java
│   │   ├── Command.java
│   │   ├── CommandProcessor.java
│   │   ├── MenuHandler.java
│   │   └── LoggerOutput.java
│   │
│   │── data/
│   │   ├── DataStore.java
│   │   ├── BackupUtility.java
│   │   ├── LogManager.java
│   │   └── Exporter.java
│   │
│   │── system/
│   │   ├── CampusSystem.java
│   │   └── SystemController.java
│   │
│   └── Main.java
│
├── bin/
├── lib/
├── CampusManagementSystem.uml
└── README.md
```