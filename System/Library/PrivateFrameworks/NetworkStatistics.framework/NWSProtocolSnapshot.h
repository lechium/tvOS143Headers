/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:31 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/NetworkStatistics.framework/NetworkStatistics
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NetworkStatistics/NWSSnapshot.h>

@class NSDate, NSString, NSData;

@interface NWSProtocolSnapshot : NWSSnapshot {

	BOOL _interfaceUnknown;
	BOOL _interfaceLoopback;
	BOOL _interfaceCellular;
	BOOL _interfaceCellularViaFallback;
	BOOL _interfaceWifi;
	BOOL _interfaceWired;
	BOOL _interfaceAWDL;
	BOOL _interfaceExpensive;
	BOOL _interfaceCompanionLink;
	BOOL _countsIncludeHeaderOverhead;
	unsigned _interfaceIndex;
	unsigned _receiveBufferSize;
	unsigned _receiveBufferUsed;
	unsigned _trafficClass;
	int _processID;
	int _epid;
	NSDate* _flowStartTimestamp;
	double _flowDuration;
	unsigned long long _flowStartContinuousTime;
	unsigned long long _uniqueProcessID;
	NSString* _processName;
	unsigned long long _eupid;
	NSString* _uuid;
	NSString* _euuid;
	NSString* _vuuid;
	NSData* _localAddress;
	NSData* _remoteAddress;
	unsigned long long _networkActivityMapStartTime;
	unsigned long long _networkActivityMapPart1;
	unsigned long long _networkActivityMapPart2;
	unsigned long long _eventFlags;

}

@property (readonly) NSDate * flowStartTimestamp;                                 //@synthesize flowStartTimestamp=_flowStartTimestamp - In the implementation block
@property (readonly) double flowDuration;                                         //@synthesize flowDuration=_flowDuration - In the implementation block
@property (readonly) unsigned long long flowStartContinuousTime;                  //@synthesize flowStartContinuousTime=_flowStartContinuousTime - In the implementation block
@property (readonly) unsigned interfaceIndex;                                     //@synthesize interfaceIndex=_interfaceIndex - In the implementation block
@property (readonly) unsigned receiveBufferSize;                                  //@synthesize receiveBufferSize=_receiveBufferSize - In the implementation block
@property (readonly) unsigned receiveBufferUsed;                                  //@synthesize receiveBufferUsed=_receiveBufferUsed - In the implementation block
@property (readonly) unsigned trafficClass;                                       //@synthesize trafficClass=_trafficClass - In the implementation block
@property (readonly) unsigned long long uniqueProcessID;                          //@synthesize uniqueProcessID=_uniqueProcessID - In the implementation block
@property (readonly) int processID;                                               //@synthesize processID=_processID - In the implementation block
@property (readonly) NSString * processName;                                      //@synthesize processName=_processName - In the implementation block
@property (readonly) unsigned long long eupid;                                    //@synthesize eupid=_eupid - In the implementation block
@property (readonly) int epid;                                                    //@synthesize epid=_epid - In the implementation block
@property (readonly) NSString * uuid;                                             //@synthesize uuid=_uuid - In the implementation block
@property (readonly) NSString * euuid;                                            //@synthesize euuid=_euuid - In the implementation block
@property (readonly) NSString * vuuid;                                            //@synthesize vuuid=_vuuid - In the implementation block
@property (readonly) NSData * localAddress;                                       //@synthesize localAddress=_localAddress - In the implementation block
@property (readonly) NSData * remoteAddress;                                      //@synthesize remoteAddress=_remoteAddress - In the implementation block
@property (readonly) BOOL interfaceUnknown;                                       //@synthesize interfaceUnknown=_interfaceUnknown - In the implementation block
@property (readonly) BOOL interfaceLoopback;                                      //@synthesize interfaceLoopback=_interfaceLoopback - In the implementation block
@property (readonly) BOOL interfaceCellular;                                      //@synthesize interfaceCellular=_interfaceCellular - In the implementation block
@property (readonly) BOOL interfaceCellularViaFallback;                           //@synthesize interfaceCellularViaFallback=_interfaceCellularViaFallback - In the implementation block
@property (readonly) BOOL interfaceWifi;                                          //@synthesize interfaceWifi=_interfaceWifi - In the implementation block
@property (readonly) BOOL interfaceWired;                                         //@synthesize interfaceWired=_interfaceWired - In the implementation block
@property (readonly) BOOL interfaceAWDL;                                          //@synthesize interfaceAWDL=_interfaceAWDL - In the implementation block
@property (readonly) BOOL interfaceExpensive;                                     //@synthesize interfaceExpensive=_interfaceExpensive - In the implementation block
@property (readonly) BOOL interfaceCompanionLink;                                 //@synthesize interfaceCompanionLink=_interfaceCompanionLink - In the implementation block
@property (readonly) BOOL countsIncludeHeaderOverhead;                            //@synthesize countsIncludeHeaderOverhead=_countsIncludeHeaderOverhead - In the implementation block
@property (readonly) unsigned long long networkActivityMapStartTime;              //@synthesize networkActivityMapStartTime=_networkActivityMapStartTime - In the implementation block
@property (readonly) unsigned long long networkActivityMapPart1;                  //@synthesize networkActivityMapPart1=_networkActivityMapPart1 - In the implementation block
@property (readonly) unsigned long long networkActivityMapPart2;                  //@synthesize networkActivityMapPart2=_networkActivityMapPart2 - In the implementation block
@property (readonly) unsigned long long eventFlags;                               //@synthesize eventFlags=_eventFlags - In the implementation block
+(void)initialize;
-(NSData *)localAddress;
-(NSData *)remoteAddress;
-(NSString *)processName;
-(NSString *)uuid;
-(int)processID;
-(unsigned)trafficClass;
-(unsigned)interfaceIndex;
-(double)_intervalWithContinuousTime:(unsigned long long)arg1 ;
-(double)_referenceIntervalWithContinuousTime:(unsigned long long)arg1 ;
-(id)_createNSUUIDForBytes:(unsigned char)arg1 ;
-(id)_dateWithContinuousTime:(unsigned long long)arg1 ;
-(NSDate *)flowStartTimestamp;
-(double)flowDuration;
-(unsigned long long)flowStartContinuousTime;
-(unsigned)receiveBufferSize;
-(unsigned)receiveBufferUsed;
-(unsigned long long)uniqueProcessID;
-(unsigned long long)eupid;
-(int)epid;
-(NSString *)euuid;
-(NSString *)vuuid;
-(BOOL)interfaceUnknown;
-(BOOL)interfaceLoopback;
-(BOOL)interfaceCellular;
-(BOOL)interfaceCellularViaFallback;
-(BOOL)interfaceWifi;
-(BOOL)interfaceWired;
-(BOOL)interfaceAWDL;
-(BOOL)interfaceExpensive;
-(BOOL)interfaceCompanionLink;
-(BOOL)countsIncludeHeaderOverhead;
-(unsigned long long)networkActivityMapStartTime;
-(unsigned long long)networkActivityMapPart1;
-(unsigned long long)networkActivityMapPart2;
-(unsigned long long)eventFlags;
@end

