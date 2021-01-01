/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:04 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Extensions/IOHIDFamily.kext/PlugIns/IOHIDLib.plugin/IOHIDLib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <IOHIDLib/IOHIDLib-Structs.h>
#import <IOHIDLib/IOHIDDeviceClass.h>

@interface IOHIDObsoleteDeviceClass : IOHIDDeviceClass {

	IOHIDDeviceInterface122* _interface;
	IONotificationPortRef _notifyPort;
	unsigned _notification;
	/*function pointer*/void* _removalCallback;
	void* _removalTarget;
	void* _removalRefcon;
	/*function pointer*/void* _reportCallback;
	void* _reportCallbackTarget;
	void* _reportCallbackRefcon;

}
-(id)init;
-(void)dealloc;
-(int)queryInterface:(SCD_Struct_IO0)arg1 outInterface:(void*)arg2 ;
-(int)start:(id)arg1 service:(unsigned)arg2 ;
-(int)getElementValue:(unsigned)arg1 value:(IOHIDEventStruct*)arg2 options:(unsigned)arg3 ;
-(int)setRemovalCallback:(/*function pointer*/void*)arg1 removalTarget:(void*)arg2 removalRefcon:(void*)arg3 ;
-(int)setElementValue:(unsigned)arg1 value:(IOHIDEventStruct*)arg2 ;
-(IOHIDQueueInterface*)allocQueue;
-(IOHIDOutputTransactionInterface*)allocOutputTransaction;
-(int)copyMatchingElements:(CFDictionaryRef)arg1 element:(const _CFArray*)arg2 ;
-(int)setInterruptReportHandlerCallback:(void*)arg1 reportBufferSize:(unsigned)arg2 callback:(/*function pointer*/void*)arg3 callbackTarget:(void*)arg4 callbackRefcon:(void*)arg5 ;
@end
