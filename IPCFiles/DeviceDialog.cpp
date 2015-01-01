//************************************************************************
//
// � Copyright Cisco Systems, All Rights Reserved.
//  All use, disclosure, and/or reproduction of this material is 
//  prohibited unless authorized in writing. 
//
//************************************************************************
/*! /file
	File Name:	 DeviceDialog.cpp 
	Author:		 Ajan U. Nair 
	Date:		 Thu August 21 2008  	Time: 13:14:44 pm
	Revision:	 1.1
	Description: IPCFiles are generated using IpcFwGenerator program.
*/
#include "DeviceDialog.h"

void DeviceDialog::setVisible(bool bVisible)
{
	CPtmpBuffer *newBuf= new CPtmpBuffer(m_ptmpBuffer);
	std::string callName="setVisible";
	newBuf->write(callName);
	newBuf->write(eBool);

	newBuf->write(bVisible);

	newBuf->writeTypeValue(eVoid);
	CallResult callResult=m_ipcFramework->makeIPCCall(newBuf);
	if(!callResult.callStatus)
	{
		std::string errMsg="IPC call failed :";
		errMsg.append(callResult.errClassName);
		errMsg.append(":");
		errMsg.append(callResult.errInfo);
		throw IpcFwException(errMsg);
	}else
	{
		return ;
	}
}
void DeviceDialog::setWidgetVisible(std::string name,bool bVisible)
{
	CPtmpBuffer *newBuf= new CPtmpBuffer(m_ptmpBuffer);
	std::string callName="setWidgetVisible";
	newBuf->write(callName);
	newBuf->write(eString);

	newBuf->write(name);

	newBuf->write(eBool);

	newBuf->write(bVisible);

	newBuf->writeTypeValue(eVoid);
	CallResult callResult=m_ipcFramework->makeIPCCall(newBuf);
	if(!callResult.callStatus)
	{
		std::string errMsg="IPC call failed :";
		errMsg.append(callResult.errClassName);
		errMsg.append(":");
		errMsg.append(callResult.errInfo);
		throw IpcFwException(errMsg);
	}else
	{
		return ;
	}
}
void DeviceDialog::setDisabled(bool bDisabled)
{
	CPtmpBuffer *newBuf= new CPtmpBuffer(m_ptmpBuffer);
	std::string callName="setDisabled";
	newBuf->write(callName);
	newBuf->write(eBool);

	newBuf->write(bDisabled);

	newBuf->writeTypeValue(eVoid);
	CallResult callResult=m_ipcFramework->makeIPCCall(newBuf);
	if(!callResult.callStatus)
	{
		std::string errMsg="IPC call failed :";
		errMsg.append(callResult.errClassName);
		errMsg.append(":");
		errMsg.append(callResult.errInfo);
		throw IpcFwException(errMsg);
	}else
	{
		return ;
	}
}
void DeviceDialog::setWidgetDisable(std::string name,bool bDisabled)
{
	CPtmpBuffer *newBuf= new CPtmpBuffer(m_ptmpBuffer);
	std::string callName="setWidgetDisable";
	newBuf->write(callName);
	newBuf->write(eString);

	newBuf->write(name);

	newBuf->write(eBool);

	newBuf->write(bDisabled);

	newBuf->writeTypeValue(eVoid);
	CallResult callResult=m_ipcFramework->makeIPCCall(newBuf);
	if(!callResult.callStatus)
	{
		std::string errMsg="IPC call failed :";
		errMsg.append(callResult.errClassName);
		errMsg.append(":");
		errMsg.append(callResult.errInfo);
		throw IpcFwException(errMsg);
	}else
	{
		return ;
	}
}
