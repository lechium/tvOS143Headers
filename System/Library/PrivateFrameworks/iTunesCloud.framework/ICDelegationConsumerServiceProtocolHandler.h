/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:47 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, NSOperationQueue;

@interface ICDelegationConsumerServiceProtocolHandler : NSObject {

	NSObject*<OS_dispatch_queue> _calloutQueue;
	NSOperationQueue* _operationQueue;

}
-(id)init;
-(void)getResponseForFinishDelegationRequest:(id)arg1 withSessionIDToRequestInfoMap:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)getResponseForStartDelegationRequest:(id)arg1 requestContext:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
@end

