/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:34 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject;

@interface GraphRenderer : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	BOOL _cancelled;

}
+(id)sharedRenderer;
+(void)clearSharedRenderer;
-(id)init;
-(void)performRenderOperation:(id)arg1 ;
@end

