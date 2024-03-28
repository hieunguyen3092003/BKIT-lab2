# BKIT-lab
at first config code-generator in project: Configuration Tool -> Project Manager tab -> Code Generator -> and select Generate peripheral initialization as a pair of '.c /' h ' files per peripheral
when using function to display led 7 seg you should config clock APB2 Prescaler to devided to 4 to make the spi work as expected

# THÔNG TIN VỀ IC 74HC595D

IC 74HC595D là một bộ chuyển đổi dữ liệu (shift register) có khả năng mở rộng số lượng đầu ra của một vi mạch điện tử, thường được sử dụng trong các ứng dụng điều khiển và hiển thị LED.

Dưới đây là một số thông tin chi tiết và công dụng của IC 74HC595D:

Thông tin chi tiết:
Loại IC: 74HC595D thuộc loạt 74HC, là một loạt các IC logic CMOS. Điều này có nghĩa là nó sử dụng công nghệ CMOS để thực hiện các chức năng logic, có tiêu thụ năng lượng thấp và tốc độ hoạt động nhanh.
Gói chân: IC này thường có gói DIP (Dual In-line Package) hoặc SMD (Surface Mount Device), với 16 chân. Gói DIP thường được sử dụng cho các ứng dụng prototype hoặc các ứng dụng trên breadboard.
Nguyên lý hoạt động: IC 74HC595D hoạt động như một bộ chuyển đổi dữ liệu từ dạng tuần tự sang dạng song song. Nó có thể chuyển đổi dữ liệu từ dạng tuần tự (có thể từ một vi điều khiển) thành dạng song song (8 đầu ra), giúp vi điều khiển điều khiển nhiều thiết bị ngoại vi hoặc hiển thị LED.
Điện áp hoạt động: Điện áp hoạt động phổ biến của IC này là 5V, nhưng nó cũng có thể hoạt động trong một phạm vi điện áp rộng hơn tùy thuộc vào biến thể cụ thể của loạt 74HC.
Công dụng:
Hiển thị LED:
IC 74HC595D thường được sử dụng để điều khiển hiển thị LED 7 đoạn hoặc ma trận LED. Bằng cách kết hợp nhiều IC này, bạn có thể điều khiển một số lượng lớn LED một cách dễ dàng từ một số lượng chân IO hạn chế trên vi điều khiển.
Điều khiển các thiết bị ngoại vi:
Ngoài việc điều khiển LED, IC 74HC595D cũng có thể được sử dụng để điều khiển các thiết bị ngoại vi khác như đèn, cảm biến, motor, và các thiết bị khác yêu cầu đầu ra điều khiển.
Ứng dụng trong các mạch dự án DIY:
IC này thường được sử dụng trong các dự án DIY (tự làm) và các ứng dụng điện tử sáng tạo, cho phép người dùng tạo ra các hiệu ứng ánh sáng hoặc điều khiển các thiết bị điện tử một cách linh hoạt và hiệu quả.
IC 74HC595D là một thành phần quan trọng trong các ứng dụng điện tử, đặc biệt là trong việc điều khiển và hiển thị LED, và cung cấp khả năng mở rộng số lượng đầu ra của vi điều khiển.
