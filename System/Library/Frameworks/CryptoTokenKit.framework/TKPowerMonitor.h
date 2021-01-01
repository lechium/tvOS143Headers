/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:19 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
#import <CryptoTokenKit/CryptoTokenKit-Structs.h>
@class NSObject;

@interface TKPowerMonitor : NSObject {

	IONotificationPortRef _portRef;
	unsigned _handle;
	NSObject*<OS_dispatch_queue> _queue;
	BOOL _awaken;
	unsigned _kernelPort;

}

@property (assign) unsigned kernelPort;              //@synthesize kernelPort=_kernelPort - In the implementation block
@property (assign) BOOL awaken;                      //@synthesize awaken=_awaken - In the implementation block
+(id)defaultMonitor;
-(id)init;
-(unsigned)kernelPort;
-(void)setKernelPort:(unsigned)arg1 ;
-(BOOL)awaken;
-(void)setAwaken:(BOOL)arg1 ;
@end

