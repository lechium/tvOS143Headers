/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:28 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFOperation.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol HMFLocking;
@class HMDMediaEndpoint, NSArray, NSString;

@interface HMDMediaAccessoryBrowseOperation : HMFOperation <HMFLogging> {

	id<HMFLocking> _lock;
	void* _session;
	unsigned _endpointFeatures;
	HMDMediaEndpoint* _endpoint;
	NSArray* _outputDevices;
	NSString* _accessoryIdentifier;

}

@property (copy,readonly) NSString * accessoryIdentifier;              //@synthesize accessoryIdentifier=_accessoryIdentifier - In the implementation block
@property (assign) unsigned endpointFeatures;                          //@synthesize endpointFeatures=_endpointFeatures - In the implementation block
@property (readonly) HMDMediaEndpoint * endpoint;                      //@synthesize endpoint=_endpoint - In the implementation block
@property (readonly) NSArray * outputDevices;                          //@synthesize outputDevices=_outputDevices - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(double)defaultTimeout;
-(void)dealloc;
-(void)cancel;
-(HMDMediaEndpoint *)endpoint;
-(void)main;
-(NSArray *)outputDevices;
-(unsigned)endpointFeatures;
-(void)setEndpointFeatures:(unsigned)arg1 ;
-(NSString *)accessoryIdentifier;
-(id)initWithAccessoryIdentifier:(id)arg1 ;
-(id)initWithAccessoryIdentifier:(id)arg1 timeout:(double)arg2 ;
@end

