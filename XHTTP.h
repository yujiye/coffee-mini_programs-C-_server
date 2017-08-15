#pragma once

#include "XTcp.h"
#include <string.h>
#include <thread>
#include <regex>
#include <fstream>
using namespace std;

#include <iostream>
#include "parson_from_weixinLittleP_data.h"
#ifdef _WIN32
#pragma warning(disable:4996)
#include <windows.h>
#include "mysql_communicate.h"
#pragma comment (lib,"ws2_32.lib")
#endif


bool	writerDataToFile(std::string filepath, std::string data_need_to_writted, int length);

bool creat_html_aboutId(std::string * strJsonData, std::string id);

string GBKToUTF8(const std::string& strGBK);


class XHTTP {
public:
	// �������Ĺ��ܣ�1.parser the request data, which is client's requestment or the collect's requestment
   //            ��Ҫ�ǽ���http://wkzxc.imwork.net/XXXX/number/ �е�XXXX��client or collect   and the number
  //             2. send the return value of submain function 
 //   
	      void main_xhttp();        // ���պͷ������ݣ��� recv_data �����󣬵����Ӻ������д��������Ӻ����ķ���ֵ���з��͡�


		  //////////////////////////////////////////////////////
		  void delete_finishEqual_1();


		  ////////////////////////////////////////////////////


		//  void client_0_handle_xhttp(char * recvBuf);



		  // the above is the request of backup
		  void XHTTP::backup_1_handle_xhttp(char * recvBuf);     //������ѯ�ʡ�id �����ˡ�
		  void XHTTP::backup_2_handle_xhttp(char * recvBuf);     //      ����ָ��id�ε�backup
		  void XHTTP::backup_3_handle_xhttp(char * recvBuf);     //      ����ָ��id��picture ��backup

		  void XHTTP::backup_4_handle_xhttp(char * recvBuf);
		  void XHTTP::backup_5_handle_xhttp(char * recvBuf);







  // ������client��http ����  number�е�  1  2  3

		  void client_1_handle_xhttp(char * recvBuf);
		  bool XHTTP::insert_1_function(char * recvBuf, int * length_recv); //--------repeat------------

		  void client_2_handle_xhttp(char * recvBuf,int length_recv);
		  bool XHTTP::insert_function(char * recvBuf, int * length_recv);



		  void client_3_handle_xhttp(char * recvBuf);
		  //void client_3_handle_xhttp(char * recvBuf);

		  void  XHTTP::client_4_handle_xhttp(char * recvBuf);//  checking the finish status;


		  void XHTTP::http_send_function(std::string data_need_to_send);

  // ������collect��http����  number�е�  1  2  3  4

		//std::string collect_1_handle();
		//std::string collect_2_handle();
		//std::string collect_3_handle();
		//std::string collect_4_handle();
				
//private:

	void close_socket_xhttp();
		                                    //unsigned int sock_connect;
    XTcp socketConnect_1;
	string boundary;

};




























