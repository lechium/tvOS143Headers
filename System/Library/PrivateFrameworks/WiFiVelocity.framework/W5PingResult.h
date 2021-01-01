/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:05 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiVelocity.framework/WiFiVelocity
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WiFiVelocity/WiFiVelocity-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface W5PingResult : NSObject <NSCopying, NSSecureCoding> {

	NSString* _address;
	NSString* _interfaceName;
	double _timeout;
	double _wait;
	double _interval;
	long long _count;
	long long _trafficClass;
	unsigned long long _dataLength;
	double _packetLoss;
	double _min;
	double _max;
	double _avg;
	double _stddev;
	NSString* _command;
	NSString* _output;
	double _startedAt;
	double _endedAt;

}

@property (nonatomic,copy) NSString * address;                           //@synthesize address=_address - In the implementation block
@property (nonatomic,copy) NSString * interfaceName;                     //@synthesize interfaceName=_interfaceName - In the implementation block
@property (assign,nonatomic) double timeout;                             //@synthesize timeout=_timeout - In the implementation block
@property (assign,nonatomic) double wait;                                //@synthesize wait=_wait - In the implementation block
@property (assign,nonatomic) double interval;                            //@synthesize interval=_interval - In the implementation block
@property (assign,nonatomic) long long count;                            //@synthesize count=_count - In the implementation block
@property (assign,nonatomic) long long trafficClass;                     //@synthesize trafficClass=_trafficClass - In the implementation block
@property (assign,nonatomic) unsigned long long dataLength;              //@synthesize dataLength=_dataLength - In the implementation block
@property (assign,nonatomic) double packetLoss;                          //@synthesize packetLoss=_packetLoss - In the implementation block
@property (assign,nonatomic) double min;                                 //@synthesize min=_min - In the implementation block
@property (assign,nonatomic) double max;                                 //@synthesize max=_max - In the implementation block
@property (assign,nonatomic) double avg;                                 //@synthesize avg=_avg - In the implementation block
@property (assign,nonatomic) double stddev;                              //@synthesize stddev=_stddev - In the implementation block
@property (nonatomic,copy) NSString * command;                           //@synthesize command=_command - In the implementation block
@property (nonatomic,copy) NSString * output;                            //@synthesize output=_output - In the implementation block
@property (assign,nonatomic) double timestamp; 
@property (assign,nonatomic) double startedAt;                           //@synthesize startedAt=_startedAt - In the implementation block
@property (assign,nonatomic) double endedAt;                             //@synthesize endedAt=_endedAt - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)conformsToProtocol:(id)arg1 ;
-(id)description;
-(void)dealloc;
-(long long)count;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setTimeout:(double)arg1 ;
-(NSString *)address;
-(NSString *)interfaceName;
-(double)wait;
-(void)setCount:(long long)arg1 ;
-(double)interval;
-(void)setInterval:(double)arg1 ;
-(double)timestamp;
-(void)setMax:(double)arg1 ;
-(double)max;
-(double)timeout;
-(double)min;
-(void)setStartedAt:(double)arg1 ;
-(void)setEndedAt:(double)arg1 ;
-(double)startedAt;
-(double)endedAt;
-(void)setInterfaceName:(NSString *)arg1 ;
-(void)setAddress:(NSString *)arg1 ;
-(void)setCommand:(NSString *)arg1 ;
-(NSString *)command;
-(void)setTrafficClass:(long long)arg1 ;
-(long long)trafficClass;
-(NSString *)output;
-(void)setOutput:(NSString *)arg1 ;
-(void)setMin:(double)arg1 ;
-(double)avg;
-(void)setAvg:(double)arg1 ;
-(unsigned long long)dataLength;
-(void)setDataLength:(unsigned long long)arg1 ;
-(void)setWait:(double)arg1 ;
-(void)setPacketLoss:(double)arg1 ;
-(void)setStddev:(double)arg1 ;
-(double)packetLoss;
-(double)stddev;
@end

