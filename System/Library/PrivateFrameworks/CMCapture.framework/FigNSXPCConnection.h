/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:29 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSXPCConnection.h>

@protocol OS_dispatch_group;
@class NSObject;

@interface FigNSXPCConnection : NSXPCConnection {

	NSObject*<OS_dispatch_group> _connectionRunningGroup;
	BOOL _explicitlyInvalidated;

}

@property (nonatomic,readonly) BOOL explicitlyInvalidated;              //@synthesize explicitlyInvalidated=_explicitlyInvalidated - In the implementation block
-(void)dealloc;
-(void)invalidate;
-(void)resume;
-(void)setInvalidationHandler:(/*^block*/id)arg1 ;
-(void)blockUntilInvalidateHandlerHasBeenCalled;
-(BOOL)explicitlyInvalidated;
@end

