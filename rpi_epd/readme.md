## 電子墨水螢幕顯示

#### 複製至目標裝置

scp -r ken@192.168.50.138:/home/ken/Desktop/spi_test/e-Paper/RaspberryPi_JetsonNano/c/examples D:\program\github_local\c_project\tiny_c\rpi_epd

#### 編譯與執行流程

在Windows 10 上使用cross compiler編譯，使用scp將編譯後檔案傳送至目標裝置(這邊是樹莓派 4B開發版)上進行執行。  

```sh
make        # run makefile
scp D:\program\github_local\c_project\tiny_c\rpi_epd\main ken@192.168.50.138:/home/ken/Desktop/remote_test
```

完成傳輸後需要執行以下步驟給予執行權限
```
 chmod +x main
 # then execute it
 ./main
 ```