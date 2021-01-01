/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:18 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class IDSDevice, ATIDSSocket;

@interface ATIDSConnectionInfo : NSObject {

	unsigned _failureCount;
	IDSDevice* _device;
	long long _priority;
	double _wakeupTimestamp;
	unsigned long long _connectionState;
	ATIDSSocket* _socket;

}

@property (nonatomic,retain) IDSDevice * device;                              //@synthesize device=_device - In the implementation block
@property (assign,nonatomic) long long priority;                              //@synthesize priority=_priority - In the implementation block
@property (assign,nonatomic) double wakeupTimestamp;                          //@synthesize wakeupTimestamp=_wakeupTimestamp - In the implementation block
@property (assign,nonatomic) unsigned long long connectionState;              //@synthesize connectionState=_connectionState - In the implementation block
@property (assign,nonatomic) unsigned failureCount;                           //@synthesize failureCount=_failureCount - In the implementation block
@property (nonatomic,retain) ATIDSSocket * socket;                            //@synthesize socket=_socket - In the implementation block
-(id)init;
-(void)dealloc;
-(long long)priority;
-(void)setPriority:(long long)arg1 ;
-(IDSDevice *)device;
-(void)setDevice:(IDSDevice *)arg1 ;
-(unsigned)failureCount;
-(ATIDSSocket *)socket;
-(void)setSocket:(ATIDSSocket *)arg1 ;
-(unsigned long long)connectionState;
-(void)setConnectionState:(unsigned long long)arg1 ;
-(void)setFailureCount:(unsigned)arg1 ;
-(double)wakeupTimestamp;
-(void)setWakeupTimestamp:(double)arg1 ;
@end
