/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:00 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSProgress.h>

@protocol OS_xpc_object, OS_dispatch_queue;
@class NSObject;

@interface _GEOProgressForReceivingOverXPC : NSProgress {

	NSObject*<OS_xpc_object> _connection;
	NSObject*<OS_dispatch_queue> _queue;

}
-(void)dealloc;
-(void)cancel;
-(id)initWithEndpoint:(id)arg1 ;
-(void)_handleEvent:(id)arg1 ;
-(id)initVendingEndpoint:(id*)arg1 ;
@end

