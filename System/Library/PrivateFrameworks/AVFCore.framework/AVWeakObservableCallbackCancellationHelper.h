/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:58 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableArray;

@interface AVWeakObservableCallbackCancellationHelper : NSObject {

	NSMutableArray* _callbackRegistrations;

}
-(id)init;
-(void)dealloc;
-(void)addCallbackToCancel:(id)arg1 ;
-(void)cancelAllCallbacks;
@end

