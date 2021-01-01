/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:35 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NetworkServiceProxy/NetworkServiceProxy-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_source;
@class NWEndpoint, NPAverage, NSNumber, NSDate, NSObject, NWTCPConnection, NSString;

@interface NPEdgeLatency : NSObject <NSSecureCoding> {

	BOOL _probeTFO;
	BOOL _probeNoTFOCookie;
	BOOL _passedReprobeThreshold;
	BOOL _needReprobe;
	BOOL _isObserving;
	unsigned long long _edgeIndex;
	NWEndpoint* _probeEndpoint;
	unsigned long long _roundTripTime;
	NPAverage* _roundTripAverage;
	NPAverage* _roundTripAverageObserved;
	NSNumber* _addressFamily;
	long long _interfaceType;
	long long _TFOStatus;
	long long _probeCount;
	NSDate* _creationDate;
	long long _reprobeCount;
	NSObject*<OS_dispatch_source> _probeTimer;
	NWTCPConnection* _probeConnection;
	/*^block*/id _probeCompletionHandler;
	NSNumber* _currentTimeout;

}

@property (assign) long long reprobeCount;                                //@synthesize reprobeCount=_reprobeCount - In the implementation block
@property (retain) NSObject*<OS_dispatch_source> probeTimer;              //@synthesize probeTimer=_probeTimer - In the implementation block
@property (retain) NWTCPConnection * probeConnection;                     //@synthesize probeConnection=_probeConnection - In the implementation block
@property (copy) id probeCompletionHandler;                               //@synthesize probeCompletionHandler=_probeCompletionHandler - In the implementation block
@property (retain) NSNumber * currentTimeout;                             //@synthesize currentTimeout=_currentTimeout - In the implementation block
@property (assign) BOOL needReprobe;                                      //@synthesize needReprobe=_needReprobe - In the implementation block
@property (assign) BOOL isObserving;                                      //@synthesize isObserving=_isObserving - In the implementation block
@property (assign) unsigned long long edgeIndex;                          //@synthesize edgeIndex=_edgeIndex - In the implementation block
@property (retain) NWEndpoint * probeEndpoint;                            //@synthesize probeEndpoint=_probeEndpoint - In the implementation block
@property (assign) unsigned long long roundTripTime;                      //@synthesize roundTripTime=_roundTripTime - In the implementation block
@property (retain) NPAverage * roundTripAverage;                          //@synthesize roundTripAverage=_roundTripAverage - In the implementation block
@property (retain) NPAverage * roundTripAverageObserved;                  //@synthesize roundTripAverageObserved=_roundTripAverageObserved - In the implementation block
@property (retain) NSNumber * addressFamily;                              //@synthesize addressFamily=_addressFamily - In the implementation block
@property (assign) long long interfaceType;                               //@synthesize interfaceType=_interfaceType - In the implementation block
@property (assign) BOOL probeTFO;                                         //@synthesize probeTFO=_probeTFO - In the implementation block
@property (assign) BOOL probeNoTFOCookie;                                 //@synthesize probeNoTFOCookie=_probeNoTFOCookie - In the implementation block
@property (assign) long long TFOStatus;                                   //@synthesize TFOStatus=_TFOStatus - In the implementation block
@property (readonly) NSString * addressFamilyString; 
@property (readonly) NSString * TFOStatusString; 
@property (readonly) NSString * connectionParametersString; 
@property (readonly) BOOL isTFOEnabled; 
@property (assign) long long probeCount;                                  //@synthesize probeCount=_probeCount - In the implementation block
@property (retain) NSDate * creationDate;                                 //@synthesize creationDate=_creationDate - In the implementation block
@property (assign) BOOL passedReprobeThreshold;                           //@synthesize passedReprobeThreshold=_passedReprobeThreshold - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)creationDate;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setCreationDate:(NSDate *)arg1 ;
-(void)setInterfaceType:(long long)arg1 ;
-(long long)interfaceType;
-(void)setProbeCount:(long long)arg1 ;
-(long long)probeCount;
-(NSNumber *)addressFamily;
-(void)setIsObserving:(BOOL)arg1 ;
-(BOOL)isObserving;
-(void)setAddressFamily:(NSNumber *)arg1 ;
-(unsigned long long)edgeIndex;
-(void)setEdgeIndex:(unsigned long long)arg1 ;
-(NPAverage *)roundTripAverageObserved;
-(unsigned long long)roundTripTime;
-(id)initWithProbeEndpoint:(id)arg1 probeTFO:(BOOL)arg2 ;
-(NPAverage *)roundTripAverage;
-(BOOL)passedReprobeThreshold;
-(NWEndpoint *)probeEndpoint;
-(long long)TFOStatus;
-(BOOL)probeTFO;
-(BOOL)probeNoTFOCookie;
-(void)setRoundTripTime:(unsigned long long)arg1 ;
-(void)setRoundTripAverage:(NPAverage *)arg1 ;
-(void)setRoundTripAverageObserved:(NPAverage *)arg1 ;
-(void)setPassedReprobeThreshold:(BOOL)arg1 ;
-(void)setTFOStatus:(long long)arg1 ;
-(void)setProbeTFO:(BOOL)arg1 ;
-(void)setProbeEndpoint:(NWEndpoint *)arg1 ;
-(void)setProbeNoTFOCookie:(BOOL)arg1 ;
-(NSString *)connectionParametersString;
-(NSString *)TFOStatusString;
-(void)addRoundTripSample:(unsigned long long)arg1 ;
-(NWTCPConnection *)probeConnection;
-(void)setCurrentTimeout:(NSNumber *)arg1 ;
-(void)setNeedReprobe:(BOOL)arg1 ;
-(void)setProbeTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_source>)probeTimer;
-(BOOL)fillTestLatency;
-(void)setProbeCompletionHandler:(id)arg1 ;
-(void)setProbeConnection:(NWTCPConnection *)arg1 ;
-(long long)reprobeCount;
-(void)setReprobeCount:(long long)arg1 ;
-(void)pingPong;
-(id)probeCompletionHandler;
-(BOOL)needReprobe;
-(NSNumber *)currentTimeout;
-(void)measureLatencyWithTimeout:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)isMatched:(id)arg1 parameters:(networkParameters*)arg2 ;
-(void)addRoundTripSamples:(id)arg1 ;
-(unsigned long long)getRoundTripSample:(unsigned long long)arg1 ;
-(void)addRoundTripSampleObserved:(unsigned long long)arg1 ;
-(NSString *)addressFamilyString;
-(BOOL)isTFOEnabled;
-(BOOL)isMatched:(id)arg1 ;
-(BOOL)isComplete:(BOOL)arg1 ;
@end

