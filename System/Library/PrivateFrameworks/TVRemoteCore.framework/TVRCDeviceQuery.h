/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:00 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol TVRCDeviceQueryDelegate;
@class NSSet;

@interface TVRCDeviceQuery : NSObject {

	id<TVRCDeviceQueryDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<TVRCDeviceQueryDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSSet * devices; 
+(id)_allDiscoveredDevices;
+(void)_allDiscoveredDevicesDidUpdate:(id)arg1 ;
+(void)fetchActiveEndpointUIDWithCompletion:(/*^block*/id)arg1 ;
-(void)dealloc;
-(id<TVRCDeviceQueryDelegate>)delegate;
-(void)setDelegate:(id<TVRCDeviceQueryDelegate>)arg1 ;
-(void)start;
-(void)stop;
-(NSSet *)devices;
@end
