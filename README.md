Đặt bài toán

Phần cứng: 
- Mắc thêm một LED thứ hai vào bảng mạch phát triển (dùng test board) qua một chân GPIO nào đó
- Mắc một nút bấm khác vào chân GPIO nào đó

Phần mềm: Chỉ sử dụng nút bấm trên để thực hiện chức năng điều khiển hai LED (một cái là built-in trên devboard):
- Khi double click sẽ chuyển chế độ điều khiển giữa hai LED (LED1 và LED2)
- Khi single click sẽ bật tắt cái LED đang được điều khiển (LED1 hoặc 2, đã chọn ở bước 1)
- Khi giữ nút nhấn sẽ làm cái LED đang được điều khiển nhấp nháy 200ms một lần.
- Lưu ý: khử rung phím bấm
- Mục đích DEMO Project này sử dụng thư viện mã mở nổi tiếng gần đây là OneButton và thư viện LED tự viết để làm bài tập về nhà:

OneButton tác giả Matthias Hertel: https://github.com/mathertel/OneButton LED.h Cung cấp API sáng sủa để khởi tạo và điều khiển LED (đảo trạng thái - flip, và nháy - blink) Việc gom các chức năng đọc phím bấm và điều khiển LED như trên vào các thư viện để có thể tái sử dụng, và giúp mã sáng sủa hơn. Các chức năng như trong yêu cầu xuất hiện rất phổ biến ở hầu hết tất cả các project vi điều khiển. Project này cũng minh họa điểm mạnh của PIO là có thể dùng chung mã nguồn cho nhiều nền tảng phần cứng khác nhau, ở đây:

Chip ESP32 kiến trúc xtensa lõi kép
