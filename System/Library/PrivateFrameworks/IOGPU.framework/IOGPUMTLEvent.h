/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:05 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/IOGPU.framework/IOGPU
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <IOGPU/IOGPU-Structs.h>
@interface IOGPUMTLEvent : NSObject {

	_IOGPUDevice* _deviceRef;
	unsigned _eventName;
	unsigned long long _globalTraceObjectID;

}
-(void)dealloc;
-(id)initWithDevice:(_IOGPUDevice*)arg1 ;
-(unsigned)_encodeIOGPUKernelSignalEventCommandArgs:(IOGPUKernelCommandSignalOrWaitEventArgs*)arg1 value:(unsigned long long)arg2 ;
-(unsigned)_encodeIOGPUKernelWaitEventCommandArgs:(IOGPUKernelCommandSignalOrWaitEventArgs*)arg1 value:(unsigned long long)arg2 timeout:(unsigned)arg3 ;
@end

